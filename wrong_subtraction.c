#include <stdio.h>
#include <stdlib.h>

int main(){
  int *arr;
  arr = (int*)malloc(sizeof(int) *2);
  for(int i = 0; i < 2; i++)
    scanf("%d",&arr[i]);
  for(int j = 0; j < arr[1]; j++){
    if(arr[0] % 10 != 0)
      arr[0]--;
    else
      arr[0] /= 10;
  }
  printf("%d\n",arr[0]);

}
