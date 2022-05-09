#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int num;
    scanf("%d",&num);
    int *arr;
    arr = (int*)malloc(sizeof(int) * num);
    for(int j = 0; j < num; j++)
      scanf("%d",&arr[j]);
    for(int k = 0; k < num/2; k++)
      printf("%d %d ",arr[k],arr[num-k-1]);
    if(num % 2 == 1)
      printf("%d",arr[num/2]);
    printf("\n");
  }
  return 0;
}
