#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,5,4,4,3,3,2,2,1};
    int size = sizeof(arr) / sizeof(arr[1]);
    int xors=0;
    for(int i=0;i<size;i++){
            xors^=arr[i];
    }
    cout<<xors<<" ";
}
