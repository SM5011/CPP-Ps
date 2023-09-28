#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin >> n >> p;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int c = 0;
    int co=0;
    if (a[0] > 0)
    {
        for(int i=0;i<p;i++){
            if(a[i]==0){
                co++;
            }
        }
        if (a[p - 1] == a[p])
        {
            for (int i = p - 1; i < n; i++)
            {
                if (a[p - 1] == a[i])
                {
                    c++;
                }
            }
            cout << p + c-co-1;
        }
        else
        {
            cout << p-co;
        }
    }
    else
    {
        cout << c;
    }
}