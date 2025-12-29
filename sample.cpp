#include<iostream>
using namespace std;
void printMessage() {
    cout << "Hello, World!" << endl;
}
int details(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    printMessage();
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int total = details(arr, size);
    cout << "Sum of array elements: " << total << endl;
    return 0;
}