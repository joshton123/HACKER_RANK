#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
  int min_idx;

  for (int i = 0; i < n - 1; i++) {
    min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_idx])
        min_idx = j;
    }
    if (min_idx != i)
      swap(arr[min_idx], arr[i]);
  }
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  cout << "Enter the size of the array: ";
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  selectionSort(arr, n);
  cout << "\nSorted array: \n";
  printArray(arr, n);
  return 0;
}
