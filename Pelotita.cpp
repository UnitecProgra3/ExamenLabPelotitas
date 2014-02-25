#include "Pelotita.h"

Pelotita::Pelotita(int x,int y,int velocidad_x,int velocidad_y,SDL_Surface*surface)
{
    this->x=x;
    this->y=y;
    this->velocidad_x=velocidad_x;
    this->velocidad_y=velocidad_y;
    this->surface=surface;
    this->sig=NULL;
    this->width=surface->w;
    this->height=surface->h;
}

Pelotita::~Pelotita()
{
    //dtor
}

void Pelotita::moverse()
{
    this->x+=this->velocidad_x;
    this->y+=this->velocidad_y;

    if(y>SCREEN_WIDTH + 50
        || x>SCREEN_HEIGHT + 50
        || y < - 50
        || x < - 50)
    {
        en_pantalla=false;
    }else
    {
        en_pantalla=true;
    }
}
