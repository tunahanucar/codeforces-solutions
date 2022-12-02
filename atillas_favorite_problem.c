#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int len;
	scanf("%d",&len);
	char str[101];
	scanf("%s",str);
	int max = 1,val;
	for(int j = 0; j < len; j++){
	    val = ((int)str[j] - 96);
	    if(val > max) max = val;
	}
	printf("%d\n",max);
    }
    return 0;
}
