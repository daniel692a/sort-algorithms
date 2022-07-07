#include <bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int> arr){
    int i, key, j;
    for(i=1; i<arr.size(); i++){
        key=arr[i];
        j = i-1;
        while(j>=0 and arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
    for(auto val: arr){
        cout<<val<<" ";
    }
}

int main(){
    vector<int> a{5, 2, 6, 90, 1, 8};
    insertion_sort(a);
    return 0;
}