#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Code by Vaskar Chakma, 1/24/2023, 13:29


void calculate_the_maximum(int n, int k) {
  int and=0, or=0, xor=0, i, j;
  for(int i=1; i<n;i++){
      for (j=i+1;j<=n;j++){
          if ((i&j)>and && (i&j)<k){
              and = i&j;
          }
          if ((i|j)>or && (i|j)<k){
              or = i|j; 
          }
          if ((i^j)>xor && (i^j)<k){
              xor = i^j;
          }
      }
  }
  printf("%d\n%d\n%d\n",and,or,xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
