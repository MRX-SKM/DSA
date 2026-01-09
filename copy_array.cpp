#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {34, -2, 45, 0, 11, -9, 78};
    vector<int> copyArr = arr;

    for(int x : copyArr){
        cout << x << " ";
    }
    return 0;
}
