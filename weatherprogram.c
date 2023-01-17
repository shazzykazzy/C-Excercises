#include "stdio.h"
#include "stdlib.h"

int main() {

int rows = 5, cols = 12;
int i,j;
int row_sum[rows];
int array[rows][cols];
int col_sum[cols];
int col_average[cols];
//initialising the variables

for(i=0; i<rows; i++){
    for(j=0; j<cols; j++)
    {
        array[i][j]= rand() % 20;

    }
}
// initialises a 5x12 array and assigns random values up to 30 

for( i = 0; i < rows; i++){
    row_sum[i]=0;
    for( j = 0; j < cols; j++){
        row_sum[i]+= array[i][j];
        col_sum[j]+= array[i][j];
    }
}


for(i=0; i<cols;i++ )
{
col_average[i] = 0;
col_average[i] = col_sum[i]/ rows;
}

//}
// col average

printf("The random generated array is:\n");
for( i = 0; i < rows; i++){
    for (j = 0; j < cols ; j++)
    {
        printf("%d ", array[i][j]);
    }
    printf("\n");

}

printf("\nThe sum of rows is as follows: \n");
for( i = 0; i < rows; i++) {
        printf("%d ", row_sum[i]);
    }

printf("\nThe sum of columns is as follows: \n");
for (j = 0; j < cols ; j ++) {
    printf("%d ", col_sum[j]);
}



printf("\nThe columns average is:\n");
for (j = 0; j < cols ; j ++) {
    printf("%d ", col_average[j]);
}














    return 0;

}