#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,3,8,1,-4,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    for(int i = 0; i < n ; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "Largest element is: " << largest << endl;
    return 0;
}