#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>

void imlec_konumu(int y, int x);
int tus_kontrol(void);
int main(void)
{
      int y=0,x=0,kutu_durum;bool mantik=false,mokar=true;
while(mokar==true)
{
       while(mantik==false)
    {
    imlec_konumu(y,x);
    kutu_durum=tus_kontrol();
    if (kutu_durum==-2){
        mantik=true;
        break;}
    else if (kutu_durum==-1){
       mokar=false;
       break;}
    else if (kutu_durum==77){
        x++;printf("");    }
      else if (kutu_durum==75){
        x--;printf("");    }
    else if (kutu_durum==72){
        y--;printf("");    }
    else if (kutu_durum==80){
        y++;printf("");    }
    }
      while(mantik==true)
    {
      imlec_konumu(y,x);
      kutu_durum=tus_kontrol();
      if (kutu_durum==-2){
        mantik=false; 
        break; }
    else if (kutu_durum==-1){
       mokar=false;
       break;}
      else if (kutu_durum==77){
        x++;printf("+");}
      else if (kutu_durum==75){
        x--;printf("+");}
    else if (kutu_durum==72){
        y--;printf("+");}
    else if (kutu_durum==80){
        y++;printf("+");}
    }

}
  return 0;
}

void imlec_konumu(int y, int x){
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);}

int tus_kontrol(void){
    int ch = getch();
    if (ch==27)
       return(-1);
    else if (ch==32)
       return(-2);
    else if (ch == 0 || ch == 224)
       return ch;
    else;}
