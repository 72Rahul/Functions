//Convert binary number to decimal number.

#include<iostream>
using namespace std;

int binToDec(int x){
    int ans = 0, pow = 1;
    while(x>0){
        int r = x%10;
        x = x/10;
        ans = ans + (r*pow);
        pow = pow*2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter th number : ";
    cin>>n;
   
    cout<<binToDec(n)<<endl;
   
    
    return 0;
}