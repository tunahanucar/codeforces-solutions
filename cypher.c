#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int len;
	scanf("%d",&len);
	int *arr,*res;
	res = (int*)malloc(sizeof(int) * len);
	arr = (int*)malloc(sizeof(int) * len);
	for(int a = 0; a < len; a++)scanf("%d",&arr[a]);
	for(int k = 0; k < len; k++){
	    int s_len;
	    scanf("%d",&s_len);
	    char str[s_len+1];
	    scanf("%s",str);
	    int move = 0;
	    for(int m = 0; m < s_len; m++){
	        if((int)str[m] == 68) move++;
		else{ 
		    if(move == 0) move = 9;
		    else move--;
		}
	    }
	    res[k] = ((arr[k]+move) % 10);
	}
	for(int b = 0; b < len; b++)
	    printf("%d ",res[b]);
	printf("\n");
    }
    return 0;
}
