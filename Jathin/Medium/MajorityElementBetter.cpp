#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,1,1,1,1,2,2,3,3,3,3,3,3,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<size<<endl;
    map<int,int> mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;                       
    }
   
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
}
}