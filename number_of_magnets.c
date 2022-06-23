#include <stdio.h>
#include <stdlib.h>

int main(){
    int line,var;
    scanf("%d",&line);
    int group = 0;
    scanf("%d",&var);
    group++;
    for(int i = 0; i < line-1; i++){
        int temp;
	scanf("%d",&temp);
	if(temp != var){
	    group++;
	    var = temp;
	}
    }
    printf("%d",group);
    return 0;
}
