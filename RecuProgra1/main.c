#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
int id;
char nombre[20];
int infectados;
int recuperados;
int muertos;
}ePais;

/*1. Dada  una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
    infectados(int), recuperados(int) y muertos(int). Desarrollar una función llamada
    actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos a
    los que ya tiene el país. La función no devuelve nada.
*/
void actualizarRecuperados(ePais* pais, int recuperados);

/*
2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
    y su responsabilidad es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU
*/
int invertirCadena(char cadena[]);

/*
3. Crear una función que se llame ordenarCaracteres que reciba una cadena de caracteres como parámetro
    y su responsabilidad es ordenarlos caracteres de manera ascendente dentro de la cadena. Ejemplo si le pasamos
    "algoritmo" la deja como "agilmoort"
*/
int ordenarCaracteres(char cadena[]);

int main()
{
    char cadena[] = "algoritmo";

    printf("%s\n", cadena);

     invertirCadena(cadena);

    ordenarCaracteres(cadena);


    return 0;
}

int invertirCadena(char cadena[])
{
    int tam = strlen(cadena);
    char aux;
    int todoOk = 0;
    if(cadena != NULL)
    {
        for(int i = 0; i < tam - 1; i++)
        {
            for(int j = i + 1; j < tam; j++)
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }
        }
        printf("%s\n", cadena);
        todoOk = 1;
    }

    return todoOk;
}

void actualizarRecuperados(ePais* pais, int recuperados)
{
    if(recuperados >= 0)
    {
        pais->recuperados += recuperados;
    }
}

int ordenarCaracteres(char cadena[])
{
    int todoOk = 0;
    int tam = strlen(cadena);
    char aux;
    if(cadena != NULL && tam > 0)
    {
        for(int i = 0; i < tam - 1; i++)
        {
             for(int j = i + 1; j < tam; j++)
             {
                 if(cadena[i] > cadena[j])
                 {
                    aux = cadena[i];
                    cadena[i] = cadena[j];
                    cadena[j] = aux;
                 }
             }
        }
        printf("%s\n", cadena);
        todoOk = 1;
    }
    return todoOk;
}
