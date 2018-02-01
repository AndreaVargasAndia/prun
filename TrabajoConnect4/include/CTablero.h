#ifndef CTABLERO_H
#define CTABLERO_H
#include "CArray2Dim.h"

class CTablero
{
    CArray2Dim<char> tablero;
    int tamanioTablero;
    public:
        CTablero();
        void EstablecerTablero(int n);
        void MostrarTablero();
        char operator()(int f,int c);//accerder a la matriz
        void IngresarFicha(char ficha,int col);
        bool ExistenEspaciosDisponibles();
        bool ExistenEspaciosDisponiblesEnCol(int col);
        bool ExisteCuatroEnRaya(char ficha);

        virtual ~CTablero();
    protected:
    private:
};

#endif // CTABLERO_H
