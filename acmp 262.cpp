#include <iostream>
using namespace std;

void heapify(int arr[], int x, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;


    if (l < x && arr[l] > arr[largest])
        largest = l;


    if (r < x && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        swap(arr[i], arr[largest]);


        heapify(arr, x, largest);
    }
    int d = 0;
    for (int i=0; i<x; i++)
    {
         //cout << arr[i] << " ";
         d += (arr[i] + arr[i+1])*0.05;
    }
    //cout << d;

}

void heapSort(int arr[], int x)
{

    for (int i = x - 1; i >= 0; i--)
        heapify(arr, x, i);


    for (int i=x-1; i>=0; i--)
    {

        swap(arr[0], arr[i]);


        heapify(arr, i, 0);

    }
//
//    for (int i=0; i<n; ++i)
//    {
//         //cout << arr[i] << " ";
//         d += (arr[i] + arr[i+1])*0.05;
//    }
//    //cout << d << endl;

}

void printArray(int arr[], int x, int d)
{
    //int d = 0;
//    for (int i=0; i<x; i++)
//    {
//         //cout << arr[i] << " ";
//         d += (arr[i] + arr[i+1])*0.05;
//    }
//    cout << d;
}


int main()
{
    int x;
    cin >> x;
    int arr[x];

    for(int i=0;i<x;i++)
    {
         cin >> arr[i];
    }
    int d = 5;
    heapSort(arr, x);

//    for (int i=0; i<x; i++)
//    {
//         //cout << arr[i] << " ";
//         d += (arr[i] + arr[i+1])*0.05;
//    }

    cout << d;
    //cout << "Sorted array is" << endl;
    //printArray(arr, x, d);
}
