#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;
    for(int i = 0; i < num; i++){
        int m,n,k;
        cin >> m >> n >> k;
        if(m < k && n < k)
            cout << m*n << "\n";
        else if (m < k)
            cout << m*k << "\n";
        else if (n < k)
            cout << n*k << "\n";
        else
            cout << k*k << "\n";
    }
    return 0;
}
