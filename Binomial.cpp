// Calculate nCr binomial coefficient for n & r.

#include<iostream>
using namespace std;

int factorial(int num1){
    int fact =1;
    for(int i = 1; i<=num1; i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nMinr = factorial(n-r);
    return fact_n/((fact_r)*(fact_nMinr));
}
int main(){
    int n, r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;

    int Binomial = nCr(n, r);
    cout<<Binomial;
    return 0;

}