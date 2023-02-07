#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  char input[100];
  
  fp = fopen("test.txt", "r");
  if (fp == NULL) {
    printf("Error opening file.\n");
    return 1;
  }
  
  while (fscanf(fp, "%[^#]s", input) == 1) {
    int len = strlen(input);
    if (len > 0) {
      input[len] = '\0';
      printf("%s\n", input);
    }
    int c = fgetc(fp);
    while (c != '\n' && c != EOF) {
      c = fgetc(fp);
    }
  }
  
  fclose(fp);
  return 0;
}
