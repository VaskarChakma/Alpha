#include <stdio.h>
#include<math.h>
int main() {
 
    double x1, x2;
    double y1, y2;
    float result1, result2, result3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    result1 = (x2 - x1);
    result2 = (y2 - y1);
    result3 = sqrt(((result1) * (result1)) + ((result2) * (result2)));
    printf("%.4f\n", result3);
    return 0;
}
