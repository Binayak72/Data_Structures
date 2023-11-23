#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    int i, j, key;
    for(i = 1; i <= n; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        for(int k=1; k<=n; k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

}

void output(int arr[], int n)
{
    cout<<"The sorted array is "<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n, arr[100];
    cout<<"Enter the size of the array >> "<<endl;
    cin>>n;
    cout<<"Enter the element of the array >> "<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    insertion_sort(arr, n);
    output(arr, n);

    return 0;
}