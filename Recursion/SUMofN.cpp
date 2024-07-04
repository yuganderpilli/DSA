#include<bits/stdc++.h>
using namespace std;
void sumofN(int n,int sum){
    // cout<<sum<<n<<endl;
    if(n<1){
        
        cout<<sum;
        return;
    }

    sum+=n;
    sumofN(n-1,sum);
}

int main(){

sumofN(99,0);

   
}