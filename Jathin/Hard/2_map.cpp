#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,1,2,2,3,3,3};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    map<int,int> temp;
    for(int i=0;i<sizes;i++){
        temp[(arr[i])]+=1;
    }
for(auto it:temp){
    if(it.second>2)cout<<it.first;
    
}
}