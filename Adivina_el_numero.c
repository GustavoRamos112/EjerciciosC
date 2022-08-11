//Este programa utiliza un while para que puedas jugar con el a adivinar el numero
//Este sirve para entender el ciclo while y un poco el como funcionan los if

int main(void)
{
    int Nalia, Naliap, Naliam, Irina;
    int Sulin;
    //Esta variable indica el limite superior de los numeros aleatorios
    Sulin=100;
    //Dado a que rand() nos aroja nueros muy grandes, su modulo al dividirlo contra n+1 seguro es
    //una cifra ntre 1 y n, con la funcion ceil(), redondeo ese numero para que sea un entero 
    Nalia=ceil(rand()%(Sulin+1));
    //Aqui establezco los limites superiores e inferiores para encerrar las posibilades al jugador
    //Rango superior
    Naliap=Nalia+1+ceil((Nalia+1)/4);
    //Rango inferior
    Naliam=Nalia+1-ceil((Nalia+1)/4);
    
    printf("Vamos a jugar, introduce un numero entero entre el 1 y el 100 \n");
    
    //inicio un ciclo para que dependiendo de la respuesta del jugador, continue preguntando hasta que gane
    while (1) {
        scanf("%d", &Irina);
        //Este es el caso apra cuando el jugador acierte el numero
        if (Irina == Nalia) 
        {
            printf("Ganaste¡¡¡¡\n");
            //Este rompe el ciclo y termina el juego
            break;
        }
        //El caso por si la respuesta esta dentro del rango superior que se definio antes
        if (Irina<=Naliap && Irina>Nalia)
        {
            printf("Estas cerca, continua intentando\n");
        }
        //El caso por si la respuesta esta dentro del rango inferior que se ha definido antes
        if (Irina>=Naliam && Irina<Nalia)
        {
            printf("Estas cerca, continua intentando\n");
        }
        //El caso por si a respuesta esta fuera del rango inferior y superior definidos antes
        if (Irina>Naliap || Irina<Naliam)
        {
            printf("Aun estas lejos, vuelve a intentarlo\n");
        }
    }

    return 0;
}
