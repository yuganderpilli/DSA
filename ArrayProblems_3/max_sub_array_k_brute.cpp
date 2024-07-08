#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[]={1,1,2,1,1,1,4,5,6,1,1,1};
    int size = sizeof(arr)/sizeof(int);
    int k=7;
   int max_size=0;
    int sum=0;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            sum+=arr[j];

        if(sum<=k){     
            max_size=max(max_size,(j-i+1));
        }
        }
        
    }

cout<<max_size;
}