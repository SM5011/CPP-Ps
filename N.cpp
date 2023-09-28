#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++) 

int main() {
    int n,d,r;
    cin>>n>>d>>r;
    int a[n];
    int b[n];
    int sum=0;
    fr(i,n){
        cin>>a[i];
        sum += a[i];
    }
    fr(i,n){
        cin>>b[i];
         sum += b[i];
    }
    if(sum>d){
        cout<<(sum-d*2)*r<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
