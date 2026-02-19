static void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
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

static void ft_putnbr(int n){
  int c;
  if (n == -2147483647) {
    write(1, "-2147483647", 11);
    return ;
  }

  if (n < 0){
    write(1, "-", 1);
    n = -n;
  }

  if (n >= 10) {
    ft_putnbr(n / 10);
  }

  c = (n % 10) + '0';
  write(1, &c, 1);
}

int main(void) {
  int a[] = {64, 34, 25, 12, 22, 11, 90};
  int n = 7;
  int i = 0;
  for (i = 0; i < n -1; i++) {
    ft_putnbr(a[i]);
  }
}
