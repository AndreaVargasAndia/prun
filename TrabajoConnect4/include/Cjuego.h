#include <string>
#ifndef CJUEGO_H
#define CJUEGO_H
#include "CArray2Dim.h"
#include "CTablero.h"
#include "Cjugador.h"

class Cjuego
{
    /*CArray2Dim<char> tablero;
    int tamanioTablero;
    public:

        Cjuego();
        void EstablecerTablero(int n);
        void MostrarTablero();
        void IngresarFicha(char ficha,int col);
        bool ExistenEspaciosDisponibles();
        bool ExistenEspaciosDisponiblesEnCol(int col);
        bool ExisteCuatroEnRaya(char ficha);

        virtual ~Cjuego();
    protected:
    private:*/
    CTablero tablero;
    int tamanioTablero;
    //string Nombre1,Nombre2;
    void IngresarNombres();
    Cjugador *jugador1;
    Cjugador *jugador2;
    //int SolicitarMovimiento(string jugador);
    public:
        Cjuego();
        void setJugador1(Cjugador *jugador);
        void setJugador2(Cjugador *jugador);
        void Jugar();

        virtual ~Cjuego();


};

#endif // CJUEGO_H
