#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,4,7,4,};
    int count = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 4; // Element to count occurrences of
    for(int i = 0; i < n; i++){
        if( arr[i] == target){
            count++;
        }
    }
    cout << "Occurrences of " << target << ": " << count << endl;
    return 0;
}