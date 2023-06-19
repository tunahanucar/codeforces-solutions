#include <bits/stdc++.h>

using namespace std;

int main(){
	string str = "codeforces";
	int line;
	cin >> line;
	for(int i = 0; i < line; i++){
		string in;
		cin >> in;
		int result = 0;
		for(int j = 0; j < 10; j++)
			if((int)in[j] != (int)str[j])
			    result++;
		cout << result << endl;
	}
	
	return 0;
}
