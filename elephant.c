#include <stdio.h>
#include <stdlib.h>

int main(){
  int location;
  scanf("%d",&location);
  if(location % 5 == 0)
    printf("%d\n",location / 5);
  else
    printf("%d\n",location / 5 +1);

  return 0;
}
