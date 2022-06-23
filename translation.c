#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revstr(char *str){
    int i = 0,len,temp;
    len = strlen(str);
    for(; i < len/2; i++){
        temp = str[i];
	str[i] = str[len-i-1];
	str[len-i-1] = temp;
    }
}

int main(){
    char str[101];
    char str2[101];
    scanf("%s",str);
    scanf("%s",str2);
    revstr(str2);
    printf((strcmp(str,str2) == 0) ? "YES" : "NO");
    return 0;
}
