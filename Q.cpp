#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++) 

int main() {
   int n,k;
   cin>>n>>k;
   while (k--)
   {
    if(n%10 == 0){
        n/= 10;
    }
    n--;
   }
   cout<<n<<endl;
   
    return 0;
}
