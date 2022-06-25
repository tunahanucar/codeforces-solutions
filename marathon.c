#include <stdio.h>
#include <stdlib.h>

int main(void){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int timur;
	scanf("%d",&timur);
	int num = 0;
	int temp;
	for(int j = 0; j < 3; j++){
	    temp = 0;
	    scanf("%d",&temp);
	    if(temp > timur) num++;
	}
        printf("%d\n",num);	
    }
    return 0;
}
