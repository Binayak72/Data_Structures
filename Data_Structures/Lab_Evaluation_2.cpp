#include<iostream>
using namespace std;

int main()
{
    int arri_size;
    cout<<"Enter the no of people arrived >> ";
    cin>>arri_size;
    int arrival[arri_size];
    cout<<"Enter the time at which the people arrived >> "<<endl;
    for (int i=0; i<arri_size; i++)
    {
        cin>>arrival[i];
    }

    int dep_size;
    cout<<"Enter the no of people of departed >> ";
    cin>>dep_size;
    int departure[dep_size];
    cout<<"Enter the time at which the people departed >> "<<endl;
    for(int i=0; i<dep_size; i++)
    {
        cin>>departure[i];
    }

    cout<<"Arrival Time "<<endl;
    for (int i=0; i<arri_size; i++)
    {
        cout<<arrival[i]<<" ";
    }
    cout<<endl;
    cout<<"Departure Time"<<endl;
    for (int i=0; i<dep_size; i++)
    {
        cout<<departure[i]<<" ";
    }

    for(int i=0; i<arri_size; i++)
    {
        for(int j =i+1; j<arri_size; j++)
        {
            if (arrival[i]>arrival[j])
            {
                int temp = arrival[i];
                arrival[i]= arrival[j];
                arrival[j] = temp;
            }
        }
    }

    for(int i=0; i<dep_size; i++)
    {
        for(int j =i+1; j<dep_size; j++)
        {
            if (departure[i]>departure[j])
            {
                int temp = departure[i];
                departure[i]= departure[j];
                departure[j] = temp;
            }
        }
    }

    cout<<endl;
    cout<<"Arrival List after sorting"<<endl;
    for (int i=0; i<arri_size; i++)
    {
        cout<<arrival[i] << " ";
    }
    cout<<endl;
    cout<<"Departure List after sorting"<<endl;
    for (int i=0; i<dep_size; i++)
    {
        cout<<departure[i] << " ";
    }


    int guests_in = 1, max_guests = 1, time = arrival[0];
    int i = 1, j = 0;
    int n = sizeof(arrival)/sizeof(arrival[0]);

    while (i < n && j < n)
    {
        if (arrival[i] <= departure[j])
        {
            guests_in++;

            if (guests_in > max_guests)
            {
                max_guests = guests_in;
                time = arrival[i];
            }
            i++;
        }
        else
        {
            guests_in--;
            j++;
        }
    }
    cout<<endl;
    cout << "Maximum Number of Guests = " << max_guests<< " at time " << time;

    return 0;
}