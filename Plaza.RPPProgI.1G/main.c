#include <stdio.h>
#include <stdlib.h>

int calcularIVA(float precioBruto, float* valorImpuesto);
int subibaja(char vec[]);


int main()
{
    float precioBruto = 50.00;
    float valorImpuesto;

    calcularIVA(precioBruto, &valorImpuesto);


    return 0;
}

int calcularIVA(float precioBruto, float* valorImpuesto)
{
    int todoOk = 0;
    *valorImpuesto = 21;
    float iva = 0;

    if(precioBruto > 0 && valorImpuesto != NULL)
    {
        iva =(precioBruto * *valorImpuesto)/100;
        todoOk = 1;
    }
    return todoOk;
}


