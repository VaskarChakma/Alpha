#include <stdio.h>
#include <math.h>
 
int main() {
    double a, b, c, x1, x2, r1;
    scanf("%lf%lf%lf", &a,&b,&c);
    x1 = (-b) +  sqrt((b*b)-(4*a*c));
    x1= x1/(2*a);
    x2 = (-b) -  sqrt((b*b)-(4*a*c));
    x2= x2/(2*a);
    r1 = (b *b) - (4 *a *c);
    if(a != 0 && r1 > 0 ){
        printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }
    else{
        printf("Impossivel calcular\n");
    }
 
    return 0;
}
