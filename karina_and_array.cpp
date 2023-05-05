#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int line;
	cin >> line;
	for(int i = 0; i < line; i++){
		int len;
		cin >> len;
		long long int *arr;
		arr = (long long int*)malloc(sizeof(long long int) * len);
		for(int k = 0; k < len; k++)
			cin >> arr[k];
		long long int min = arr[0];
		long long int maks = arr[0];
		int min_j = 0,maks_j = 0;
		for(int j = 1; j < len; j++){
			if(arr[j] < min){
				min = arr[j];
				min_j = j;
			}
			if(arr[j] > maks){
				maks = arr[j];
				maks_j = j;
			}
		}
		long long int mins = maks;
		long long int makss = min;
		for(int l = 0; l < len; l++){
			if(l != min_j && arr[l] < mins)
				mins = arr[l];
			if(l != maks_j && arr[l] > makss)
				makss = arr[l];
		}
		
		if(maks * makss > min * mins) cout << maks * makss << endl;
		else cout << min * mins << endl;
	}
	return 0;
}
