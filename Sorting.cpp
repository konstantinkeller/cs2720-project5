#include "Sorting.h"
#include <iostream>

void printArray(int * arr, int n) {
    for (int i = 0; i < n; i++) {
        if (i != n-1) cout << arr[i] << ",";
        else cout << arr[i];
    }
    cout << endl;
}

Sorting::Sorting(int * arr) {
    items = arr;
}

Sorting::~Sorting() {
    delete[] items;
}

void Sorting::SelectionSort(int n) {
    int newarr[100000];
    for (int i = 0; i < n; i++) {
        newarr[i] = items[i];
    }

    int i, j, min_idx;
    int temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (newarr[j] < newarr[min_idx])
                min_idx = j;
        temp = newarr[min_idx];
        newarr[min_idx] = newarr[i];
        newarr[i] = temp;
    }

    printArray(newarr, n);
}

void Sorting::BubbleSort(int n) {
    int newarr[100000];
    for (int i = 0; i < n; i++) {
        newarr[i] = items[i];
    }

    int i, j;
    int temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (newarr[j] > newarr[j+1]) {
                temp = newarr[j];
                newarr[j] = newarr[j+1];
                newarr[j+1] = temp;
            }
    
    printArray(newarr, n);
}

void Sorting::InsertionSort(int n) {
    int newarr[100000];
    for (int i = 0; i < n; i++) {
        newarr[i] = items[i];
    }

    int i, key, j;
    for (i = 1; i < n; i++) {
        key = newarr[i];
        j = i-1;

        while (j >= 0 && newarr[j] > key) {
            newarr[j+1] = newarr[j];
            j = j-1;
        }
        newarr[j+1] = key;
    }

    printArray(newarr, n);
}
