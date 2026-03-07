void print_array(int *a, int n) {
  int i = 0;

  write(1, "[", 1);
  ft_putnbr(a[0]);

  for (i = 1; i < n; i++) {
    if (i <= n - 1) {
      write(1, ", ", 2);
    }
    ft_putnbr(a[i]);
  }
  write(1, "]\n", 2);
}

 
void ft_putchar(char c) {
  write(1, &c, 1);
}


void ft_putnbr(int n) {
  if (n == -2147483648) {
    write(1, "-2147483648", 11);
    return ;
  }

  if (n < 0) {
    ft_putchar('-');
    n = n * -1;
  }

  if (n >= 10) {
    ft_putnbr(n/10);
    ft_putnbr(n%10);
  } else {
    ft_putchar(n + '0');
  }

}

int main(void) {
  int a[] = {12, 32, 13, 46, -45, 345};
  int n = 6;
  print_array(a, n);
  return (0);
}
