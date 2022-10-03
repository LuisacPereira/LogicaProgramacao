//https://github.com/LuisacPereira/LogicaProgramacao.git
// biblioteca necessario para raiz e potencia
#include <math.h>
#include <stdio.h>

int main(void) {
  printf("Luisa Costa Pereira\nAnálise e desenvolvimento de "
         "sistemas\nUniversidade LaSalle\n202220237\n");

  float x1, x2, soma, divisao, subtracao, multiplicacao, potencia, raiz;
  int oper, valido;
  do {
    valido = 0;
  printf("Qual operação deseja realizar?\n1 para raiz quadrada\n2 para soma\n3 "
         "para multiplicação\n4 para divisão\n5 para subtração\n6 para "
         "potenciação\n");
  scanf("%d", &oper);
  //verifica qual a operacao no switch case
  switch (oper) {
    // operacao de raiz quadrada
  case 1:
    printf("Digite o valor:\n");
    //le o valor digitado
    scanf("%f", &x1);
    //calcula raiz
    raiz = sqrt(x1);
    //exibe resultado
    printf("A raiz quadrada de é %f", raiz);
    break;
  case 2:
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);
    printf("Digite o segundo valor:");
    scanf("%f", &x2);
    //calcula soma
    soma = x1 + x2;
    printf("A soma é %f", soma);
    break;
  case 3:
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);
    printf("Digite o segundo valor:");
    scanf("%f", &x2);
    //calcula multiplicacao
    multiplicacao = x1 * x2;
    printf("A multiplicacao é %f", multiplicacao);
    break;
  case 4:
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);
    printf("Digite o segundo valor:");
    scanf("%f", &x2);
    //verifica se o divisor vai ser zero
    if (x2 == 0) {
      printf("O divisor não deve ser 0");
      valido = 1;
      break;
    } else {
      //calcula divisao
      divisao = x1 / x2;
      printf("A divisão é %f", divisao);
      break;
    }
  case 5:
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);
    printf("Digite o segundo valor:");
    scanf("%f", &x2);
    //calcula subtracao
    subtracao = x1 - x2;
    printf("A subtração é %f", subtracao);
    break;
  case 6:
    printf("Digite o primeiro valor:");
    scanf("%f", &x1);
    printf("Digite o segundo valor:");
    scanf("%f", &x2);
    //calcula potencia
    potencia = pow(x1, x2);
    printf("A potência é %f", potencia);
    break;
  default:
    //se o operador nao for um dos 6 será inválido
    printf("Operação inválida");
      valido = 1;
    break;
  }
    // verifica se as informações digitadas são validas
  } while (valido == 1);

  return 0;
}
