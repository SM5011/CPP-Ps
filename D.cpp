#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = high + 1;
    
    for (int j = high; j > low; j--) {
        if (arr[j] > pivot) {
            i--;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i - 1], &arr[low]);
    return (i - 1);
}

int quick_sort(int arr[], int low, int high) {
    int swaps = 0;
    if (low < high) {
        int pi = partition(arr, low, high);
        swaps += pi - low;
        swaps += high - pi;
        
        swaps += quick_sort(arr, low, pi - 1);
        swaps += quick_sort(arr, pi + 1, high);
    }
    return swaps;
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int total_swaps = quick_sort(arr, 0, n - 1);
    cout << total_swaps << endl;

    return 0;
}
