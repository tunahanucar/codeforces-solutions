#include <stdio.h>
#include <stdlib.h>

int main(){
    int line;
    scanf("%d",&line);
    for(int i = 0; i < line; i++){
        int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int time_a = a - 1;
	int time_b = ((b > c) ? b - 1 : ((c - b) + (c - 1)));
	if(time_a == time_b) printf("3\n");
	else printf((time_a > time_b) ? "2\n" : "1\n");
    }
    return 0;
}
