#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
	int line;
	cin >> line;
	for(int i = 0; i < line; i++){
		int len,mem,val;
		cin >> len;
		vector<int> arr;
		for(int k = 0; k < len; k++){
		    cin >> mem;
		    arr.push_back(mem);
		}
		for(int l = 0; l < len-1; l++){
			if(abs(arr[l] - arr[l+1]) == 5 || abs(arr[l] - arr[l+1]) == 7){
				val = 1;
			}else{
				val = 0;
				break;
			}
		}
		if(val == 1) cout << "YES" <<endl;
		else cout << "NO" << endl;
	}
	return 0;
}
