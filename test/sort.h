// SortLibrary.h
#pragma once

namespace sort
{
    class SortLibrary
    {
    public:
        
        
        void selectionSort(int data[], int lenD);
        void bubbleSort(int data[], int lenD);
        void insertionSort(int data[], int lenD);
        void mergeSort(int data[], int lenD);
        void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR);
        void quickSort(int* data, int const len);


    };
}
