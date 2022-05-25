#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[101];
  scanf("%s",str);
  int index = 0;
  char hello[] = "hello";
  for(int i = 0; i < strlen(str); i++)
    if(str[i] == hello[index])
      index++;
  printf((index == 5) ? "YES\n" : "NO\n");
  return 0;
}
