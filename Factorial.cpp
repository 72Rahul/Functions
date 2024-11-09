
//Calculate N factorial.

#include<iostream>
using namespace std;
int factorial(int num1){
    int fact =1;
    for(int i = 1; i<=num1; i++){
        fact*=i;
    }
    return fact;
}
int main (){
    int a;
    cout<<"Enter the number : ";
    cin>>a;
   cout<<factorial(a)<<endl;
    
    return 0;
}