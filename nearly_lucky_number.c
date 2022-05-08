#include <stdio.h>
#include <stdlib.h>

int main(){
  long long int num;
  int counter = 0;
  int point = 0;
  scanf("%lld",&num);
  while(num != 0){
    if(num % 10 == 7 || num % 10 == 4)
      counter++;
    num /= 10;
  }
  if(counter == 0) point++;
  while(counter != 0){
    if(counter % 10 != 7 && counter % 10 != 4)
      point++;
    counter /= 10;
  }
  
  printf((point == 0) ? "YES\n": "NO\n");
  return 0;
}
