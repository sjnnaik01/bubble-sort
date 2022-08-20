#include<iostream>
using namespace std;
void array1(int arr[])
{
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(arr[j]>arr[j+1])
               {
                   swap(arr[j],arr[j+1]);
               }
        }
    }

}

int main()
{
    int arr[5]={10,9,3,7,2};
    array1(arr);
    cout<<"the bubble sort of an array:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}
