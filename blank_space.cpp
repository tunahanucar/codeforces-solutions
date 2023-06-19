#include <bits/stdc++.h>

using namespace std;

int main(){
	int line;
	cin >> line;
	for(int i = 0; i < line; i++){
		vector <int> arr;
		int len,temp;
		cin >> len;
		for(int j = 0; j < len; j++){
			cin >> temp;
			arr.push_back(temp);
		}
		int result = 0;
		temp = 0;
		for(int k = 0; k < len; k++){
			if(arr[k] == 1){
				if(temp > result) result = temp;
				temp = 0;
			}
			else if(arr[k] == 0){
				temp++;
			}
			
		}
		if(temp > result) result = temp;
		cout << result << endl;
		
		
	}
	return 0;
}
