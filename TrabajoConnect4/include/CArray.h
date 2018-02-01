#ifndef CARRAY_H
#define CARRAY_H

template<class T>

class CArray
{
    T *p;
    int tam;
    public:

        CArray(int n)
        {
            p=new T[n];
            tam=n;
        }
        T& operator[](int indice)
        {
            if(indice<0||indice>=tam)
                {
                    indice=0;
            }
            return p[indice];

        }
        virtual ~CArray()
        {
            delete p;
        }
    protected:
    private:
};

#endif // CARRAY_H
