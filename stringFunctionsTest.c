#include "stdio.h"

int stringLength( char str1[]){

unsigned int count =0;
while (str1[count] !='\0'){
    count ++;
}
return count;
}

void concat(char result[], const char str1[], const char str2[])
{
    int i;
    int j;

    for (i = 0 ; str1[i] != '\0'; i++){
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++)
        result [i+j] = str2[j];
    result[i +j] = '\0';

}

int strCompare(char* str5, char* str6) {
    int i;
    for (i = 0; str5[i] != '\0' && str6[i] != '\0'; i++) {
        if (str5[i] != str6[i]) {
            return 0;
        }
    }
    if (str5[i] != '\0' || str6[i] != '\0') {
        return 0;
    }
    return 1;
}
int main (){

const char word1[]   = "Bruh";
const char word2[]   = "bruhhhhh";
char result[60];

int x = stringLength("You are a chicken");
printf( "the length of the string is %d \n", x);
int y = strCompare("Bruh","Bruh");
printf("the string is similar?: %d", y);
concat(result, word1, word2);
printf("\n the concat string is : %s", result);
return 0;
}
