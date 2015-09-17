#ifndef QUICKSORT
#define QUICKSORT

#include <QVector>
#include <algorithm> // for std::iter_swap

namespace QuickSortPrivate {

QVector<int>::iterator partition(QVector<int>::iterator start, QVector<int>::iterator end)
{
    int pivotValue = *(end - 1);
    auto pivotIndex = start;

    for (auto i = start; i != (end - 1); ++i) {
        if (*i <= pivotValue) {
            std::iter_swap(i, pivotIndex);
            ++pivotIndex;
        }
    }
    std::iter_swap((end - 1), pivotIndex);
    return pivotIndex;
}
}

namespace Sort {

void quickSort(QVector<int>::iterator start, QVector<int>::iterator end)
{
    if (start < end) {
        auto pivot = QuickSortPrivate::partition(start, end);

        quickSort(start, pivot - 1);
        quickSort(pivot + 1, end);
    }
}
}
#endif // QUICKSORT

