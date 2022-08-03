#include <iostream>
using namespace std;

void bubblesort(int *a, int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    bubblesort(arr, n);
    cout<<endl<<"Elements after sorting:"<<endl;
    print(arr,n);
    return 0;
}
