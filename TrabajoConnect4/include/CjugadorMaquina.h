#include "Cjugador.h"
#include "CTablero.h"
#ifndef CJUGADORMAQUINA_H
#define CJUGADORMAQUINA_H


class CjugadorMaquina:public Cjugador
{
    public:
        CjugadorMaquina();
        int SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha);
        virtual ~CjugadorMaquina();
    protected:
    private:
};

#endif // CJUGADORMAQUINA_H
