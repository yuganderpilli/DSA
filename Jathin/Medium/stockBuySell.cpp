#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={8,1,2,3,4,5,9,99,0,1};
    int sizes= sizeof(arr)/sizeof(arr[0]);
    int maxProfit=0;
    int mini=arr[0];
    
    for(int i=1;i<sizes;i++){
        int profit = arr[i]-mini;
        maxProfit=max(maxProfit,profit);
        mini = min(arr[i],mini);

    }
    
    cout<<maxProfit;

}