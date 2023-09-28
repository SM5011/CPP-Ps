#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int c = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                c++;
            }
        }
    }

    cout << c << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    selectionSort(a, n);

    return 0;
}
