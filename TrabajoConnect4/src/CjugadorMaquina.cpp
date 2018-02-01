#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "CjugadorMaquina.h"

CjugadorMaquina::CjugadorMaquina()
{
    srand(time(NULL)); //inicializamos los numeros aleatorios
    //ctor
}
int CjugadorMaquina::SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha)
{
    int col;

    for(;;)
    {
        col = rand() % tamanioTablero + 1;
        cout<<Nombre<<" :";
        Sleep(1000);//expresion en miliseg
        cout<<col<<endl;
        Sleep(500);
        if(tablero.ExistenEspaciosDisponiblesEnCol(col))break;

    }
    return col;

}

CjugadorMaquina::~CjugadorMaquina()
{
    //dtor
}
