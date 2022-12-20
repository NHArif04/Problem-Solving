#ifdef _WIN32
#include<conio.h> // system("clear") or system("cls") or clrscr() >> in this header file function
#include<stdlib.h>
#define clr() printf("\e[1;1H\e[2J")
#else
#define sleep(x) Sleep(1000*x)
#include<unistd.h>
#endif

#define name "Nahid Hasan Arif"  //is same as >> name="Nahid Hasan Arif"
#define clock_cycle 60
