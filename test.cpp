#include <QTest>

#include "selectionsort.h"
#include "bubblesort.h"
#include "insertionsort.h"
#include "mergesort.h"

class TestAlgorithms : public QObject
{
    Q_OBJECT

private:
    void sortingTestData();

private slots:
    void selectionSort();
    void selectionSort_data();

    void bubbleSort();
    void bubbleSort_data();

    void insertionSort();
    void insertionSort_data();

    void mergeSort();
    void mergeSort_data();
};

void TestAlgorithms::sortingTestData()
{
    QTest::addColumn<QVector<int>>("unsorted");
    QTest::addColumn<QVector<int>>("sorted");

    QVector<int> us = {3,1,8,4,2};
    QVector<int> s = {1,2,3,4,8};
    QTest::newRow("1") << us << s;
}

void TestAlgorithms::selectionSort_data()
{
    sortingTestData();
}

void TestAlgorithms::selectionSort()
{
    QFETCH(QVector<int>, unsorted);
    QFETCH(QVector<int>, sorted);

    Sort::selectionSort(unsorted);
    QCOMPARE(unsorted, sorted);
}

void TestAlgorithms::bubbleSort_data()
{
    sortingTestData();
}

void TestAlgorithms::bubbleSort()
{
    QFETCH(QVector<int>, unsorted);
    QFETCH(QVector<int>, sorted);

    Sort::bubbleSort(unsorted);
    QCOMPARE(unsorted, sorted);
}

void TestAlgorithms::insertionSort_data()
{
    sortingTestData();
}

void TestAlgorithms::insertionSort()
{
    QFETCH(QVector<int>, unsorted);
    QFETCH(QVector<int>, sorted);

    Sort::InsertionSort(unsorted);
    QCOMPARE(unsorted, sorted);
}

void TestAlgorithms::mergeSort_data()
{
    sortingTestData();
}

void TestAlgorithms::mergeSort()
{
    QFETCH(QVector<int>, unsorted);
    QFETCH(QVector<int>, sorted);

    Sort::mergeSort(unsorted);
    QCOMPARE(unsorted, sorted);
}

QTEST_GUILESS_MAIN(TestAlgorithms)
#include "test.moc"
