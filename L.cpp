#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=n;
    int rem = n;
    while (rem>=k)
    {
       sum += rem/k;
       rem = rem/k + rem%k;
    }
    cout<<sum<<endl;
    
}