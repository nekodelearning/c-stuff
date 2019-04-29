#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
FILE *fp;

  if((fp=freopen("log.out", "a" ,stdout))==NULL) {
    printf("Cannot open file.\n");
    exit(1);
  }

  fprintf(stderr, "Error en planta de Centro\n");
  printf("Error en planta de Centro\n");

  fclose(fp);


  return 0;
}
