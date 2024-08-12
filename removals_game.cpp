#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int line;
    cin >> line;
    for(int i = 0; i < line; i++){
        int num,a,k;
        cin >> num;
        vector<int> v1;
        vector<int> v2;
        for(k = 0; k < num; k++){
            cin >> a;
            v1.push_back(a);
        }
        for(k = 0; k < num; k++){
            cin >> a;
            v2.push_back(a);
        }
        if(v1 == v2)
            cout << "Bob\n";
        else{
            reverse(v2.begin(),v2.end());
            if(v1 == v2)
                cout << "Bob\n";
            else
                cout << "Alice\n";
    	}
    }
    return 0;
}
