#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,77};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k=0;
    for(int i=0;i<size;i++){
        k=k^arr[i];
    }
cout<<k;
}