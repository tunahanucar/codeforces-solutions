#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    arr = (int*)malloc(sizeof(int) * 4);
    for(int i = 0; i < 4; i++) scanf("%d",&arr[i]);
    int max = arr[0];
    for(int j = 1; j < 4; j++) if(arr[j] > max) max = arr[j];
    for(int k = 0; k < 4; k++) if(arr[k] != max) printf("%d ",(max-arr[k]));
    return 0;
}
