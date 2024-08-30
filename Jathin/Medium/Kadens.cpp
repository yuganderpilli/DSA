#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2-2,5,-9,5,7,-3,6,8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    int maxs=INT_MIN;
    int start=0;
    int ansStart=INT_MIN;
    int ansEnd=INT_MIN;
    for(int i=0;i<size;i++){
        if(sum==0) start=i;
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        if(sum>maxs){
               maxs=sum;
                ansStart=start;
                ansEnd=i;
        }
    }
    cout<<maxs<<endl<<ansStart<<" "<<ansEnd;
}