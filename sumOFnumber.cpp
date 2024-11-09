
//Calculate the sum of number from 1 to N.

#include<iostream>
using namespace std;
void add(int n){
    int sum = 0;
    for(int i  = 1; i<=n; i++){
         sum = sum+i;
    }
    cout<<sum<<endl;
   // return sum;
}

int main (){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    add(a);
    // int s = add(a);
    // cout<<s<<endl;
    
    return 0;
}