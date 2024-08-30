#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2-2,5,-9,5,7,-3,6,8};
    int size = sizeof(arr)/sizeof(arr[1]);
    int start =0;
    int end=0;
    int sum=0;
    int maxs=INT_MIN;
    int ansStart=0;
    for(int i=0;i<size;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
    if(sum<0){
        sum=0;
        
    }
    if(sum>maxs){
   ansStart=start;
    maxs=sum;
    end=max(end,i);
    
    }

    }


    cout<<maxs<<" "<< start<<" "<<end;


}