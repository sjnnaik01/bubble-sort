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
    int arr[5];
    cout<<"enter the number=";
    for(int i=0;i<5;i++)
    {

        cin>>arr[i];
    }
    cout<<"unsorted array:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    array1(arr);
    cout<<"sorted array:";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
