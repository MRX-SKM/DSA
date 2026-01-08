#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n = v.size();
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    return 0;
}