//Este programa imprime en la terminal un rectangulo, un rectangulo vacio, 
//un triangulo rectangulo y uno equilatero, este ejercicio ayuda a la
//comprension de los bucles for anidados
#include<stdio.h>

void main()
{
    int i, j;
    //la constamte k es una generalizacion para imprimir figuras del largo k
    int k;
    k=5;
    //ciclo par el cuadrado
    //for anidado para imprimir las lineas de ateriscos de k largo, k veces, asi obtenemos el cuadrado
    for (i=1; i<=k; i++)
    {
        for (j=1; j<=k; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //ciclo para el cuadrado vacio
    for (i=1; i<=k; i++) 
    {
        for (j=1; j<=k; j++) 
        {
            //el condicional indica donde colocar los asteriscos, si tomamos un plano (i,j)
            //los asterisos tinen que dibujarse en toda la linea (1,j) y (i,1), esto para la parte superior
            //para la parte inferior, los asteriscos tienen que dibujarse en todo (k,i) y (i,k)
            if (i==1 || i==k || j==1 || j==k)
            {
                printf("* ");
            }
            //y en los lugares donde i=j, se dibuja un espacio
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
    //ciclo para el triangulo escaleno
    for(i=1; i<=k; i++)
    {
        //condicional j<=i para que al ser i<j, no se imprima caracter, sino un salto de linea
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //ciclo para el triangulo equilatero
    //La variable l nos indica mas adelante la cantidad de espacios que se van a imprimir
    int l;
    for (i=0; i<=k; i++)
    {
        //este indica los espacios que se tienen que imprimir, para que el triangulo se centre
        for (l=i; l<=k; l++)
        {
            printf(" ");
        }
        //este otro for indica los asteriscos que se imprimiran luego de la cantidad de espacios
        //ambos for consiguen la centralizacion del triangulo
        for (j=0-i; j<=0; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
