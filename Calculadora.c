#include <stdio.h>

int main()
{
    system("cls");      //faz a limpeza do terminal, algo estetico.
    int i;              //declaração de variavel para a opção!
    printf("Selecione a opcao que voce quer!\n1 Somar 2 Subtrair 3 Multiplicar 4 Dividir\n");   
    scanf("%i", &i);        //aqui faz a entrada da opção que você quer!
    system("cls");
    switch (i)      //comando para criar varias opções!
    {
    case 1:
        soma();         //chamada de função para fazer o calculo de soma
        break;          //O break é para quando terminar de fazer a função, ele não ir para outra case!
    case 2:
        subtrair();     //chamada de função para fazer o calculo de subtração
        break;
    case 3:
        multiplicar();  //chamada de função para fazer o calculo de multiplicação
        break;
    case 4:
        dividir();      //chamada de função para fazer o calculo de divisão
        break;
    }
    return 0;
}

soma(){                                 //Aqui começa brincadeira função de soma
    int numb1, numb2, r;                //Declaração de variaveis(Declarei com inteiro pois na soma não vai numeros com virgula!)
    printf("Numero 1: ");
    scanf("%i", &numb1);                //Entrada do primeiro numero
    printf("Numero 2: ");
    scanf("%i", &numb2);                //Entrada do segundo numero
    r = numb1+numb2;                    //Calculo
    printf("O Resultado e %i", r);      //Saida do resultado
}

subtrair(){                             //Função de subtrair
    float numb1, numb2, r;              //Declaração de variavel
    printf("Numero 1: ");
    scanf("%f", &numb1);                //Entrada de numero
    printf("Numero 2: ");
    scanf("%f", &numb2);                //Entrada de segundo numero
    r = numb1 - numb2;                  //Calculo
    printf("O resultado e: %.1f", r);   //Saida de resultado
}

multiplicar(){                          //Função de multiplicação
    int numb1, numb2, r;                //Declaração de variaveis
    printf("Numero 1: ");               
    scanf("%i", &numb1);                //Entrada de primeiro numero
    printf("Numero 2: ");
    scanf("%i", &numb2);                //Entrada de segundo numero
    r = numb1 * numb2;                  //Soma
    printf("O resultado e: %i", r);     //Saida de resultado
}

dividir(){                              //Função de divisão
    float numb1, numb2, r;              //Declaração de variaveis
    printf("Numero 1: ");
    scanf("%f", &numb1);                //Entrada de numero
    printf("Numero 2: ");
    scanf("%f", &numb2);                //Entrada de segundo numero
    r = numb1 / numb2;                  //Soma
    printf("O resultado e: %.2f", r);   //Saida de resultado
}
