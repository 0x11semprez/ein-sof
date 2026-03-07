char *ft_strcpy(char *dest, char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return dest;
}

int main(void) {
  char buffer[20];
  ft_strcpy(buffer, "Ghost");
  write(1, buffer, 5);
  write(1, "\n", 1); 
  return 0;
}
