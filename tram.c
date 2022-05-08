#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  int capacity = 0;
  int max = 0;
  for(int i = 0; i < line; i++){
    int *arr;
    arr = (int*)malloc(sizeof(int) * 2);
    for(int j = 0; j < 2; j++)
      scanf("%d",&arr[j]);
    capacity -= arr[0];
    capacity += arr[1];
    if(capacity > max)
      max = capacity;
  }
  printf("%d\n",max);
  return 0;
}
