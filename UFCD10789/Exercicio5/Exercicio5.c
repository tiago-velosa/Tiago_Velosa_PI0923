#include <stdio.h>
 
int main() {
    int Num1, Num2, Num3;
<<<<<<< HEAD
 
    // Leitura dos três valores inteiros
=======

>>>>>>> 7623ced77532be6ed6b0d693739bd4036f33ed89
    printf("Insira o primeiro valor: ");
    scanf("%d", &Num1);
    printf("Insira o segundo valor: ");
    scanf("%d", &Num2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &Num3);
 
    if (Num1 > Num2) {
        int temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }
    if (Num2 > Num3) {
        int temp = Num2;
        Num2 = Num3;
        Num3 = temp;
    }
    if (Num1 > Num2) {
        int temp = Num1;
        Num1 = Num2;
        Num2 = temp;
    }
 
    printf("Ordem crescente: %d, %d, %d\n", Num1, Num2, Num3);
 
    printf("Ordem decrescente: %d, %d, %d\n", Num3, Num2, Num1);
 
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 7623ced77532be6ed6b0d693739bd4036f33ed89
