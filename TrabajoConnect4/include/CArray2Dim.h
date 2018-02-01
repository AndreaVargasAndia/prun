#include <iostream>
#ifndef CARRAY2DIM_H
#define CARRAY2DIM_H

using namespace std;

template <class T>

class CArray2Dim
{

        //T vacia;
        T **p;
        int filas,cols ;
    public:
        CArray2Dim()
        {
            p=NULL;
            filas=0;
            cols=0;
        }
        void CrearMatriz(int f,int c)
        {
            EliminarArray();
            filas=f;
            cols=c;
            p=new T*[f];
            for(f=0;f<filas;f++)
            {
                p[f]=new T[cols];
            }
        }

        CArray2Dim(int f,int c)
        {
            CrearMatriz(f,c);
        }

        T& operator()(int f,int c)
        {
            static T vacia;
            if(f<0||f>=filas)
            {
                    return vacia;
            }
            if(c<0||c>=cols)
            {
                    return vacia;
            }
            return p[f][c];

        }

        virtual ~CArray2Dim()
        {
            EliminarArray();
        }
        void RellenarArray(T valor)
        {
             for(int i=0;i<filas;i++)
                {
                    for(int j=0;j<cols;j++)
                    {
                        p[i][j]=valor;
                    }
                }
        }
        int NroFilas()
        {
            return filas;
        }
        int NroCols()
        {
            return cols;
        }

    protected:
    private:
        void EliminarArray()
        {
            if(p!=NULL)
            {
            for(int f=0;f<filas;f++)
            {
                delete p[f];//elimiamos las columnas de cada fila

            }
            delete p;//eliminamos la filas

            }
        }
};

#endif // CARRAY2DIM_H
