#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        char str[4];
	scanf("%s",str);
	int f = (int)str[0], s = (int)str[1], t = (int)str[2];
	if((f == 121 || f == 89) && (s == 69 || s == 101) && (t == 83 || t == 115))
	    printf("YES\n");
	else printf("NO\n");
    }
    return 0;
}
