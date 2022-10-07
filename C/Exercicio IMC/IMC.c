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