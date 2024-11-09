// WAP to check the given three number is pythagorean triplet or not.
#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    int b, c;
    int a = max(x, max(y,z));

    if(a==x){
        b = y, c = z;
    }
    else if (a==y)
    {
         b = x, c = z;
    }
    else {
         b = x, c = y;
    }

    if(a*a == b*b+c*c){
        return true;
    }
    else{
        return false;
    }
    
}
int main(){
    int p, q, r;
    cout<<"Enter three number : ";
    cin>>p>>q>>r;
    if(check(p,q,r)){
        cout<<"Pythagorean triplet\n";
    }else{
        cout<<"Not a pythagorean triplet\n";
    }
    return 0;
}