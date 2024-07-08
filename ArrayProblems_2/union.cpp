#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,5};
    int brr[]={3,4,5,6,7};
    int i=0;
    int j=0;
    vector<int> temp;
    int size_a = sizeof(arr) / sizeof(arr[0]);
    int size_b = sizeof(brr) / sizeof(brr[0]);
    while(i<size_a || j<size_b){
        if(arr[i]==brr[j]){
            j++; 
            if(arr[i]==arr[i+1]){i++;
            
            }

        }
        if(i<size_a){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(brr[j]);
            
            if(arr[j]==arr[j+1]) 
            {
                j++; 
            continue;
            }
            j++;
        }
        
    }
for(int i=0;i<temp.size();i++){
    cout<<temp[i];
}
}