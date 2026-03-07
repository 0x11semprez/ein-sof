static void ft_putchar(char c) {
  write(1, &c, 1);
}

int main(void) {
  char s = 's';
  ft_putchar(s);
} 
