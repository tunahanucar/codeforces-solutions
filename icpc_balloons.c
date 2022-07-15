#include <stdio.h>
#include <stdlib.h>


int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int len;
	scanf("%d",&len);
	char str[len+1];
	scanf("%s",str);
	int *arr,temp;
	arr = (int*)malloc(sizeof(int) * len);
	for(int j = 0; j < len; j++) arr[j] = (int)str[j];
        for(int e = 0; e < len; e++){
	    for(int k = 0; k < len-1; k++){
	        if(arr[k] > arr[k+1]){
		   temp = arr[k];
		   arr[k] = arr[k+1];
		   arr[k+1] = temp;
		} 
	    }
	}
	int score = 2;
	if(len == 1) printf("2\n");
	else{
	    for(int m = 1; m < len; m++){
	        if(arr[m] != arr[m-1]) score += 2;
		else score++;
	    }
	    printf("%d\n",score);
	}
    }
    return 0;
}
