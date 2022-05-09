#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  int x = 0;
  for(int i = 0; i < line; i++){
    char stat[4];
    scanf("%s",stat);
    if(stat[1] == '+')
      x++;
    else
      x--;
  }
  printf("%d\n",x);
  return 0;
}
