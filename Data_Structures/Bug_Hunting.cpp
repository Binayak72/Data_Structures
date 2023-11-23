#include<iostream>
using namespace std;

int calculatesum(int nums[], int size)
{
    int sum = 0;
    for(int i=0; i<=size; i++)
    {
        sum+=nums[i];

    }
    return sum;
}

int main()
{
    int nums[]= {1,2,3,4,5};
    int size = sizeof(nums)/sizeof(nums[0]);
    int result = calculatesum(nums, size);
    cout<<"Sum : "<<result<<endl;
    return 0;

}