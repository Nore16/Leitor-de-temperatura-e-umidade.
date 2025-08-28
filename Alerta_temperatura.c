#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf ("Entre com a temperatura: \n");
    scanf("%f",&temperatura);
    
    printf("entre com umidade: \n");
    scanf("%f",&umidade);

    printf("Entre com estoque: \n");
    scanf("%u",&estoque);

    if (temperatura > 30)
    {printf("Temperatura Alta.\n");
    }else {
        printf("Temperátura está dentro dos parâmetros.\n");
    }
    if (umidade > 50)
    {printf("umidade critica.\n");
    }else {
        printf("umidade está dentro dos parâmetros.\n");
    }
    if (estoque < estoqueminimo)
    {printf("estoque está abaixo do minimo!.\n");
    }else {
        printf("estoque normal! \n");
    }
}