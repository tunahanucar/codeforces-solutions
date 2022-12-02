#include <stdio.h>
#include <stdlib.h>

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
}

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int *arr;
	arr = (int*)malloc(sizeof(int) * 3);
	for(int j = 0; j < 3; j++) scanf("%d",&arr[j]);
	for(int k = 0; k < 3; k++)
	    for(int l = 0; l < 2; l++)
		if(arr[l] > arr[l+1]) swap(&arr[l],&arr[l+1]);
    	printf("%d\n",arr[1]);
    }
    return 0;
}

