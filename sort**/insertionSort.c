static void insertionSort(int *arr, int n) {
  int i = 0;
  for (i = 1; i < n; i++) {
    int key = a[i];
    int j = i - 1;

    while(j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
    }
  }
}
