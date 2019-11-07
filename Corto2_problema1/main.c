#include <stdio.h>
#include <math.h>

int binarioAdecimal(int, int);

int main(){
    int binario;

    printf("Ingrese un numero binario(Solo numero con 1 y 0):\n");
    scanf("%d",&binario);

    /* Se le pasa un numero binario como primer parametro al metodo recursivo y como se gundo parametro la potencia inicial es decir CERO  */
    int decimal = binarioAdecimal(binario, 0);
    printf("%d a decimal: %d", binario, decimal);
    return 0;
}

/* el metodo recibe un numero entero que ente caso es un binario y una potencia que debe ser 0 inicialmente ya que sera la potencia de la primera posicion base 2 (como se convierte de binario a decmal)*/
int binarioAdecimal(int binario, int n){
    if(binario==0){
        return 0;
    } else {
        // la base 2 se eleva a la potencia n, inicialmente en 0, y se incremente en 1 para la siguiente llamada del metodo recursivo
        return (((binario%10) * pow(2, n)) + binarioAdecimal((binario/10), ++n));
    }
}