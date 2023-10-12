// Implementation of Selection Sort in C++ .
Code : 

#include <iostream>
using namespace std ;
void selectionSort(int arr[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    for(int m=0;m<n;m++)
    {
        cout<<arr[m]<<" ";
        
    }
    cout<<endl;
}
int main()
{
   
    int array[10]={4,8,1,6,9,3,2,5,7,0};
    selectionSort(array,10);
}
