#include <stdio.h>
#include <stdlib.h>

int main(void){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int num;
    scanf("%d",&num);
    int *arr;
    arr = (int*)malloc(sizeof(int) * num);
    for(int j = 0; j < num; j++)
      scanf("%d",&arr[j]);
    int min = arr[0];
    for(int m = 0; m < num; m++){
      if(arr[m] < min)
        min = arr[m];
    }
    int result = 0;
    for(int k = 0; k < num; k++)
      result += arr[k] - min;
    printf("%d\n",result);
  }
  return 0;
}
