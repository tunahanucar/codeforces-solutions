#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, m, b, n;
    scanf("%d %d %d %d",&n, &m, &a, &b);
    int first,second;
    first = n * a;
    second = (n / m) * b;
    if(n % m != 0){
        int i_f, i_s;
	i_f = (n % m) * a;
	i_s = b;
	if(i_f > i_s) second += i_s;
	else second += i_f;
    }
    printf("%d",(first > second) ? second : first);
    return 0;
}
