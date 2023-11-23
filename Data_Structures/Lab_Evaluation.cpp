#include<iostream>
using namespace std;

void rotatearr(int arr[], int size)
{
    int i;
    int d;
    int temp[size];
    int k= 0;
    cout<<"Enter the location of the array to rotate to left : ";
    cin>>d;

    for (i=d; i<=size; i++)
    {
        temp[k] = arr[i];
        k++;
    }
    for (i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
}

void PrintTheArray(int arr[], int size)
{
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int i, size, arr[10];
    cout<<"Enter the size of the array : ";
    cin>>size;
    for (i=0; i<=size; i++)
    {
        cout<<"Enter the "<< i <<" element of the array : ";
        cin>>arr[i];
    }

    cout<<"The entered element of the array are :"<<endl;
    for(i=0; i<=size; i++)
    {
        cout<<arr[i]<<endl;
    }

    rotatearr(arr, size);
    PrintTheArray(arr, size);

    return 0;
}