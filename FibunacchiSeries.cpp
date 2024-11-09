// WAP to print the fibenacci Sequence using function.

#include<iostream>
using namespace std;

int fib(int x){

    int t1 = 0;
    int t2 = 1;
    for(int i = 1; i<=x; i++){
        cout<<t1<<"\t";
        int t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
    }
    return 0;
    // cout<<t1<<"\t"<<t2<<"\t";
    // for(int t3 = 1 ; t3<=x; t3=t1+t2){
       
    //     t1 = t2;
    //     t2 = t3;
    //      cout<<t3<<"\t";
       
    //}
}

int main(){
    int n;
    cout<<"Enter the last term : "<<endl;
    cin>>n;
    fib(n);
    return 0;
}