#include <stdio.h>
#include <stdlib.h>

int main(){
  int *inp;
  inp = (int*)malloc(sizeof(int) * 3);
  for(int i = 0; i < 3; i++)
    scanf("%d",&inp[i]);
  int *arr;
  arr = (int*)malloc(sizeof(int) * 5);
  arr[0] = inp[0] + inp[1] * inp[2];
  arr[1] = inp[0] * (inp[1] + inp[2]);
  arr[2] = inp[0] * inp[1] * inp[2];
  arr[3] = (inp[0] + inp[1]) * inp[2];
  arr[4] = inp[0] + inp[1] + inp[2];
  int max = arr[0];
  for(int j = 0; j < 5; j++){
    if(max < arr[j])
      max = arr[j];
  }
  printf("%d\n",max);
  return 0;
}
