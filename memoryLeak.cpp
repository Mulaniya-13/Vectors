#include<iostream>
using namespace std;

int * func(){
    int *ptr=new int;
    *ptr=1200;
    cout<<"ptr points to : "<<*ptr<<endl;
    return ptr;
}

int main(){
    int *x=func();
    cout<<*x<<endl;
    //delete x; //free the memory allocated in func
    return 0;
}