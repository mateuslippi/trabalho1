#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "Portuguese");
    //"Utilizando caracteres e acentuação da língua portuguesa

    //Apresentação do aluno:
    printf("Autor: Mateus Lippi Pereira\n");
    printf("Curso: Analise e Desenvolvimento de Sistemas\n");
    printf("Universidade: Unilasalle-RJ\n");
    printf("Número da matrícula: 202212655\n");
    printf("\n");

    //Declaração das variáveis que serão utilizadas ao decorrer do algoritmo:
    int operacao;
    double valor1, valor2, soma, subtracao, multiplicacao, divisao, potencia, raiz;

    printf("----------------------------------------------------------\n");
    printf("\n");

    //Mostrando ao usuário as opções de operações do programa e solicitando a escolha.
    printf("Escolha qual das operações abaixo você deseja realizar:\n ");
    printf("\n");
    printf("Soma: 1\n");
    printf("Subtração: 2\n");
    printf("Multiplicação: 3\n");
    printf("Divisão: 4\n");
    printf("Potência: 5\n");
    printf("Raiz quadrada: 6\n");
    printf("\n");
    printf("Digite o número de acordo com a operação desejada: ");

    //Lendo a escolha do usuário:
    scanf("%d", &operacao);

    //Utilização da função "switch" para criar condições baseadas na entrada do usuário atribuída a variável "operacao".
    switch (operacao)  {

        //Primeiro caso: Uusário escolheu a operação de soma:
        case 1:
            printf("Digite o primeiro número: ");
            scanf("%lf", &valor1);
            printf("Digite o segundo número: ");
            scanf("%lf", &valor2);
            soma = valor1 + valor2;
            printf("\n");
            printf("O resultado da soma de %.2lf e %.2lf é: %2.lf", valor1, valor2, soma);
            break;

        //Segundo caso: Usuário escolheu a operação de subtração:
        case 2:
            printf("Digite o primeiro número: ");
            scanf("%lf", &valor1);
            printf("Digite o segundo número: ");
            scanf("%lf", &valor2);
            subtracao = valor1 - valor2;
            printf("\n");
            printf("O resultado da subtração de %.2lf e %.2lf é: %2.lf", valor1, valor2, subtracao);
            break;

        //Terceiro caso: Usuário escolheu a operação de multiplicação:
        case 3:
            printf("Digite o primeiro número: ");
            scanf("%lf", &valor1);
            printf("Digite o segundo número: ");
            scanf("%lf", &valor2);
            multiplicacao = valor1 * valor2;
            printf("\n");
            printf("O resultado da multiplicação de %.2lf e %.2lf é: %2.lf", valor1, valor2, multiplicacao);
            break;

        //Quarto caso: Usuário escolheu a operação de divisão:
        case 4:
            printf("Digite o primeiro número: ");
            scanf("%lf", &valor1);
            printf("Digite o segundo número: ");
            scanf("%lf", &valor2);
            divisao = valor1 / valor2;
            printf("\n");
            printf("O resultado da divisao de %.2lf e %.2lf é: %2.lf", valor1, valor2, divisao);
            break;

        //Quinto caso: Usuário escolheu a operação de potência:
        case 5:
            printf("Digite o valor da base: ");
            scanf("%lf", &valor1);
            printf("Digite o valor do expoente : ");
            scanf("%lf", &valor2);
            potencia = pow(valor1, valor2);
            printf("\n");
            printf("O resultado da potencia de %.2lf e %.2lf é: %2.lf", valor1, valor2, potencia);
            break;

        //Sexto caso: Usuário escolheu a operação de raiz quadrada:
        case 6:
            printf("Digite o número que deseja encontrar a raiz: ");
            scanf("%lf", &valor1);
            raiz = sqrt(valor1);
            printf("A raiz quadrada de %.2lf é: %.4lf", valor1, raiz);
            break;

        //Saída padrão para caso o usuário não insira nenhum valor de entrada que corresponda aos casos acima:
        default:
            printf("Por favor, tente novamente inserindo uma opção válida.");
    }
    return 0;
}


