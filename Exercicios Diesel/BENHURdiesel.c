/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int litrodiesel;
    int capacidadecaminhao;
    litrodiesel = 666;
    capacidadecaminhao = 333;
    
    int valoreal = (litrodiesel * capacidadecaminhao) / 100;
    int valocent = (litrodiesel * capacidadecaminhao) % 100;
    


    printf("o valor é %d reais e %d centavos\n", valoreal, valocent);
    
    
    return 0;
}
