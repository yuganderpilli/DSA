#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int xor1=0;
    int xor2=0;
    int arr[]={1,2,3,4};
    for(int i=0;i<n-1;i++){

        xor1=(xor1^(i+1));
        xor2=(xor2^arr[i]);

    }
    xor1=(xor1^n);
    cout<<(xor1^xor2);
}
