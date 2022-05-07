#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    char str[3];
    scanf("%s",str);
    int index = (((int)str[0]) - 97) * 25;
    if((int)str[1] < (int)str[0])
      index += ((int)str[1] - 96);
    else if((int)str[1] > (int)str[0])
      index += ((int)str[1] - 97);
    printf("%d\n",index);
  }
  return 0;
}
