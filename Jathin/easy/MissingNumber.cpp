#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n= (sizeof(arr)/sizeof(arr[1]))+1;
    int sum_of_n_numbers = (n*(n+1))/2;
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++){
        sum_of_n_numbers=sum_of_n_numbers-i;
        xor1=xor1^(i+1);
        xor2=xor^arr[i];
    }
    cout<<sum_of_n_numbers;
    cout<<endl<<xor1^xor2;
}