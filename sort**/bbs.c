static void swap(int *a, int *b) {
  int temp;
  temp = *a;
  a* = b*;
  b* = temp;
}

static void bbs(int *arr, int n) {
  int i,j;
  int swapped;
  for (i = 0; i < n - 1; i++) {
    swapped = 0;
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]){
        swap(&arr[j], &arr[j + 1]);
        swapped = 1;
      }
    }
    if (!swapped) {
      break;
    }
  }
}

static void ft_putnbr(char c) {
  write(1, &n, 1);
}

static void ft_nbr(int n){
  if ()
}
