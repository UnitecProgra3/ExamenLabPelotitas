#ifndef PELOTITA_H
#define PELOTITA_H
#include "SDL/SDL.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

class Pelotita
{
    public:
        int x,y;
        SDL_Surface*surface;
        int velocidad_x,velocidad_y;
        Pelotita*sig;
        bool en_pantalla;
        int width;
        int height;
        Pelotita(int x,int y,int velocidad_x,
          int velocidad_y,SDL_Surface*surface);
        virtual ~Pelotita();
        void moverse();
    protected:
    private:
};

#endif // PELOTITA_H
