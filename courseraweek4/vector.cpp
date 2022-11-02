#include<vector>
#include<iostream>
using namespace std;


int main(){
    std::vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5); 

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    return 0;
}