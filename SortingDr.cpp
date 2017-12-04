#include "Sorting.h"
#include <fstream>
#include <iostream>

using namespace std;

int main() {
    ifstream in("random.dat");
    int * arr = new int[100000];

    for (int i = 0; i < 100000; i++) {
        in >> arr[i];
    }

    Sorting sort(arr);
    sort.InsertionSort(100);
}
