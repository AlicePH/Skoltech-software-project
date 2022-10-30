#include <iostream>
#include "sort.h"

using namespace std; 

int main()
{
    
    int n;
    cout<<"Enter the number of inputs: ";
    cin>>n;
    
    int a[n];
    
    for (int i=0; i<n; i++)
    {
    	cin>>a[i];
    }

    sort::SortLibrary obj;
    obj.mergeSort(a, n);
    cout<<"Sorted list: \n";
    for (int i=0; i<n; i++)
    {
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}

