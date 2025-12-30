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
    v.push_back(6); //adding element at the end
    cout<<"size after push_back = "<<v.size()<<endl;
    for(int i : v){
       cout<< i << " ";
    }
    
    
    return 0;


}