#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,0,-1,0,-2,2,5,4,3,-5,3,1,9,3,1};
    int target=14;
    int sizes = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sizes);
    vector<vector<int>> st;
    for(int i=0;i<sizes;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<sizes;j++){
            if(j>i && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=sizes-1;
            while(k<l){
                long long sum = arr[i]+arr[j]+arr[k]+arr[l];
                if(sum<target){
                    k++;
                }else if(sum>target){
                    l--;
                }
                else{
                    st.push_back({arr[i],arr[j],arr[k],arr[l]});
                   k++;
                l--;
                    while(k<l && arr[k]==arr[k-1]) k++;
                    while(k<l && arr[l]==arr[l+1]) l--;
                    
                        

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