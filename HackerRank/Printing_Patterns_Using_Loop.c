#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void findOut(int i, int j, int first, int last, int n);

int main() 
{
    int n;
    scanf("%d", &n);
    int rows = 2 * n - 1;

    for (int i = 0; i < rows; i ++) {
        for (int j = 0; j < rows; j ++) {
            findOut(i, j, 0, rows - 1, n);
        }
        printf("\n");
    }
    return 0;
}

void findOut(int i, int j, int first, int last, int n) {
  if(n >=1 )
  {
    if (i == first || i == last || j == first || j == last)
        printf("%d ", n);
    else
        findOut(i, j, first + 1, last - 1, n - 1);
  }
}
