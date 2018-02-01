#include <iostream>
#include <stdlib.h>
#include "CArray2Dim.h"
#include "CArray.h"
#include "Cjuego.h"
#include "CjugadorHumano.h"
#include "CjugadorMaquina.h"
#include "CjugadorMaquinaPro.h"
using namespace std;

int main()
{
    int numIngresado;
    for(;;){
            system("cls");
    cout<<"....____.. ___..._.._.._.._...___...___..___..."<<endl;
    cout<<"...|    ..|   |..||.|..||.|..|   ..|   .. | ..."<<endl;
    cout<<"...|    ..|   |..|.||..|.||..|___..|   .. | ..."<<endl;
    cout<<"...|    ..|   |..|..|..|..|..|   ..|   .. | ..."<<endl;
    cout<<"...|____..|___|..|..|..|..|..|___..|___.. | ..."<<endl;
    cout<<"....---------------------------------------...."<<endl;
    cout<<".......... ........ |  | ......................"<<endl;
    cout<<"................... |__| ......................"<<endl;
    cout<<"...................... | ......................"<<endl;
    cout<<"...................... | ......................"<<endl;
    cout<<"...................... | ......................"<<endl;
    cout<<"..............................................."<<endl;
    cout<<".........     ___       __   __   _  .........."<<endl;
    cout<<"........./|--- |  |  | | _  |__| |_| .........."<<endl;
    cout<<"..........|.  _|  |__| |__| |  | | \ .........."<<endl;
    cout<<".............................................. "<<endl;
    cout<<".........__    ___   __         _  ............"<<endl;
    cout<<".........__|--|___  |__| |   | |_| ............"<<endl;
    cout<<"........|__.   ___| |  | |__ | | \ ............"<<endl;
    cout<<"..............................................."<<endl;
    cout<<"..............................................."<<endl;
    cout<<"................. INGRESAR ...................."<<endl;
    cout<<".................  NUMERO  ...................."<<endl;
    cout<<"..............................................."<<endl;
    cout<<".................          ...................."<<endl;
    cout<<"                    ";cin>>numIngresado;cout<<"                 "<<endl;



    if(numIngresado==1)
    {
        system("cls");
        Cjuego *juego=new Cjuego();
        CjugadorHumano a;
        CjugadorHumano *b=new CjugadorHumano();
        CjugadorMaquina c;
        CjugadorMaquina d;
        CjugadorMaquinaPro e;

        juego->setJugador1(&d);
        juego->setJugador2(&e);
        juego->Jugar();
        system("pause");
        delete juego;
        delete b;

    }

    if(numIngresado==2)
    {
        break;
    }

    }






    /*
    int col;
    char ganador='E';
    int tamanioTablero;
    do
    {
        cout<<"Ingrese un tamano entre el 4 - 10 : ";
        cin>>tamanioTablero;
    }while(tamanioTablero<4||tamanioTablero>10);
    system("cls");
    juego.EstablecerTablero(tamanioTablero);
    juego.MostrarTablero();

    while(juego.ExistenEspaciosDisponibles())
    {
        for(;;)
        {
            cout<<"jugador 1 :";
            cin>>col;
            if(col>=1 && col<=tamanioTablero&&juego.ExistenEspaciosDisponiblesEnCol(col))break;
            if(col==0)break;
        }
        if(col==0)break;

        juego.IngresarFicha('X',col);
        system("cls");
        juego.MostrarTablero();
        if(juego.ExisteCuatroEnRaya('X'))
        {
            ganador='X';
            break;
        }
        if(!juego.ExistenEspaciosDisponibles())break;
        for(;;)
        {
            cout<<"jugador 2 :";
            cin>>col;
            if(col>=1 && col<=tamanioTablero&&juego.ExistenEspaciosDisponiblesEnCol(col))break;
            if(col==0)break;
        }

        if(col==0)break;
        juego.IngresarFicha('O',col);
        system("cls");
        juego.MostrarTablero();
        if(juego.ExisteCuatroEnRaya('O'))
        {
            ganador='O';
            break;
        }
    }
    if(ganador=='E')
    {
        cout<<"---EMPATE---"<<endl;
    }
    else
    {
        cout<<"Gano : "<<ganador<<endl;
    }
    */










    /*CArray<double> a(5);
    a[0]=8;
    a[1]=4;
    a[2]=8;
    a[3]=4;
    a[4]=9;
    a[5]=-1;
    for(int i=0;i<=5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    //CArray< CArray<int> * > b(3);
    //b[0] = CArray<int>
    CArray2Dim<double> b;
    b.CrearMatriz(3,3);
    b.RellenarArray(1.1);
    b(0,0)=1;
    b(0,1)=2;
    b(1,0)=3;
    b(1,1)=4;
    b(3,3)=-1;

    for(int i=0;i<b.NroFilas();i++)
    {
        for(int j=0;j<b.NroCols();j++)
        {
            cout<<b(i,j)<<"\t";
        }
        cout<<endl;

    }
    cout<<endl;
    CArray2Dim<char> c;
    c.CrearMatriz(3,5);
    c.RellenarArray('.');
    c(0,0)='a';
    c(0,1)='b';
    c(1,0)='c';
    c(1,1)='d';
    c(3,3)='f';

    for(int i=0;i<c.NroFilas();i++)
    {
        for(int j=0;j<c.NroCols();j++)
        {
            cout<<c(i,j)<<"\t";
        }
        cout<<endl;

    }
    */

    return 0;
}
