#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec= {1,2,3,4};
    cout<<"Size : "<<vec.size()<<endl; //4
    cout<<"Capacity : "<<vec.capacity()<<endl; //4

    vec.push_back(5);
    cout<<"Size : "<<vec.size()<<endl; //5
    cout<<"Capacity : "<<vec.capacity()<<endl; //8

    vec.pop_back();
    cout<<"Size : "<<vec.size()<<endl; //4
    cout<<"Capacity : "<<vec.capacity()<<endl; //capacity remains the same, it doesn't change once initialized once and it didn't fall short
    return 0;
}