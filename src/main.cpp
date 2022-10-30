#include <iostream>
#include "sort.h"

using namespace std; 

int main()
{
    int a[4] = {1,5,3,4};
    

    sort::SortLibrary obj;
    obj.mergeSort(a, 4);
    
    for (int i=0; i<4; i++)
    {
    	cout<<a[i];
    }
    
    
    return 0;
}

