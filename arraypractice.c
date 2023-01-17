#include "stdio.h"

int main()
{
int grades[10]; // this is the array that stores 10 values
int count = 10; // this is number of values that need to be read
long sum = 0; // initialising the sum varable to zero so that it can be accessed later when we do the average calculation
float average = 0.0f; // initialising the average variable which will be used later in the program to find the average

printf("please enter the 10 grades you would like to find the average of:  /n");

int i;
int j;

for (i= 0; i < count; ++i)
{
    printf("%2u>", i + 1);
    scanf("%d", &grades[i]);

    sum += grades[i];
}

average = (float)sum/count;

printf("average of the ten grades is: %.2f\n", average);

for (j= 0; j < count; ++j)
{
    printf("%d ", grades[j]);
}





return 0;

}