#include <TimerOne.h>
#include <MultiFuncShield.h>

enum RodzajPracyMinutnika
{
  NASTAWIANIE,
  ODLICZANIE
};

byte PracaMinutnika = NASTAWIANIE;

byte setne = 0; //zeby ladnie sie zatzrymywal
double seconds = 0;
double minutes = 0;

void setup() 
{
  Timer1.initialize();
  MFS.initialize(&Timer1);    
  MFS.write(seconds, 2);
}


void loop() 
{
  
  byte przycisk = MFS.getButton();
  
  switch (PracaMinutnika)
  {
    case NASTAWIANIE:
        if (przycisk == BUTTON_2_SHORT_RELEASE && (minutes + seconds) > 0)
        {
          PracaMinutnika = ODLICZANIE;
        }
        else if (przycisk == BUTTON_2_LONG_PRESSED)
        {
          setne = 0;
          seconds = 0;
          minutes = 0;
          MFS.write((minutes + seconds/100), 2);
        }
        else if (przycisk == BUTTON_1_PRESSED || przycisk == BUTTON_1_LONG_PRESSED)
        {
          seconds -= 10;
          if (seconds < 0 && minutes > 0)
          {
            seconds = 50;
            minutes--;
          }
          if (seconds < 0 && minutes <=0)
          {
            seconds = 0;
            minutes = 0;
          }
          MFS.write((minutes + seconds/100), 2);
        }
        else if (przycisk == BUTTON_3_PRESSED || przycisk == BUTTON_3_LONG_PRESSED)
        {
          seconds += 10;
          if (seconds >= 60)
          {
            seconds = 0;
            minutes++;
            if (minutes >= 60)
            {
              minutes = 59;
            }
          }
          MFS.write((minutes + seconds/100), 2);
        }
        break;
        
    case ODLICZANIE:
        if (przycisk == BUTTON_2_SHORT_RELEASE || przycisk == BUTTON_2_LONG_RELEASE)
        {
          PracaMinutnika = NASTAWIANIE;
        }
        else
        {
          setne++;

          if (setne == 10)
          {
           setne = 0;
           seconds--;
            
            if (seconds < 0 && minutes > 0)
            {
              seconds = 59;
              minutes--;
            }
            
            if (minutes == 0 && seconds == 0)
            {
              seconds = 0;
              MFS.write(seconds, 2);
              MFS.beep(15);
              MFS.writeLeds(LED_ALL, ON);
              MFS.blinkLeds(LED_ALL, ON);
              delay(2000);
              MFS.blinkLeds(LED_ALL, OFF);
              MFS.writeLeds(LED_ALL, OFF);
              PracaMinutnika = NASTAWIANIE;
            }
            
            MFS.write((minutes + seconds/100), 2);
          }
          delay(100);
         }
        break;
  }
}
