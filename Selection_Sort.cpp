// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void selectionsort(int *a, int n)
{
    int i, j, temp, min_element;
    for(i=0;i<n-1;i++)
    {
        min_element=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_element])
            {
                min_element=j;
            }
        }
        temp=a[i];
        a[i]=a[min_element];
        a[min_element]=temp;
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
    selectionsort(arr, n);
    cout<<endl<<"Elements after sorting:"<<endl;
    print(arr,n);
    return 0;
}