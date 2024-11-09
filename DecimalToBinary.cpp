// #include<iostream>
// using namespace std;

// int decToBin(int x){
//     int ans = 0, pow = 1;
//     while(x>0){

//         int r = x%2;
//         x = x/2;
//         ans = ans + (r*pow);
//         pow = pow*10;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter th number : ";
//     cin>>n;
        
    
   
//     cout<<decToBin(n)<<endl;
   
    
//     return 0;
// }



#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[] = {5, -7, 9, 1, 121};
    int size =5;
    int smallest = INT32_MAX;
    for(int i = 0; i<size; i++){
        smallest = min(arr[i], smallest);
        }
    
    cout<<"The smallest number is "<<smallest<<endl;

    int largest = INT32_MIN;

    for(int i = 0; i<size; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout<<"The largest number is "<<largest<<endl;
    return 0;
}