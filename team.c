#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  int mul = 0;
  for(int i = 0; i < line; i++){
    int *arr;
    arr = (int*)malloc(sizeof(int) * 3);
    for(int j = 0; j < 3; j++)
      scanf("%d",&arr[j]);
    int num = 0;
    for(int k = 0; k < 3; k++)
      num += arr[k];
    (num < 2) ? : mul++;
  }
  printf("%d\n",mul);
  return 0;
}
