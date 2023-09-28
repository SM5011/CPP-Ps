#include<bits/stdc++.h>
using namespace std;
#define fr(i,n) for(int i=0;i<n;i++) 

int main() {
   int s,x;
   cin>>s>>x;
   int c=0;
   while (s)
   {
    s/=x;
    c++;
   }
   cout<<c<<endl;
   
    return 0;
}
