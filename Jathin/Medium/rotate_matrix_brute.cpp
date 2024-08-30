#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int ans[3][3]={0};
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][n-i-1]=arr[i][j];
        }
    }

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<ans[i][j]<<" ";
    }
cout<<endl;
}

}