#include<termios.h>
#include<stdio.h>
static struct termios old,new1;

void initTermios(int echo)
{
  tcgetattr(0,&old);
  new1=old;
  new1.c_lflag &=echo ? ECHO: ~ECHO;
  tcsetattr(0,TCSANOW,&new1);
}

void resetTermios(void)
{
 tcsetattr(0,TCSANOW,&old);
}

char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}
char getch(void)
{

 return getch_(0);
}
char getche(void)
{
  return getch_(1);
}

