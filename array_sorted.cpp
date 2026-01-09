#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = true;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            isSorted = false;
            break;
        }
    }
    cout << "Array is sorted: " << (isSorted ? "True" : "False") << endl;
    return 0;
}
