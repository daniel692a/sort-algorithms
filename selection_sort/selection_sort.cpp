#include <bits/stdc++.h>
#include <iostream>
#include <tuple>
#include <vector>

using namespace std;

void selection_sort(vector<int>& arr){
	for (int i=0; i<arr.size(); i++) {
		int min_index = i;
		for (int j=i+1; j<arr.size(); j++) {
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
}

int main(){
	vector<int> a{5, 2, 6, 90, 1, 8};
	selection_sort(a);
	for(auto val: a){
		cout<<val<<" ";
	}
	return 0;
}
