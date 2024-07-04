#include<bits/stdc++.h>
using namespace std;
int sample(int n){
if(n==1){
    return 1;
}
return n*(sample(n-1));

}

int main(){
    cout<<sample(5);
}