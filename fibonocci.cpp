#include<bits/stdc++.h>
using namespace std;
int main(){
int last = 0;
int slast = 1;
int n=27;
for(int i=0;i<n;i++){
    cout<<last<<" ";
    
    slast +=last;
    last=slast-last;
    
}


}