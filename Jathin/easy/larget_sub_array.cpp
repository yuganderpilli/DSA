#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3,1,1,1,1,4,2,1,1,1,1};
    int size = sizeof(arr) / sizeof(arr[1]);
   map<int,int> mpp;
   int k=6;
   int sum =0;
   int max=0;
   for(int i=0;i<size;i++){
    sum+=arr[i];
    if(sum==k){
        max=(max,i+1);
    }

   int rem=sum-k;

   if(mpp.find(rem)!=mpp.end()){
     int len= i - mpp[rem];
     max=(max,len);
   }
    if(mpp.find(sum)==mpp.end()){
        mpp[sum]=i;
    }


   }
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
}

cout<<max;
}