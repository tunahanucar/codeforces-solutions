#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int *values;
    values = (int*)malloc(sizeof(int) * 5);
    for(int a = 0; a < 5; a++)
      scanf("%d",&values[a]);
    int dog_rem = values[0] - values[3]; 
    int cat_rem = values[1] - values[4];
    int res = 0;
    if(dog_rem < 0 && cat_rem < 0)
      res = dog_rem + cat_rem + values[2];
    else if(dog_rem < 0 && cat_rem >= 0)
      res = dog_rem + values[2];
    else if(cat_rem < 0 && dog_rem >= 0)
      res = cat_rem + values[2];
    printf((res < 0) ? "NO\n" : "YES\n");
  }
  return 0;
}
