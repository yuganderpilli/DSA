#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-2,-2,0,0,0,-2,-1,-1,-1,2,2,2,-1};
    vector<vector<int>> ans;
    int kk=6;
    int sizes=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+sizes);
    for(int i=0;i<sizes-2;i++){
        if(i>0 && arr[i]== arr[i-1]) continue;
        int j=i+1;
        int k=sizes-1;
        while (j<k)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum<kk){
                ++j;
            }else if(sum>kk){
                --k;
            }else{
                
                ans.push_back({arr[i],arr[j],arr[k]});
                
                while(j<k && arr[j]==arr[j+1]) j++;
                while(j<k && arr[k]==arr[k-1]) k--;
            
            j++;
                k--;
            
            }
        }
        
    }
for(auto it:ans){
    cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<" ";
    cout<<endl;
}
}