#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    cout << "Original Array: ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    for(int i = 0; i < n; i++){
        if(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
    cout << "\nReversed Array: ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}