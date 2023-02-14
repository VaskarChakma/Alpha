#include <stdio.h>
 
int main() {
 
    int X;
    float Y, output;
    scanf("%d", &X);
    scanf("%f",&Y);
    output = X / Y;
    printf("%.3f km/l\n", output);
    return 0;
}
