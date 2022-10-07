//Exercicio proposto pelo prof Benhur Stein
//Faça um programa que lê um inteiro que corresponde a um ano, e informa se esse ano é bissexto.
// Os anos mútiplos de 400 são bissextos; os demais múltiplos de 100 não são;
// os demais múltiplos de 4 são.


int main () {

  int ano;

  printf("Digite o ano desejado\n");
  scanf("%d", &ano);
 
  if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
      printf("Bissexto.\n");
  } else {
    printf("Não bissexto.\n");
  }


return 0;

}