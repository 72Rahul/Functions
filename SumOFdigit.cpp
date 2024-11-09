// Calculate the sum of digit of a number.

#include<iostream>
using namespace std;
int sumOFdigit(int x){
    int sum = 0;
    while(x>0){
        int r = x%10;
        sum +=r;
        x /=10;
        }
        return sum;
    
}
int main(){
    int a;
    cout<<"Enter a number :";
    cin>>a;
    int s = sumOFdigit(a);
    cout<<s<<endl;
    return 0;
}