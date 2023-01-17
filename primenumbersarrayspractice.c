#include "stdio.h"

int main ()
{
// making a program that prints out prime numbers from numbers 3-100 

int numbers[100];
int i,j,c;
for (j=1, j<=100, ++j)
{
    c = 0;
    for(i =1; i<=j, ++i)
    {
        if(j%i==0)
        {
            c = c+1;
        }
    }
    if (c == 2)
    {
        printf("%d",j);
    }
}





    return 0;
}