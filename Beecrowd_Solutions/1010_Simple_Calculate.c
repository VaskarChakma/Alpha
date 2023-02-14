#include <stdio.h>
 
int main() {
 
    int code1, unit1;
    float price1, Total1, VALOR_A_PAGAR ;
    int code2, unit2;
    float price2, Total2;
    
    scanf("%d %d", &code1, &unit1);
    scanf("%f", &price1);
    scanf("%d %d", &code2, &unit2);
    scanf("%f", &price2);
    
    Total1= unit1*price1;
    Total2= unit2*price2;
    VALOR_A_PAGAR = Total1 + Total2;
    
    printf("VALOR A PAGAR: R$ %.2f\n", VALOR_A_PAGAR);
 
    return 0;
}
