#include <stdio.h>
 
int main() {
 
    double grade1, grade2, sum;
    double MEDIA;
    scanf("%lf %lf", &grade1, &grade2);
    sum = grade1*3.5 + grade2*7.5;
    MEDIA = sum / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", MEDIA);
 
    return 0;
}
