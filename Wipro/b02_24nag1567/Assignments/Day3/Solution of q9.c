#include <stdio.h>
int main() {
    int i,j,k,l,counter=0,n;
    scanf("%d",&n);
    // Write C code here
  for (int i = 1; i < n; i++)
        for (int j = i; j < n; j++)
            for (int k = j; k < n; k++)
                for (int l = k; l < n; l++)
                    if (i + j + k + l == n)
                       counter++;
  printf("%d",counter);

    return 0;
}

