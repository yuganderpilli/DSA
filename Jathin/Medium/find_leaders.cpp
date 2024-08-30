#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,1,2,1};
    int sizes = sizeof(arr)/sizeof(arr[1]);
    vector<int> leader;
    int max = arr[sizes-1];
    leader.push_back(max);

    for(int i=sizes-2;i>=0;i--){
        if(arr[i]>max){
            leader.push_back(arr[i]);
            max=arr[i];
        }
    }
for(auto it:leader){
    cout<<it;
}

}


    

