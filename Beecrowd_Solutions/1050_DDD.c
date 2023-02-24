#include<stdio.h>
int main()
{
    int inPut;
    scanf("%d", &inPut);
    if(inPut == 61){
        printf("Brasilia\n");
    }
    else if(inPut==71){
    printf("Salvador\n");
    }
    else if(inPut==11){
    printf("Sao Paulo\n");
    }
    else if(inPut==21){
    printf("Rio de Janeiro\n");
    }
    else if(inPut==32){
    printf("Juiz de Fora\n");
    }
    else if(inPut==19){
    printf("Campinas\n");
    }
    else if(inPut==27){
    printf("Vitoria\n");
    }
    else if(inPut==31){
    printf("Belo Horizonte\n");
    }
    else{
        printf("DDD nao cadastrado\n");
    }
    
    return 0;
}


