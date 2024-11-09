//Write a program to add 2 numbers using functions.


#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum = num1+num2;
    return sum;
}
int main (){
    int a, b;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the Second number : ";
    cin>>b;
    int sum = add(a, b);
    cout<<sum<<endl;
    
    return 0;
}