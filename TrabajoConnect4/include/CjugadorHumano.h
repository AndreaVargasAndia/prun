#ifndef CJUGADORHUMANO_H
#define CJUGADORHUMANO_H
#include "Cjugador.h"
#include "CTablero.h"

class CjugadorHumano:public Cjugador
{
    public:
        CjugadorHumano();
        int SeleccionarMovimiento(CTablero& tablero,int tamanioTablero,char ficha);
        virtual ~CjugadorHumano();
    protected:
    private:
};

#endif // CJUGADORHUMANO_H
