//selection sort 
// TC - O(n^2) for best, worst and average case
// SC - O(1)

#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    for (int i=0; i<=n-2; i++) {
        int min = i;
        for (int j=i; j<=n-1; j++) {
            if (arr[j]<arr[min]) min=j;
        }

        swap(arr[min], arr[i]);     //second method

        /* int temp = arr[min];     //first method 
        arr[min]=arr[i];
        arr[i]=temp; */
    }

}

int main() {
    int n;
    cout<<"Enter :";
    cin>>n;

    int arr[n];

    cout<<"Enter the numbers :"<<endl;
    for (int i=0; i<=n-1; i++) {
        cin>>arr[i];
    }

    cout<<"Before Sorting :"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    selection_sort(arr, n);

    cout<<"\nAfter Sorting :"<<endl;
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}