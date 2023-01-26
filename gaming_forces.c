#include <stdio.h>
#include <stdlib.h>

int main(void){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int len,temp;
	scanf("%d",&len);
	int *arr;
	arr = (int*)malloc(sizeof(int) * len);
	for(int j = 0 ; j < len; j++) scanf("%d",&arr[j]);
	for(int k = 0; k < len -1; k++){
	    for(int l = k+1; l < len; l++){
	        if(arr[l] < arr[k]){
		    temp = arr[l];
		    arr[l] = arr[k];
		    arr[k] = temp;
		}
	    }
	}
	int step = 0;
	for(int m = 0; m < len; m++){
	    if(arr[m] == 1 && arr[m+1] == 1){
	        step++;
		arr[m] = 0;
		arr[m+1] = 0;
		m++;
	    }
	    else if(arr[m] == 0){
	        //pass
	    }
	    else{
	        arr[m] = 0;
		step++;
	    } 
	}
	printf("%d\n",step);
    }
    return 0;
}
