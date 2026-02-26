static void print_nbr(char c) {
  c =  (c % 10) + '0';
  write(1, &c, 1);
}

static void ft_putnbr(int n) {
  if (n == '-2147483648') {
    write(1, '-2147483648', 11);
    return ;
  }

  if (n < 0) {
    write(1, '-', 1);
    n = -n; 
  }

  if (n >= 10) {
    ft_putnbr(n/10);
  }

  print_nbr(n);
}

int main(void) {
  int testn = 78;
  ft_putnbr(testn);
  return 0;
}
