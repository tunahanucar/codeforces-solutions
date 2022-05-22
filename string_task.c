#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[101];
  scanf("%s",str);
  for(int k = 0; k < strlen(str); k++)
    str[k] = tolower((unsigned char) str[k]);
  char vowels[] = "aoyeui";
  for(int i = 0; i < strlen(str); i++){
    int p = 0;
    for(int a = 0; a < strlen(vowels); a++)
      if(str[i] == vowels[a]) p++;
    if(p == 0) printf(".%c",str[i]);
  }
  printf("\n");
  return 0;
}
