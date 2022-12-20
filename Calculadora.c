#include <stdio.h>

int main()
{
    system("cls");
    int i;
    printf("Selecione a opcao que voce quer!\n1 Somar 2 Subtrair 3 Multiplicar 4 Dividir\n");
    scanf("%i", &i);
    system("cls");
    switch (i)
    {
    case 1:
        soma();
        break;
    case 2:
        subtrair();
        break;
    case 3:
        multiplicar();
        break;
    case 4:
        dividir();
    default:
        break;
    }
    return 0;
}

soma(){
    int numb1, numb2, r;
    printf("Numero 1: ");
    scanf("%i", &numb1);
    printf("Numero 2: ");
    scanf("%i", &numb2);
    r = numb1+numb2;
    printf("O Resultado e %i", r);
}

subtrair(){
    float numb1, numb2, r;
    printf("Numero 1: ");
    scanf("%f", &numb1);
    printf("Numero 2: ");
    scanf("%f", &numb2);
    r = numb1 - numb2;
    printf("O resultado e: %.1f", r);
}

multiplicar(){
    int numb1, numb2, r;
    printf("Numero 1: ");
    scanf("%i", &numb1);
    printf("Numero 2: ");
    scanf("%i", &numb2);
    r = numb1 * numb2;
    printf("O resultado e: %i", r);
}

dividir(){
    float numb1, numb2, r;
    printf("Numero 1: ");
    scanf("%f", &numb1);
    printf("Numero 2: ");
    scanf("%f", &numb2);
    r = numb1 / numb2;
    printf("O resultado e: %.2f", r);
}
