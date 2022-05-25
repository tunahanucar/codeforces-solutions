#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char borze[201];
  scanf("%s",borze);
  int val = 0;
  int *arr;
  arr = (int*)malloc(sizeof(int) * 201);
  for(int i = 0; i < strlen(borze); i++){
    if((int)borze[i] == 46)
      printf("0");
    else if((int)borze[i] == 45){
      if((int)borze[i+1] == 46){
        printf("1"); i++;}
      else{
        printf("2"); i++;}
    }
  }
  printf("\n");
  return 0;
}
