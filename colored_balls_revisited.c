#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int n;
	scanf("%d",&n);
	int *arr;
	arr = (int*)malloc(sizeof(int) * n);
	for(int k = 0; k < n; k++) scanf("%d",&arr[k]);

	int pt = 0;
	for(int i = 0; i < n; i++){
	    if(arr[i] > arr[pt]) pt = i;
	}
	printf("%d\n",(pt+1));
    }
    return 0;
}
