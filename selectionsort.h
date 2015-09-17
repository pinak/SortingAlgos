#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <QVector>

namespace Sort {

void selectionSort(QVector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; ++i) {
        int min = arr.at(i);
        for (int j = i + 1; j < arr.size(); ++j) {
            if(arr.at(j) < min) {
                min = arr.at(j);
                arr[j] = arr[i];
                arr[i] = min;
            }
        }
    }
}
}

#endif // SELECTIONSORT_H

