#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int len;
	scanf("%d",&len);
	int *arr;
	arr = (int*)malloc(sizeof(int) * len);
	for(int j = 0; j < len; j++) scanf("%d",&arr[j]);
	int max = arr[0],sec = 0,max_index=0;
	for(int k = 0; k < len; k++) if(arr[k] > max){max = arr[k]; max_index = k;}
	for(int l = 0; l < len; l++) if(arr[l] > sec && l != max_index) sec = arr[l];
	for(int m = 0; m < len; m++){
	    if(arr[m] != max)
	        printf("%d ",(arr[m] - max));
	    else
		printf("%d ",(max - sec));
	}
	printf("\n");
    }
    return 0;
}
