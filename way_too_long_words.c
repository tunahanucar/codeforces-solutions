#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shorten(char str[]){
  char first = str[0];
  char last = str[strlen(str)-1];
  int num = strlen(str) - 2;
  printf("%c%d%c\n",first,num,last);

}
int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    char str[101];
    scanf("%s",str);
    if(strlen(str) > 10)
      shorten(str);
    else printf("%s\n",str);
  }
  return 0;
}
