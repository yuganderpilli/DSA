#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,-1,0,-2,2,5,4,3,-5,3,1,9,3,1};
    int kk=14;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    set<vector<int>> st;
    vector<int> ans;
    for(int i=0;i<sizes;i++){
        for(int j=i+1;j<sizes;j++){
            for(int k=j+1;k<sizes;k++){
                for(int l=k+1;l<sizes;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==kk){
                        vector<int> temp({{arr[i],arr[j],arr[k],arr[l]}});
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    int i=1;

for(auto it:st){
    cout<<i<<")"<<it[0]<<it[1]<<it[2]<<it[3];
    cout<<endl;
    i++;
}
}