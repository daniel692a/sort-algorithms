#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int> array);

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for (int i = 0; i<n; i++) {
		cin>>a[i];
	}
	vector<int> sorted = bubble_sort(a);
	for(int value : sorted){
		cout<<value<<" ";
	}
	cout<<endl;
	return 0;
}

vector<int> bubble_sort(vector<int> array){
	bool swapped;
	for (int i=0; i<array.size()-1; i++) {
		swapped = false;
		for (int j=0; j<array.size()-i-1; j++) {
			if(array[j]>array[j+1]){
				swap(array[j], array[j+1]);
				swapped = true;
			}
		}
		if(swapped==false){
			break;
		}
	}
	return array;
}
