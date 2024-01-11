#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char *argv[])
{

  printf("secret: \n aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n[");
  FILE *fp = fopen("/usr/bin/secret.txt", "r");
  printf("bbbbbbbbbbbbbbbbbbbbbbbbbbbb\n");
  char s[64] = {'\0'};
  printf("cccccccccccccccccccccccccccc\n");
  fscanf(fp, "%10s", s);
  printf("%s]\n", s);

  fclose(fp);

  // printf("hello bb\n");

  return 0;
}





