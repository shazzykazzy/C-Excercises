#include "stdio.h"
#include "stdlib.h"
#include <string.h>



int main (){

    #define TAXRATE 0.015
    int x = 0;
    
    char str1[40] = "To be or not to be";
    char str2[40] = ",that is the question";
    unsigned int count = 0; // stores the string length

    while( str1[count] !='\0') // increment count until the terminating character \0 is reached in the string
    {
        ++count;
    }

    printf("the length of the string %s is %d characters. \n", str1, count );

    x = strlen(str1);
    printf(" the length of the str1 is %d characters long", x);
    printf("\n");

    strcat( str1, str2);
    printf("the concactenated string is : %s\n", str1);


    return 0;
}