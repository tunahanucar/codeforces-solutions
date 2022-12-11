#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        char str[51];
	scanf("%s",str);
	int arr[] = {89,101,115},start = 55,last = 1;
	for(int k = 0; k < 3; k++) if((int)str[0] == arr[k]) start = k;
	if(start == 55) printf("NO\n");
	else {for(int j = 0; j < strlen(str) && last == 1; j++,start++)if((int)str[j] != arr[(start % 3)]) last = 0; printf((last == 0) ? "NO\n" : "YES\n");}
    }
    return 0;
}
