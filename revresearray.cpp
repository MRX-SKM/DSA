#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,8,1,-4,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    for(int i = 0; i < n; i++){
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}