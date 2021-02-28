#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int jugar_otra_vez;

void repetir()
{
    do
    {
        printf("Quieres jugar otra vez --- 1=si 2=no\n");
        scanf("%i", &jugar_otra_vez);

        if (jugar_otra_vez != 1 && jugar_otra_vez != 2)
        {
            printf("Elige un numero de los que se te han asignado (1 o 2)\n");
        }

    } while (jugar_otra_vez != 1 && jugar_otra_vez != 2);    
}

int main()
{

    int player, maquina;
    

    do
    {
        printf("********PIEDRA PAPEL TIJERA********\n\n");

        do
        {
            printf("Seleccione: Piedra-1 Papel-2 Tijera-3\n");
            scanf("%i", &player);

            switch (player)
            {
            case 1:
            
              printf("Has elegido piedra\n\n");

              break;
            case 2:
            
                printf("Has elegido papel\n\n");

                break;
            case 3:

                printf("Has elegido tijeras\n\n");

               break;
            default:
                printf("Solo puedes seleccionar un numeo entre 1 y 3\n\n");
                break;
            }
        } while (player > 3 || player < 1);    

        srand(time(NULL));
        maquina = rand()%3 + 1;

        if (maquina == 1)
        {
            printf("La IA ha seleccionado piedra\n\n");
        } else if (maquina == 2)
        {
          printf("La IA ha seleccionado papel\n\n");
        } else if (maquina == 3)
        {
            printf("La IA ha seleccionado tijeras\n\n");
        }

        if (player == maquina)
        {
            printf("Empate\n\n");
        } else if (player == 1 && maquina == 3)
        {
            printf("Has ganado\n\n");
        } else if (player == 2 && maquina == 1)
        {
            printf("Has ganado\n\n");
        } else if (player == 3 && maquina == 2)
        {
            printf("Has ganado\n\n");
        } else 
        {
            printf("Has perdido\n\n");
        }

        repetir();
        
    } while (jugar_otra_vez == 1);
    
    return 0;
}