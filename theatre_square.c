#include <stdio.h>
#include <stdlib.h>

int main(){
  int *arr;
  arr = (int*)malloc(sizeof(int) * 3);
  for(int i = 0; i < 3; i++){
    scanf("%d",&arr[i]);
  }
  long long int first;
  long long int second;
  first = (arr[0] % arr[2] != 0) ? arr[0] / arr[2] + 1 : arr[0] / arr[2];
  second = (arr[1] % arr[2] != 0) ? arr[1] / arr[2] + 1: arr[1] / arr[2];
  printf("%lld\n",first * second);
  return 0;
}
