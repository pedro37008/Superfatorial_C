#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);
int superFatorial(int n);

int main() {
  int res, n;

  scanf("%d", &n);

  res = superFatorial(n);

  printf("%d", res);
}

int fatorial(int n) {
  int i, fat=1;

  if(n == 1 || n == 0){
    return 1;
  }

  for(i = n; i > 0; i--){
    fat *= i;
  }

  return fat*=fatorial((n-1));
}

int superFatorial(int n) {
  return fatorial(n);
}