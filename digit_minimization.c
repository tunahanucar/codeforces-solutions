#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int num;
    scanf("%d",&num);
    int temp = num;
    int len = 0;
    while(temp != 0){
      temp /= 10;
      len++;
    }
    int *arr;
    arr = (int*)malloc(sizeof(int) * 10);
    for(int j = 0; j < len; j++){
      arr[len-j-1] = num % 10;
      num /= 10;
    }
    int min = arr[0];
    for(int k = 1; k < len; k++)
      if(min > arr[k]) min = arr[k];

    if(len == 2)
      printf("%d\n",arr[1]);
    else
      printf("%d\n",min);
  }
  return 0;
}
