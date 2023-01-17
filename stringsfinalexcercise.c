#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main (){

char str[50];
int x;
printf("please input a string you want to reverse:  ");
scanf("%s", str);
x = strlen(str);
for( int i = x; i>=0; i--)
{
    printf("%c", str[i]);

}

    return 0;
}