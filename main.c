#include <stdio.h>
#include "ctype.h"

void primeNumbers(int numeroFinal){
    int contador;
    int i;
    int primo;
    int final = numeroFinal;

    for (i = final; i > 0; i--) {
        primo = 1;
        contador = 2;
        while (contador <= i / 2 && primo) {
            if (i % contador == 0)
                primo = 0;
            contador++;
        }
        if (primo)
            printf("%d ", i);
    }
    printf("NUMEROS PRIMOS");
}
void egomaniacNumber(){
    printf("NUMERO EGÓLATRA");
}
void magicNumber(){
    printf("NUMERO MAGICO");
}
void IMC(){
    printf("INDICE DE MASA CORPORAL");

}
void sumOfDigits(){
    printf("SUMA DE DIGITOS");
}
void calcFibonacci(){
    printf("unaa secuencia de palabas Fibonacci ");
}
void testString(){
    char prue[] = {'O', 'O', 'X', 'X', 'O', 'X', 'X', 'O', 'O', 'O'};
    int contador = 0;
    int total = 0;
    int VectorSuma[sizeof(prue) - 1];

    for (int i = 0; i <= sizeof(prue) - 1; ++i) {
        contador++;
        if (prue[i] == 'O') {
            VectorSuma[i] = contador;
        } else if (prue[i] == 'X')
            contador = 0;
        VectorSuma[i] = contador;
    }
    for (int j = 0; j <= sizeof(prue) - 1; ++j) {
        printf("%d ", VectorSuma[j]);
        total = total + VectorSuma[j];
    }
    printf("\n------El total de la calificacion es: %d------\n", total);
    printf("PRUEBA CADENA ");
}
void stop()
{
    printf("\nPulsa una ENTER para continuar...");
    getchar();
    getchar();
}

void mainMenu(){
    char option;
    char *mainMenu = "\n<<<<MENU PRINCIPAL>>>>\n\n"
                      "1. Numero Primo\n"
                      "2. Numero Ególatra\n"
                      "3. Numero Magico\n"
                      "4. Indice de masa corporal (IMC)\n"
                      "5. Suma de digitos\n"
                      "6. Serie de Fibonnaci\n"
                      "7. Test Cadena\n\n"
                      "Digite Opcion ([s/S]-Salir).... ";
    do{
        printf( mainMenu );
        scanf("%c",&option);
        fflush(stdin);
        switch(option){
            case '1' :
                int numP1;
                printf("Digite el numero limite !\n");
                scanf("%i", &numP1);
                if (numP1>0){
                    primeNumbers(numP1);
                }
                else{
                    printf("Error tiene que Digitar un Numero mayor a 1");
                }
                stop();
                break;
            case '2' :
                egomaniacNumber();
                stop();
                break;

            case '3' :
                magicNumber();
                stop();
                break;
            case '4':
                IMC();
                stop();
                break;

            case '5' :
                sumOfDigits();
                stop();
                break;

            case '6' :
                calcFibonacci();
                stop();
                break;

            case '7':
                testString();
                stop();
                break;
            case 's':
                break;
            case 'S':
                break;
            default:
                printf("OPCION NO VALIDA");
                stop();
                break;
        }

    }while( toupper(option) != 'S' );
}

int main() {
    mainMenu();
    return 0;
}
