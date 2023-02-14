#include <stdio.h>
#include <math.h>
int main() {
    int number1, number2;
    float number3, SALARY;
    scanf("%d %d", &number1, &number2);
    scanf("%f", &number3);
    SALARY = number2 * number3;
    printf("NUMBER = %d\n",number1);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}
