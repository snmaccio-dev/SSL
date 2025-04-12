#include <stdio.h>

int main(){
  FILE *archivo = fopen("output.txt","w");
  printf("HOLA SANTINO MACCIO!\n");
  fprintf(archivo, "HOLA SANTINO MACCIO!");
  fclose(archivo);
  return 0;
}
