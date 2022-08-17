#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Avaliação III - Exercício 4
//Gabriel Rizzi

int tamanho(char v[])
 {
  int i;

  while (v[i]!='\0')
  {i++;}

  return i;


 }

int main(int argc, char *argv[])
{

  char str1[50],str2[50];
  int j,ta,p=0;
  printf("Digite uma frase: ");
   gets(str1);
ta=tamanho(str1);
j=ta;

while (j>=0 && p<=ta)
{

 str2[p]=str1[j];
 printf("%c",str2[p]);
 j--;
 p++;
}

  return 0;
}
