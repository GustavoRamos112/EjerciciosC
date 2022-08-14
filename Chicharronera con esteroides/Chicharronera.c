//Las funciones en c o las subrutinas solo devuelven un valor, sin emabrgo, con el uso de un arreglo (array), es posible devolver muchos valores
//Este programa ayuda a la comprension de las subrutinas asi como al uso de los arreglos (array) para almacenar muchos datos sin declarar tantas variables
//tambien ayuda a la comprension de la lectura y escritura de archivos fuera del programa, 

#include <stdio.h>
#include <math.h>

double lectura(double Var[5]);
double raices(double Var[5], double rai[3]);
double escritura(double Var[5], double rai[3]);

//Declaracion de dos arreglos para almacenar los valores de las variables y las raices
//Dado que las subrutinas no regresan mas de dos valores, pueden devolver un arreglo que a su 
//vez ya almacena n valores
double Var[5];
double rai[3];
//decaramos el canal de archivos, no los archivos, estos se declaras mas adelante
FILE *out1, *entrada;
//La funcion principal ejecuta solo las tres subrutinas
int main(void)
{    
    lectura(Var);
    raices(Var, rai);
    escritura(Var, rai);

    return 0;
}

//La priemra subrutina se encarga de leer los valores de las variables a, b y c
//guardandolas en el arreglo Var[1] para a, Var[2] para b y Var[3] para c
double lectura(double Var[5])
{
    //aqui si declaramos los archivos que vamos a usar de escritura (w) y de lectura (r)
    out1=fopen("raices.dat", "w");
    entrada=fopen("ecuacion.dat", "r");
    fscanf(entrada, "%lf", &Var[1]);
    fscanf(entrada, "%lf", &Var[2]);
    fscanf(entrada, "%lf", &Var[3]);
    fprintf(out1, "====================================================================================\n");
    fprintf(out1, "La ecuacion leida es: (%lf)x^2+(%lf)x+(%lf)=0", Var[1], Var[2], Var[3]);
}

//La segunda subrutina se encarga de calcular las raices de la ecuacion
//y guardarlas en el arreglo rai de diferentes manera
double raices(double Var[5], double rai[3])
{
    //Caso cuando la ecuacion no es cuadratica, en rai[1] se guarda el valor de la raiz lineal
    if(Var[1]==0)
    {
        rai[1]=-Var[3]/Var[2];
    }
    //Caso cuando el determinante es mayor a cero, la ecuacion tiene soluciones reales
    //y en rai[1] se guarda la solucion con raiz positiva y en rai[2] la solucion con raiz negativa
    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])>0)
    {
        rai[1]=(-Var[2]+sqrt(Var[2]*Var[2]-4*Var[1]*Var[3]))/(2*Var[1]);
        rai[2]=(-Var[2]-sqrt(Var[2]*Var[2]-4*Var[1]*Var[3]))/(2*Var[1]);
    }
    //Caso con determinante menor a cero, la cuacion tiene soluciones complejas
    //en rai[1] guardamos la parte real de la solucion y en rai[2] la parte imaginaria de esta
    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])<0)
    {
        rai[1]=(-Var[2])/(2*Var[1]);
        rai[2]=(sqrt(-Var[2]*Var[2]+4*Var[1]*Var[3]))/(2*Var[1]);
    }
    //Caso cuando el determinante es igual a cero, la ecuacion tiene soluciones dobles
    //y en rai[1] guardamos la solucion doble
    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])==0)
    {
        rai[1]=(-Var[2])/(2*Var[1]);
    }
}

//La tercera subrutina se encarga de escribir los valores de las raices en el archivo raices.dat
//Nada que escribir, solo escribe las soluciones en raices.dat
double escritura(double Var[5], double rai[3])
{
    if(Var[1]==0)
    {
        fprintf(out1, "\nNo es una ecuacion cuadratica, sino una lineal, pero su solucion es: %lf", rai[1]);
        fprintf(out1, "\n====================================================================================");
    }

    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])>0)
    {
        fprintf(out1, "\nLa ecuacion tiene soluciones reales: \nx_1=%lf y x_2=%lf", rai[1], rai[2]);
        fprintf(out1, "\n====================================================================================");
    }

    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])<0)
    {
        fprintf(out1, "\nLa ecuacion tiene soluciones imaginarias: \nx_1=%lf+i%lf y x_2=%lf-i%lf", rai[1], rai[2], rai[1], rai[2]);
        fprintf(out1, "\n====================================================================================");
    }

    if(Var[1]!=0 && (Var[2]*Var[2]-4*Var[1]*Var[3])==0)
    {
        fprintf(out1, "\nLa ecuacion tiene una solucion doble:\nx=%lf", rai[1]);
        fprintf(out1, "\n====================================================================================");
    }
    fclose(out1);
    fclose(entrada);
}
