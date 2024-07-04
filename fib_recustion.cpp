#include<bits/stdc++.h>
using namespace std;
int sample(int n){
if(n<=1) return n;

int last = sample(n-1);
int slast = sample(n-2);
return last+slast;

}
int main(){
cout<<sample(6);
}