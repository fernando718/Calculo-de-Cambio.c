#include <stdio.h>
int main()
{
  float depositar, ingresar, resta;
  printf("\n\n Buenos dias, bienvenido a la practicaja");
  printf("\n\n NOTA solo se reciben cantidades mayores a 500 pesos");
  printf("\n\n ¿Cuánto dinero en $ debes depositar en caja?");
  scanf("%f",& depositar);
  printf("\n\n ¿Cuanto dinero vas a ingresar?");
  scanf("%f",&ingresar);
  resta = ingresar - depositar;
  printf("\n El cambio que vas a recibir en pesos %f" , resta);
  printf("\n Tenga buen día, vuelva pronto");
  return 0;

}
