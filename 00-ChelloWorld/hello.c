#include <stdio.h>

int main(){
  FILE *archivo = fopen("output.txt","w");
  fprintf(archivo, "HOLA SANTINO MACCIO!");
  fclose(archivo);
  return 0;
}
