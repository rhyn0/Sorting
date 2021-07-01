#include "algo.h";
// https://en.wikipedia.org/wiki/Sorting_algorithm#Insertion_sort

void insertionSort(std::vector<int> arr)
{
    int i, j, temp;
    for (i = 0; i < arr.size(); i++)
    {
        for (j = i; j > 0 && arr[j] < arr[j - 1]; j--)
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = arr[j - 1];
        }
    }
}

void selectionSort(std::vector<int> arr);
void mergeSort(std::vector<int> arr);
void heapSort(std::vector<int> arr);
void quickSort(std::vector<int> arr);
void shellSort(std::vector<int> arr);
void bubbleSort(std::vector<int> arr);
void combSort(std::vector<int> arr);
void countingSort(std::vector<int> arr);
void bucketSort(std::vector<int> arr);
void radixSort(std::vector<int> arr);