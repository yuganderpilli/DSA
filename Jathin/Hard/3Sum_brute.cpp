#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-1,2,-1,3,4,-7,-1,-1,2};
    int kk =0;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    
    set<vector<int>> st;
    for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){

            for(int k=j+1;k<sizes;k++){
                
                if(arr[i]+arr[j]+arr[k]==kk){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                      sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end()); 
for(auto it:ans){
    cout<<it[0]<<" "<<it[1]<<" "<<it[2];
    cout<<endl;
}

}