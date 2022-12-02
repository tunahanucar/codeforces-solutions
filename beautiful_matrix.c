#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr,index;
    arr = (int*)malloc(sizeof(int) * 5 * 5);
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
	    scanf("%d",&arr[(i*5)+j]);
    for(int k = 0; k < 25; k++)
	if(arr[k] != 0) index = k;
    int res = 0;
    res += abs((index % 5) - 2);
    res += abs((index / 5) - 2);
    printf("%d",res);
    free(arr);
    return 0;
}
