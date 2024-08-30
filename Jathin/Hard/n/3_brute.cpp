#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> temp;

    int arr[]={1,1,1,2,2,3,3,3};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<sizes;i++){
        if(temp.size()==0 || temp[0]!=arr[i]){
         int count =0;
         for(int j=0;j<sizes;j++){
            if(arr[i]==arr[j]) count++;
         }   
         if (count> (sizes/3)){
            temp.push_back(arr[i]);
         }
        }
    if(temp.size()==2) break;
    }
for(auto it:temp) cout<<it<<" ";

}