#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DENTRO 1
#define FORA 0


int main(int argc, char** argv)
{
   char frase[30], vog[10];
   int palavra = 0;
   int vogais = 0;
   int i = 0,c;
   int estado;


   vog[0] = 'a';
   vog[1] = 'e';
   vog[2] = 'i';
   vog[3] = 'o';
   vog[4] = 'u';

   printf ("Escreva uma frase: \n");

   while(c != '\n')
   {
      c = getchar();
      frase[i] = c;
      i++;
   }

   frase[i-1] = '\0';

   for (i = 0; i <= strlen(frase); i++)
   {
      frase[i] = tolower(frase[i]);
   }

   for (i = 0; i <= strlen (frase); i++)
   {
      if (frase[i] != ' ')
      {
         estado = DENTRO;
         if (frase[i] == vog[0] || frase[i] == vog[1] || frase[i] == vog[2]
               || frase[i] == vog[3] || frase[i] == vog[4])
            vogais++;
      }
      else if (frase[i] == ' ' && estado == DENTRO)
      {
          estado = FORA;
          palavra++;
      }


   }

   palavra++;

   printf ("A frase  \"%s\"\nContem %i palavras e %i vogais \n", frase, palavra,vogais);

   return 0;

}
