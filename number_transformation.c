#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int *nums;
    nums = (int*)malloc(sizeof(int) * 2);
    for(int j = 0; j < 2; j++)
      scanf("%d",&nums[j]);
    printf((nums[1] % nums[0] != 0) ? "0 0\n" : "1 %d\n",nums[1] / nums[0]);
  }
  return 0;
}
