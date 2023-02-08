# CSA0309_ds
#include <stdio.h>
#include<conio.h>
void checkEvenOdd(int N)
{
    int r = N % 2;
    clrscr();
    if (r == 0)
   {
	printf("Even");
    }
    else
    {
	printf("Odd");
    }
}
int main()
{
    int N = 101;
    checkEvenOdd(N);
    getch();
    return 0;
}
