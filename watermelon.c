#include <stdio.h>
#include <stdlib.h>

int main(){
  int w;
  scanf("%d",&w);
  if(w != 2)
    printf((w % 2 == 0) ? "YES\n" : "NO\n");
  else
    printf("NO\n");
  return 0;
}

