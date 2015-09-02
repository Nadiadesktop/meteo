#include <LiquidCrystal.h>


LiquidCrystal lcd(2,3,4,5,6,7)

byte key_up=8;
byte key_down=9;
byte key_INTER=10;
int keys_delay=100;

char* MainMenu[]={"language","type","exist"}
byte menu_offset=0;\\позиция в меню
byte need_update=1;
char CLEAR_STRING[]="        "; \\пустая строка для заливки дисплея



void setup()
{
pinMode(key_up,INPUT);
digitalWrite(key_up,HIGH);
pinMode(key_down,INPUT);
digitalWrite(key_up,HIGH);
pinMode(key_inter,INPUT);
digitalWrite(key_up,HIGH);
lcd.begin(16,4);
}


void loop()
{
menu_start();
delay(100);
}


void menu_start()
{

if((digitalRead(key_down))==HIGH)
{if(menu_offset>0)
{
menu_offset++;
need_update=1;
delay(keys_delay);
}
}

if((digitalRead(key_up))==HIGH)
{if(menu_offset>0)
{
menu_offset--;
need_update=1;
delay(keys_delay);
}
}


if((digitalRead(key_inter))==HIGH)
{
menu_execute();
need_update=1;
delay(keys_delay);
}

}


void menu_execute()
{
switch(menu_offset)
{
case 0:
break;
case 1:
break;
case 2:
break;
}
}