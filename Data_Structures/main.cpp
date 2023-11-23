#include<iostream>
using namespace std;
int arr[10], size;

void addelement(int arr[], int size)
{
    int j, newvalue;
    cout << "Enter the element >> ";
    cin>>newvalue;

    size = size + 1;
    arr[size-1]=newvalue;
    cout<<size;
    cout<<endl;
    cout<<"Your New array is "<<endl;
    for(j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

}

void elementatpos(int* arr, int size)
{

    int j;
    cout<<"Enter the position >> ";
    int pos;
    cin>>pos;
    cout<<"Enter the element >> ";
    int newvalue;
    cin>>newvalue;

    for(j=size; j>=pos; j--)
    {
        arr[j] = arr[j-1];
    }

    arr[pos] = newvalue;
    size++;
    cout<<"New Element "<< newvalue <<" is added ";
    cout<<endl;
    cout<<"New array after adding element are ";
    for(j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

void deleteelement(int* arr, int size)
{
    int j;
    cout<<"Original Array is "<<endl;
    for (j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    size--;
    cout<<"Deleted the last element "<<endl;


    cout<<"Modified Array is "<<endl;
    for(j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

void delatpos(int* arr, int size)
{
    int delpos,j;
    cout<<"Enter the position >> ";
    cin>>delpos;
    for (j=delpos; j<size-1; j++)
    {
        arr[j] = arr[j+1];
    }

    size--;

    cout<<"Modified Array is "<<endl;
    for(j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int *displayelement(int arr[], int size)
{
    int j;
    for(j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    return arr;
}


int main()
{
    int j;
    cout<<"Enter the size of the array >> ";
    cin>>size;
    for (j=0; j<size; j++)
    {
        cout<<"Enter the "<<j<<" element of the array >> ";
        cin>>arr[j];
    }

    int ch = 0;
    while (ch!=6)
    {


        cout << "--------Task You can perform-------" << endl;
        cout << "1. Insert New Element at the end position. " << endl;
        cout << "2. Insert New Element at the given position. " << endl;
        cout << "3. Delete an Element at the end position. " << endl;
        cout << "4. Delete an Element at the given position. " << endl;
        cout << "5. Display the Element. " << endl;
        cout << "6. Exit. " << endl;

        cout<<"Enter your choice >> ";
        cin>>ch;

        switch (ch) {
            case 1:
                addelement(arr, size);
                break;

            case 2:
                elementatpos(arr, size);
                break;

            case 3:
                deleteelement(arr, size);
                break;

            case 4:
                delatpos(arr, size);
                break;

            case 5:
                displayelement(arr, size);
                break;

            default:
                cout<<"Enter the valid number between 1 and 6";
        }
    }

    return 0;
}

