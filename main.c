#include <stdio.h>

int add(int a, int b);

int main(int argc, char **argv)
{
  printf("%d\n", add(2, 6));
  return 0;
}

//Ejemplo de cómo sumar 2 números llamados desde .asm
// nasm -f elf32 code.asm code.o 
// gcc -m32 main.c code.o -o main   
// Ejecutar con ./main  