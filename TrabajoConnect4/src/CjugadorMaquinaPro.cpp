#include <stdlib.h>
#include <time.h>
#include <windows.h>

#include "CjugadorMaquinaPro.h"

CjugadorMaquinaPro::CjugadorMaquinaPro()
{
    //ctor
}
int CjugadorMaquinaPro::BuscarColumna4Raya(CTablero& tablero,int tamanioTablero,char ficha)
{
    int col=-1;
    for(int f=0;f<tamanioTablero;f++)
    {

        for(int c=0;c<tamanioTablero-3;c++)
        {
            int cuenta=0;
            for(int i=0;i<4;i++)
            {
                if(tablero(f,c+i)==ficha)
                    cuenta++;
                    if(tablero(f,c+i)=='.')
                        col=c+i;
            }
            if(cuenta==3 && col!=-1)
            {
                if(f==tamanioTablero-1)
                    return col;
                else
                {
                    if(tablero(f+1,col)!='.')
                        return col;
                }
            }
        }
    }
    for(int c=0;c<tamanioTablero;c++)
    {
        for(int f=0;f<tamanioTablero-3;f++)
        {
            if(tablero(f,c)=='.' && tablero(f+1,c)==ficha && tablero(f+2,c)==ficha &&tablero(f+3,c)==ficha)
                return c;
        }
    }
    return -1;

}
int CjugadorMaquinaPro::MovimientoAleatorio(CTablero& tablero,int tamanioTablero)
{
    int col;
    for(;;)
    {
        col = rand() % tamanioTablero + 1;
        if(tablero.ExistenEspaciosDisponiblesEnCol(col))break;

    }
    return col;

}
int CjugadorMaquinaPro::SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha)
{
    int col;

        col = BuscarColumna4Raya(tablero,tamanioTablero,ficha);
        if(col==-1)
        {
            if(ficha=='X')
                col = BuscarColumna4Raya(tablero,tamanioTablero,'O');
            else
                col = BuscarColumna4Raya(tablero,tamanioTablero,'X');
        }
        if(col==-1)
        {
            col=MovimientoAleatorio(tablero,tamanioTablero);
        }
        cout<<Nombre<<" :";
        Sleep(1000);//expresion en miliseg
        cout<<col<<endl;
        Sleep(500);

    return col;

}
CjugadorMaquinaPro::~CjugadorMaquinaPro()
{
    //dtor
}
