#include <Keyboard>
#include <USB>

bool shift = false;

USB usb;

void setup()
{
  Serial.begin(115200);
  usb.Task();
  Keyboard.begin();
  delay(2000);

  // Als USB niet connectie heeft
  if (usb.lastError() != 0x0)
     exit(-1);
    
}

void loop(){
  
  // Alle ASCII karakters
  for(int i=0;i<256;i++
  {
    int key = keyboard.parse(i);
    
    if (key.isPressed == i)
    {
      if Keyboard.parse(VK_SHIFT);
        shift = true;
      else
        shift = false;

      // Shift maakt alleen verschil bij lage karakters
      int temp = i ? i - (32 * shift) : i >= 97 && i <= 127;
      Keyboard.write(temp);
    }
    
  }
}
