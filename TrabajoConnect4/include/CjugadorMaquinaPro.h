#include "Cjugador.h"
#include "CTablero.h"
#ifndef CJUGADORMAQUINAPRO_H
#define CJUGADORMAQUINAPRO_H


class CjugadorMaquinaPro:public Cjugador
{
    int BuscarColumna4Raya(CTablero& tablero,int tamanioTablero,char ficha);
    int MovimientoAleatorio(CTablero& tablero,int tamanioTablero);
    public:
        CjugadorMaquinaPro();
        int SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha);
        virtual ~CjugadorMaquinaPro();
    protected:
    private:
};

#endif // CJUGADORMAQUINAPRO_H
