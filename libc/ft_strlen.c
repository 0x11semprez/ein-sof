int ft_strlen(char *s) {
  int i = 0;
  while (s[i] != '\0') {
    i++;
  }
  return i;
}

int main(void) {
  char *test = "ein-sof";
  int len = ft_strlen(test);
  char c = len + '0';
  write(1, &c, 1);
  return 0;
}



