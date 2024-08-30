#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,-1,0,-2,2,5,4,3,-5,3,1,9,3,1};
    int kk=14;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    
    set<vector<int>> ans;
    for(int i=0;i<sizes;i++){
        
        for(int j=i+1;j<sizes;j++){
         set<int> hashnet;
            for(int k=j+1;k<sizes;k++){
                long long fourth  = kk-(arr[i]+arr[j]+arr[k]);
                if(hashnet.find(fourth)!=hashnet.end()){
                    vector<int> temp({arr[i],arr[j],arr[k],fourth});
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
            hashnet.insert(arr[k]);
            }
            
        }
    }
    int i=1;
for(auto it:ans){
    cout<<i<<") "<<it[0]<<it[1]<<it[2]<<it[3];
    cout<<endl;
    i++;
}
}