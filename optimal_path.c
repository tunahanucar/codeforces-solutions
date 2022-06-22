#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int *arr;
	arr = (int*)malloc(sizeof(int) * 2);
	for(int k = 0; k < 2; k++)
	    scanf("%d",&arr[k]);
	unsigned long long int sum = 0;
	for(int a = 0; a < arr[1]; a++)
    	    sum += a;
	for(int l = 1; l <= arr[0]; l++)
	    sum += (l * arr[1]);
	printf("%lld\n",sum);
	free(arr);
    }
    return 0;
}
