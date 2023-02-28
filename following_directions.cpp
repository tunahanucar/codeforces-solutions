#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int cx = 1, cy = 1;
    int line;
    cin >> line;
    for(int i = 0; i < line; i++){
        string str;
        int len, ux = 0, uy = 0 ,p = 0;
        cin >> len >> str;
        for(int k = 0; k < len; k++){
            if((int)str[k] == 85) uy++;
            else if((int)str[k] == 68) uy--;
            else if((int)str[k] == 76) ux--;
            else ux++;

           if(ux == cx && uy == cy) p = 1; 
        
        }
        printf(p == 1 ? "YES\n" : "NO\n");
    }
    return 0;
}

