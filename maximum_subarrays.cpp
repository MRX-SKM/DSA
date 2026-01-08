#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int start = 0; start < n; start++){//define strat index
        for(int end = start; end < n; end++){//define end index
            for(int i = start; i <= end; i++){//print subarray from start to end
                cout << arr[i];
            }
            cout <<" ";
        }
        cout << endl;
    }
}
