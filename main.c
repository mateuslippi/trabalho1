// Usu�rio do github: mateuslippi

#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    //"Utilizando caracteres e acentua��o da l�ngua portuguesa
    setlocale(LC_ALL, "Portuguese");

    //Apresenta��o do aluno:
    printf("Autor: Mateus Lippi Pereira\n");
    printf("Curso: Analise e Desenvolvimento de Sistemas\n");
    printf("Universidade: Unilasalle-RJ\n");
    printf("N�mero da matr�cula: 202212655\n");
    printf("\n");

    //Declara��o das vari�veis que ser�o utilizadas ao decorrer do algoritmo:
    int operacao;
    float valor1, valor2, soma, subtracao, multiplicacao, divisao, potencia, raiz;

    printf("----------------------------------------------------------\n");
    printf("\n");

    //Mostrando ao usu�rio as op��es de opera��es do programa e solicitando a escolha.
    printf("Escolha qual das opera��es abaixo voc� deseja realizar:\n ");
    printf("\n");
    printf("Soma: 1\n");
    printf("Subtra��o: 2\n");
    printf("Multiplica��o: 3\n");
    printf("Divis�o: 4\n");
    printf("Pot�ncia: 5\n");
    printf("Raiz quadrada: 6\n");
    printf("\n");
    printf("Digite o n�mero de acordo com a opera��o desejada: ");

    //Lendo a escolha do usu�rio:

    scanf("%d", &operacao);

    //Utiliza��o da fun��o "switch" para criar condi��es baseadas na entrada do usu�rio atribu�da a vari�vel "operacao".
    switch (operacao)
    {

    //Primeiro caso: Uus�rio escolheu a opera��o de soma:
    case 1:
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &valor2);
        soma = valor1 + valor2;
        printf("\n");
        printf("O resultado da soma de %.2f e %.2f �: %.2f", valor1, valor2, soma);
        break;

    //Segundo caso: Usu�rio escolheu a opera��o de subtra��o:
    case 2:
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &valor2);
        subtracao = valor1 - valor2;
        printf("\n");
        printf("O resultado da subtra��o de %.2f e %.2f �: %.2f", valor1, valor2, subtracao);
        break;

    //Terceiro caso: Usu�rio escolheu a opera��o de multiplica��o:
    case 3:
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &valor2);
        multiplicacao = valor1 * valor2;
        printf("\n");
        printf("O resultado da multiplica��o de %.2f e %.2f �: %.2f", valor1, valor2, multiplicacao);
        break;

    //Quarto caso: Usu�rio escolheu a opera��o de divis�o:
    case 4:
        printf("Digite o primeiro n�mero: ");
        scanf("%f", &valor1);
        printf("Digite o segundo n�mero: ");
        scanf("%f", &valor2);
        if (valor2 != 0) {
            divisao = valor1 / valor2;
            printf("\n");
            printf("O resultado da divis�o de %.2f e %.2f �: %.2f", valor1, valor2, divisao);
        }
        else {
            printf("\n");
            printf("Inv�lido, escolha um valor diferente de 0.");
        }
        break;

    //Quinto caso: Usu�rio escolheu a opera��o de pot�ncia:
    case 5:
        printf("Digite o valor da base: ");
        scanf("%f", &valor1);
        printf("Digite o valor do expoente : ");
        scanf("%f", &valor2);
        potencia = pow(valor1, valor2);
        printf("\n");
        printf("O resultado da potencia de %.2f e %.2f �: %.2f", valor1, valor2, potencia);
        break;

    //Sexto caso: Usu�rio escolheu a opera��o de raiz quadrada:
    case 6:
        printf("Digite o n�mero que deseja encontrar a raiz: ");
        scanf("%f", &valor1);
        raiz = sqrt(valor1);
        printf("A raiz quadrada de %.2f �: %.2f", valor1, raiz);
        break;

    //Sa�da padr�o para caso o usu�rio n�o insira nenhum valor de entrada que corresponda aos casos acima:
    default:
        printf("Por favor, tente novamente inserindo uma op��o v�lida.");
    }
    return 0;
}


