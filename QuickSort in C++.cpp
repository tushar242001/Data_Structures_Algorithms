//Implementation of QuickSort using C++ .

//Code : 

#include <iostream>
using namespace std;
int partition(int a[],int start,int end)
{
    int pivot=a[start];
    int i=start,j=end;
    while(i<j)
    {
        do{i++;} while(a[i]<=pivot);
        do{j--;}while(a[j]>pivot);
        if(i<j)
        {
            swap(a[i],a[j]);
        }
    }
    swap(a[start],a[j]);
    return j;
}
void quick(int arr[],int start ,int end)
{
    if(start<end)
    {
        int p=partition(arr, start, end);
        quick(arr,start,p-1);
        quick(arr,p+1,end);
    }
    
}


int main()
{
    
    int arr[10]={12 ,14 ,24,5,30 ,40 ,10 ,50 ,7,69 };
    quick(arr,0,9);
    cout<<"After Sorting Array: ";
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
