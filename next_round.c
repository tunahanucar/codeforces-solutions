#include <stdio.h>
#include <stdlib.h>

int main(){
  int *num;
  num = (int*)malloc(sizeof(int) * 2);
  for(int a = 0; a < 2; a++)
    scanf("%d",&num[a]);
  int *arr;
  arr = (int*)malloc(sizeof(int) * num[0]);
  for(int i = 0; i < num[0]; i++)
    scanf("%d",&arr[i]);
  int counter = 0;
  for(int j = 0; j < num[0]; j++)
    if(arr[num[1] - 1] <= arr[j] && arr[j] > 0)
      counter++;
  printf("%d\n",counter);
  return 0;
}
