#include "stdio.h"
#include "math.h"

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

float absolu(int c) {
    if(c<0)
        return -c;
    
    else 
        return c;
}

double square_root(double d) {
    double x = d;
    double y = 1;
    double e = 0.000001;  /* e decides the accuracy level*/
    while(x - y > e) {
        x = (x + y) / 2;
        y = d / x;
    }
    return x;
}



int main() {
    int a = 70, b = 60;
    printf("GCD of %d and %d is: %d", a, b, gcd(a, b));
    printf("\n");

    int c = -70;
    printf("the absolute value of %d is %f", c, absolu(c));
    printf("\n");

    int d = 181;
    printf("the square root of the number %d is %f ",d,square_root(d));
    printf("\n");
}


