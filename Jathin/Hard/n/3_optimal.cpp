#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,1,1,2,2,3,3};
    int sizes = sizeof(arr)/sizeof(arr[0]);
    int element =INT_MIN;
    int count1=0;
    int element_2=INT_MIN;
    int count2=0;
    for(int i=0;i<sizes;i++){
        if(count1==0 && element_2!=arr[i]){
            count1=1;
            element=arr[i];


        }else if(count2==0 && element !=arr[i]){
               
                element_2=arr[i];
                    count2=1;
                           }
        
        else if(arr[i]==element){
            count1++;
        }else if (arr[i]==element_2){
            count2++;
        }else{
            count1--;
            count2--;
        }
    }

cout<<element<<element_2;

}