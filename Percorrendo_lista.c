#include <stdio.h>

int main()
{
  int numero = 1000, digitado, resultado = 0, quantidade = 15;

  for (int i = 0; i < quantidade; i++)
  {
    printf("\nIncira os numeros: ");
    scanf("%d", &digitado);

    if (digitado % 2 == 0)
    {
      resultado = numero + digitado;
    }
    else
    {
      resultado = numero - digitado;
    }

    printf("Digitado: %d valor atual:%d", digitado, resultado);

    numero = resultado;
    
  }
}