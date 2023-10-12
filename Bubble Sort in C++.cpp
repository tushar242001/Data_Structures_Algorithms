// Implementation of Bubble Sort In C++ .

#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n)
{
    int flag;
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    cout<<"\n\n\n";
    for(int m=0;m<n-1;m++)
    {
        cout<<arr[m]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<"How many elements you are taking"<<endl;
    cin>>n;
    int arr[n];
    for(int m=0;m<n;m++)
    {
        cout<<"Enter Element: ";
        cin>>arr[m];
    }
    BubbleSort(arr, n);
}
