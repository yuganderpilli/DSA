#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2,6,5,8,11};
    int k=14;
    int size = sizeof(arr)/sizeof(arr[0]);
     map<int,int> mpp;
    for(int i=0;i<size-1;i++){
        int diff = k-arr[i];
        if(mpp.find(diff)!=mpp.end()){
            cout<<mpp[diff]<<" "<<i;
            break;
        }
            mpp[arr[i]]=i;
        
        }
    }

