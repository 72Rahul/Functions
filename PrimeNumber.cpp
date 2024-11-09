// WAP to print all prime numbers from 1 to N using function.

#include<iostream>
#include<math.h>
using namespace std;

// void prime(int x){
//     int i, j;
//     for(i = 1; i<=x; i++){
//         for(j = 2; j<i; j++){
//             if(i%j==0){
//                 break;
//             }         
//         }
//         if(i==j){
//          cout<<i<<endl; 
//         }
//     }
// }
// int main(){
//     int n;cout<<"Enter the number : ";
//     cin>>n;
//    prime(n);
//     return 0;

bool isPrime(int x){
for(int j = 2; j<sqrt(x); j++){
    if(x%j==0){
        return false;
    }
return true;
}

}

int prime(int a, int b){
    for(int j=a; j<=b; j++){
            if(isPrime(j)){
                cout<<j<<endl;
            }
        }
    }


int main(){
    int n, m;
    cout<<"Enter the starting number: ";
    cin>>n;
    cout<<"Enter the end number: ";
    cin>>m;
    prime(n,m);
    return 0;

}