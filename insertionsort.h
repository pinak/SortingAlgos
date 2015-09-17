#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H

#include <QVector>

namespace Sort {

void InsertionSort(QVector<int> &arr)
{
    int size = arr.length();
    for (int i = 0; i < size; ++i) {

        int j = i - 1;
        int currentVal = arr.at(i);
        while (j >= 0 && currentVal < arr.at(j)) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = currentVal;
    }
}
}

#endif // INSERTIONSORT_H

