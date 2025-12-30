#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int> v = {1,2,3,4,5};


    vector<int>v(5,0); //vector of size 5 with all values initialized to 0
    // loops in vectors
    for(int i : v){
        cout<< i << endl;
    }
    
    cout<<"size = "<<v.size()<<endl; //size of vector
    
    
    return 0;


}