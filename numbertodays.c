#include "stdio.h"

int main ()
{

    

int n = 0;
double pay;
double net_pay;



printf("Please enter the number of hours you have worked this week  "); 

scanf( "%d", &n);

if (n > 40) {
pay = (n - 40)*18 + 40*12;
}
else {pay = n*12;};


if (pay <= 300)
{
net_pay = 0.85 * pay;
}

else if (pay > 300 && pay <= 450 )
{
net_pay = 0.85 * 300 + 0.8 * (pay - 300);
}

else if (pay > 450)
{
net_pay = 0.85 * 300 + 0.8 * 150 + 0.75 * (pay - 450);
}



printf( "\n Your Pay For the Week is  %.2f", net_pay);


return 0;


}