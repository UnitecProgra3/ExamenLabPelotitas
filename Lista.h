#ifndef LISTA_H
#define LISTA_H
#include "Pelotita.h"

class Lista
{
    public:
        Pelotita*inicio;
        Lista();
        virtual ~Lista();

        void imprimirTodos(SDL_Surface*screen);
        void moverTodos();
        void agregar(Pelotita*pelotita);
        void borrarSiSalio();
        void detectarClick(int x,int y);
        void borrar(int pos);
    protected:
    private:
};

#endif // LISTA_H
