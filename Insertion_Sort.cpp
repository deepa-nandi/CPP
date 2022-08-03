#include <iostream>
using namespace std;

void insertionsort(int *a, int n)
{
    int i, j, key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
            a[j+1]=key;
    }
}
void print(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main() {
    int i, n, arr[i];
    cout<<"Enter the size: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elements before sorting:"<<endl;
    print(arr, n);
    insertionsort(arr, n);
    cout<<endl<<"Elements after sorting:"<<endl;
    print(arr,n);
    return 0;
}
