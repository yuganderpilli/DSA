#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,5,4,4,3,3,2,2,1};
    int size = sizeof(arr) / sizeof(arr[1]);
    map <int,int> mpp;
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }
for(auto it:mpp){
    cout<<it.first<<" "<<it.second<<endl;
}
}
