//Implementation of Insertion sort in C++ .
//Code : 

#include <iostream>
using namespace std;
void insertionSort(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}
int main()
{
    int n;
    cout<<"How many elements you are going to take : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter an element : ";
        cin>>array[i];
    }
    insertionSort(n,array);
    
}
