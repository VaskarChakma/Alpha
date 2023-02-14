#include <stdio.h>
#include <math.h>
int main() {
    char name;
    double MainSalary,sales,Bonus, TOTAL;
    scanf("%s", &name);
    scanf ("%lf %lf", &MainSalary, &sales);
    Bonus= (sales * 0.15);
    TOTAL = MainSalary + Bonus;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
 
    return 0;
}
