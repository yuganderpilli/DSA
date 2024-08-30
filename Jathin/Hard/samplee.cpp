#include<bits/stdc++.h>
using namespace std;
void brute(int arr[],int N){
    for(int i=1;i<=N;i++){
        int count=0;
        
        for(int j=0;j<N;j++){
            if(i==arr[j]){
                count++;
         
            }
        }
        
           if(count==2) cout<<"Double "<<i<<endl;
           else if(count==0) cout<<"Missing "<<i<<endl;
    }
}

void usingHashMap(int arr[],int n){
    sort(arr,arr+n);
    map<int,int> temp;
    for(int i=0;i<n;i++){
        temp[i+1]=0;
       temp[arr[i]]+=1;
    }
    for(auto it:temp){
        if(it.second==0){
            cout<<"Missing "<<it.first<<endl;
        }else if(it.second==2){
            cout<<"Double "<<it.first<<endl;
        }
    }

}
int main(){
    int arr[]={4,3,6,2,1,1};
    int N = 6;
    usingHashMap(arr,N);
    
}