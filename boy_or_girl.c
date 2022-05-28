#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[101];
  scanf("%s",str);
  int *arr;
  arr = (int*)malloc(sizeof(int)*26);
  for(int i = 0; i < 26; i++)
    arr[i] = 0;
  for(int j = 0; j < strlen(str); j++)
    arr[(int)str[j] - 97]++;
  int count = 0;
  for(int e = 0; e < 26; e++)
    if(arr[e] != 0) count++;
  printf((count % 2 == 0) ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");
  return 0;
}
