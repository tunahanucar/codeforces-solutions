#include <iostream>
using namespace std;

int main(){
    int line;
    cin >> line;
    for(int i = 0 ; i < line; i++){
       int len;
       string str;
       cin >> len >> str;
       int p = 0,ps = 0;
       for(int k = 0; (k < len/2) && (ps == 0); k++){
           if(((int)str[p] == 48 && (int)str[(len-1-p)] == 49) || ((int)str[p] == 49 && (int)str[(len-1-p)] == 48)) p++;
	   else ps++;
       }
       cout << (len - (p*2)) << endl;
    }
    return 0;
}
