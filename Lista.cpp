#include "Lista.h"

Lista::Lista()
{
    inicio=NULL;
}

Lista::~Lista()
{
    //dtor
}

void Lista::moverTodos()
{
    for(Pelotita*t=inicio;
        t!=NULL;
        t=t->sig)
        t->moverse();
}

void Lista::imprimirTodos(SDL_Surface*screen)
{
    for(Pelotita*t=inicio;
        t!=NULL;
        t=t->sig)
    {
        //Holds offsets
        SDL_Rect offset;

        //Get offsets
        offset.x = t->x;
        offset.y = t->y;

        //Blit
        SDL_BlitSurface( t->surface, NULL, screen, &offset );
    }
}

void Lista::agregar(Pelotita*pelotita)
{
    if(inicio==NULL)
    {
        inicio=pelotita;
    }else
    {
        Pelotita*t;
        for(t=inicio;
            t->sig!=NULL;
            t=t->sig)
        {
            //No hacer nada
        }
        t->sig=pelotita;
    }
}


void Lista::detectarClick(int x,int y)
{
    if(x == -1 || y == -1)
        return;
    int cont=0;
    for(Pelotita*t=inicio;
            t!=NULL;
            t=t->sig)
    {
        if(x >= t->x && x <= t->x+t->width
            && y >= t->y && y <= t->y+t->height)
        {
            borrar(cont);
            return;
        }

        cont++;
    }
}

void Lista::borrar(int pos)
{
    if(pos<0)
        return;

    if(pos==0)
    {
        Pelotita*t_inicio = inicio;
        inicio = inicio->sig;
        delete t_inicio;
    }else
    {
        Pelotita*t=inicio;
        for(int i=0;i<pos-1;i++)
        {
            t=t->sig;

            if(t==NULL)
                return;
        }

        Pelotita*t2=t->sig;
        t->sig=t2->sig;
        delete t2;
    }
}

