#ifndef SORTING_H
#define SORTING_H

using namespace std;

class Sorting {
    public:
        Sorting(int * arr);
        ~Sorting();
        void SelectionSort(int n);
        void BubbleSort(int n);
        void InsertionSort(int n);
        void MergeSort(int n);
        void QuickSort(int n);
        void HeapSort(int n);
    private:
        int * items;
};

#endif
