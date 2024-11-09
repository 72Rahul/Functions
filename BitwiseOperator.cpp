#include<iostream>
using namespace std;
/*
0110 = 6
1010 = 10
    
& = 0010 = 2
| = 1110 = 14
^ = 1100 = 12


10 << 2 = 40
10 >> 1 = 5
*/
int main(){
    int a = 6, b = 10;
    // cout<<"Enter th first number : ";
    // cin>>a;
    // cout<<"Enter th second number : ";
    // cin>>b;
   cout<<(a&b)<<endl<<(a|b)<<endl<<(a^b)<<endl;
   a = 10;
   cout<<(a << 2)<<endl<<(a >> 1)<<endl;
    return 0;
}