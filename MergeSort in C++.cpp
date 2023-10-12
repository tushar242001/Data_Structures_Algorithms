//Implementation of MergeSort using C++ .
Code : 
#include<iostream>
using namespace std;
void merge(int A[],int l,int mid,int r){
    int i=l;
    int j=mid+1;
    int k=l;int b[r+1];
    while(i<=mid && j<=r){
        if(A[i]<A[j]){
            b[k]=A[i];
            i++;
        }
        else {
            b[k]=A[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=r){
            b[k]=A[j];
            j++;
            k++;
        }
    }
    else {
        while(i<=mid){
            b[k]=A[i];
            i++;k++;
        }
    }
    for(int i=l;i<=r;i++){
        A[i]=b[i];
    }
}
void mergesort(int A[],int l,int r){
    if(l<r){
        int middle=(l+r)/2;                 
        mergesort(A,l,middle);
        mergesort(A,middle+1,r);
        merge(A,l,middle,r);
    }
}
int main(){
    int A[10]={12 ,14 ,24,5,30 ,40 ,10 ,50 ,7,69 };
    mergesort(A,0,9);
    for(int i=0;i<10;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}


