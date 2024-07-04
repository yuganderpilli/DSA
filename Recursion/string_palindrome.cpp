#include<bits/stdc++.h>
using namespace std;
bool palindrome(char sam[],int i,int n)
{
if(i>=(n/2)){
    return true;
}
if(sam[i]!=sam[n-i-1]){
 return false;
}

return palindrome(sam,i+1,n);

}


int main(){
char sample[]="DAD";
cout<<palindrome(sample,0,3);
}