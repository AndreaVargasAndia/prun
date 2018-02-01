#include "CjugadorHumano.h"

CjugadorHumano::CjugadorHumano()
{
    //ctor
}


CjugadorHumano::~CjugadorHumano()
{
    //dtor
}

int CjugadorHumano::SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha)
{
    int col;
    for(;;)
    {
        cout<<Nombre<<" :";
        cin>>col;
        if(col>=1 && col<=tamanioTablero && tablero.ExistenEspaciosDisponiblesEnCol(col))break;
        if(col==0)break;
    }
    return col;

}
