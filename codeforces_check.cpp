#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
        int len;
        cin >> len;
        string str = "codefrs";
        for(int i = 0; i < len; i++){
                char s;
                cin >> s;
                int p = 0;
                for(int k = 0; k < 7; k++) if((int)str[k] == (int)s) p = 1;
                if(p == 1)printf("YES\n");
                else printf("NO\n");
        }
         
        return 0;
}


