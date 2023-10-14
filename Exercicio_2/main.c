#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int N1, primo;
    setlocale(LC_ALL,"Portuguese"); /*Comando para caracteres em portugues */
    printf("Verificar se um número é primo.\n");
    do{
        printf("Digite um número: ");
        scanf("%d", &N1);

        if(N1 == 1|| N1 == 2 || N1 == 3 || N1 == 5 || N1 == 7){
            primo = 1;
            printf("O número %d é primo \n", N1);
        } else{
                if ((N1%2) == 0){
                    primo = 0;
                    printf("O número %d não é primo \n", N1);
                }
                else{
                    if ((N1%3)== 0){
                        primo = 0;
                        printf("O número %d não é primo \n", N1);
                    } else{
                            if ((N1%5)==0){
                            primo = 0;
                            printf("O número %d não é primo \n", N1);
                            } else{
                                    if ((N1%7)==0){
                                    primo = 0;
                                    } else{
                                        primo = 1;
                                        printf("O número %d é primo \n", N1);
                                }
                            }
                    }
            }
        }
    }while (primo == 0);

};
