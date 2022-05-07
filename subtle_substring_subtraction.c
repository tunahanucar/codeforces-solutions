#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int line;
  scanf("%d",&line);
  for(int i = 0; i < line; i++){
    int bob = 0;
    int alice = 0;
    char sen[200001];
    scanf("%s",sen);
    if(strlen(sen) % 2 == 0){
      for(int j = 0; j < strlen(sen); j++){
        alice += ((int) sen[j]) - 96;
      }
    }else{
      int first = 0;
      if((int) sen[0] < (int) sen[strlen(sen)-1]){
        bob += ((int) sen[0]) -96;
        first = 1;
      } else
        bob += ((int) sen[strlen(sen)-1]) -96;
      int a;
      int limit;
      if (first == 0){
        a = 0;
        limit = strlen(sen) -1;
      }else{
        a = 1;
        limit = strlen(sen);
      }
      for(a ; a < limit; a++){
        alice += ((int) sen[a]) -96;
    }
  }

  if(alice > bob)
    printf("Alice %d\n",alice - bob);
  else
    printf("Bob %d\n",bob - alice);
  }
  return 0;
}
