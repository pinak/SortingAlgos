#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <QVector>

namespace Sort {

void bubbleSort(QVector<int> &arr)
{
    const int size = arr.size();
    for (int i = size - 1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (arr.at(j) > arr.at(j + 1)) {
                int temp = arr.at(j);
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }
}

}
#endif // BUBBLESORT_H

