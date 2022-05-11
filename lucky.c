#include <stdio.h>
#include <stdlib.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int num;
    scanf("%d",&num);
    int f_sum = 0;
    int l_sum = 0;
    for(int j = 0; j <3; j++){
      l_sum += num % 10;
      num /= 10;
    }
    for(int k = 0; k < 3; k++){
      f_sum += num%10;
      num /= 10;
    }
    printf((f_sum == l_sum) ? "YES\n" : "NO\n");
  }
  return 0;
}
