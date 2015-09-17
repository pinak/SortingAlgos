#ifndef MERGESORT_H
#define MERGESORT_H

#include <QVector>

namespace MergeSortPrivate {
void merge(const QVector<int>& left, const QVector<int>& right, QVector<int>& result)
{
    result.clear();
    auto leftIt = left.begin();
    auto rightIt = right.begin();
    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt < *rightIt) {
            result.append(*leftIt);
            ++leftIt;
        } else {
            result.append(*rightIt);
            ++rightIt;
        }
    }

    while (leftIt != left.end()) {
        result.append(*leftIt);
        ++leftIt;
    }

    while (rightIt != right.end()) {
        result.append(*rightIt);
        ++rightIt;
    }
}
}

namespace Sort {
void mergeSort(QVector<int> &arr)
{
    if (arr.length() == 1)
        return;

    int mid = arr.length() / 2;
    auto left = arr.mid(0, mid);
    auto right = arr.mid(mid, arr.length() - mid);

    mergeSort(left);
    mergeSort(right);

    MergeSortPrivate::merge(left, right, arr);
}

}

#endif // MERGESORT_H

