#include <stdio.h>

int main() {
 
    int a, b;
    double fuel_needed;
    scanf("%d %d",&a, &b);
    fuel_needed = (double)(a*b)/12;
    printf("%.3lf\n", fuel_needed);
    return 0;
}
