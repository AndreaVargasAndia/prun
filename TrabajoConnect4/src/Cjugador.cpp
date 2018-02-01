#include "Cjugador.h"

/*Cjugador::Cjugador()
{
    //ctor
}*/
void Cjugador::setNombre(string nombre)
{

    this->Nombre=nombre;
}
/*int Cjugador::SeleccionarMovimiento(CTablero& tablero,int tamanioTablero)
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

}*/
