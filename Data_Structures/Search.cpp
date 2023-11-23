#include<iostream>
using namespace std;

void LinearSearch()
{
    int dict[5] = {4,9,8,5,7};
    int item,i,loc=-1;
    cout<<"Enter the item you wanted to search >> ";
    cin>>item;
    for (i=0; i<=4; i++)
    {
        if(dict[i] == item)
        {
            loc = i;
            break;
        }
    }

    if (loc==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at location "<<loc<<endl;
    }
}

void BinarySearch()
{
    int dict[5] = {1,2,3,4,5};
    int item,loc=-1;
    int lb=0, ub=4;
    cout<<"Enter the item you wanted to search >> ";
    cin>>item;
    while (lb<=ub)
    {
        int mid = (lb+ub)/2;
        if (dict[mid] == item)
        {
            loc = mid;
            break;
        }
        else if (dict[mid]>item)
        {
            ub = mid-1;
        }
        else
        {
            lb = mid+1;
        }
    }
    if (loc == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else
    {
        cout<<"Element found at location "<<loc<<endl;
    }
}

int main()
{
    int choice;
    cout<<"1. Linear Search"<<endl;
    cout<<"2. Binary Search"<<endl;
    cout<<"Exit"<<endl;
    cout<<"Enter the operation you want to perform >> "<<endl;
    cin>>choice;

    switch (choice)
    {
        case 1:
            LinearSearch();
            break;

        case 2:
            BinarySearch();
            break;

        default:
            cout<<"Enter the valid choice i.e. 1 or 2 "<<endl;
    }


}

