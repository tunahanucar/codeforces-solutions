#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int key;
	scanf("%d",&key);
	int *doors;
	doors = malloc(sizeof(int) * 3);
	for(int j = 0; j < 3; j++)
	    scanf("%d",&doors[j]);
	int opened_doors = 0;
	while(key != 0){
	    opened_doors++;
	    key = doors[key-1];
	}
	printf((opened_doors == 3) ? "YES\n" : "NO\n");
    }
    return 0;

}
