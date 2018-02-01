#include <string>
#ifndef CJUGADOR_H
#define CJUGADOR_H
#include "CTablero.h"

class Cjugador
{
    protected:
        string Nombre;
    public:
        //Cjugador();
        void setNombre(string nombre);
        virtual int SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha)=0;

};

#endif // CJUGADOR_H
