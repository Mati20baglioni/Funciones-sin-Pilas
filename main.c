#include <stdio.h>
#include <stdlib.h>

/*Realizar todas las funciones en un mismo proyecto, para ir probando su correcto funcionamiento deberá desarrollar una función main,
 donde cree las variables que necesite, e invoque a las funciones como corresponda en cada caso.


1-Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.
2-Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.
3-Diseñe una función que reciba un número entero N y realice la suma de los números enteros positivos menores que N y lo retorne. N es un  dato ingresado por el usuario en el main.
4-Desarrollar una función que muestre la tabla de multiplicar de un número entero recibido por parámetro.
5-Realice una pequeña calculadora, utilizando funciones (una función de suma, una de multiplicación, una de resta, una de división…)
6-Realizar una función que reciba un número positivo entero por parámetro por referencia, y cambie su signo a negativo.
7-Realizar una función que reciba dos números enteros por parámetro por referencia y cargue sus valores el usuario dentro de la función.
*/

int main()
{
    /* FUNCION 1
    int valor_aleatorio = generar_valor_aleatorio();
    printf("Valor aleatorio: %d\n", valor_aleatorio);*/

    /* FUNCION 2
    int x,y,z,resultado;
    printf("ingrese 3 numeros:\n");
    scanf("%i" "%i" "%i",&x,&y,&z);
    resultado=MayorMenorNumero(x,y,z);
    */
    /*FUNCION 3
    int a,Resultado;
    printf("INGRESE UN NUMERO ENTERO POSITIVO:\n");
    scanf("%i",&a);
    Resultado=SumaEnteroPositivo(a);
    printf("LA SUMA DE LOS ENTEROS POSITIVOS ES:%i\n",Resultado);*/

    /*FUNCION 4
    int b;
    printf("INGRESE UN NUMERO ENTERO POSITIVO:\n");
    scanf("%i",&b);
    int Tabla;
    printf("LA TABLA DEL NUMERO INGRESADO ES:\n");
    Tabla=TablaDeMultiplicar(b);*/

    /*FUNCION 5*/
    int calcu=CalculadoraTotal();

/*FUNCION 6
    int e,opuesto;
    printf("INGRESE UN NUMERO ENTERO POSITIVO:\n");
    scanf("%i",&e);
    CambioNumeroNegativo(&e);
    printf("EL NUMERO EN NEGATIVO ES:%d\n",e);*/

/*FUNCION 7
    int g;
    int h;
    CargarValores(&g,&h);

    return 0;
*/
}


int generar_valor_aleatorio()
{
    srand(time(NULL));
    return rand() % 101;
}

int MayorMenorNumero(int numero1,int numero2,int numero3)
{
    int mayor,menor;

    mayor=numero1;
    if(numero2>mayor)
    {
        mayor=numero2;
    }if(numero3>mayor)
    {
        mayor=numero3;
    }

    ///////////////////
    menor=numero1;
    if(numero2<menor)
    {
        menor=numero2;
    }if(numero3<menor)
    {
        menor=numero3;
    }
    printf("EL MAYOR ES:%i\n",mayor);
    printf("EL MENOR ES:%i\n",menor);

}

int SumaEnteroPositivo(int num1)
{
    int suma=0;
    for (int i = 1; i<num1; i++)
    {
        suma += i;
    }
    return suma;
}


int TablaDeMultiplicar(int numero)
{

    for(int i=1;i<=10;i++)
        {
            printf("%i X %i=%i\n",i,numero,i*numero);
        }

}

int Sumatoria(int variable1,int variable2)
{
    int suma=variable1+variable2;
    return suma;
}
int restas(int variable1,int variable2)
{
    int resta=variable1-variable2;
    return resta;
}
float divisiones(int variable1,int variable2)
{
    float div=(float)variable1/variable2;
    return div;
}
int multiplicaciones(int variable1,int variable2)
{
    int mult=variable1*variable2;
    return mult;
}

int CalculadoraTotal()
{
int c,d,resultado;
    char control1='s';

    printf("INGRESE EL PRIMER NUMERO:\n");
    scanf("%i",&c);
    printf("INGRESE EL SEGUNDO NUMERO:\n");
    scanf("%i",&d);
    printf("QUE OPERACION DESEA REALIZAR:\n");
    fflush(stdin);
    scanf("%c",&control1);
    if(control1=='s')
    {
        resultado=Sumatoria(c,d);

    }else if(control1=='m')
    {
        resultado=multiplicaciones(c,d);
    }else if(control1=='d')
    {
        resultado=divisiones(c,d);
    }else if(control1=='r')
    {
        resultado=restas(c,d);

    }
    printf("El resultado de la operacion es : %i\n", resultado);

}

void CambioNumeroNegativo(int *e)
{
    *e=-(*e);
}
int CargarValores(int*g,int*h)
{
    printf("INGRESE DOS VALORES:\n");
    scanf("%i" "%i",&g,&h);
    printf("LOS VALORES SON:%i\n",g);
    printf("LOS VALORES SON:%i\n",h);

}
