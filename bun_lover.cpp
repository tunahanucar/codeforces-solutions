#include <iostream>

using namespace std;

int main(){
	int line;
	cin >> line;
	for(int i = 0; i < line; i++){
		unsigned long long int n;
		cin >> n;
		cout << ((4*n) + ((n*(n+1))-(2*n)-(n-1)) + 1) << endl;
	}
	return 0;
}
