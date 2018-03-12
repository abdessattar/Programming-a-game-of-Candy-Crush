#include <SDL/SDL.h>
#include <SDL_image.h>
#include "niveau.h"

//#include"jouer.h"
void niveau_3(SDL_Surface *ecran)
{
    SDL_Surface *niv_3=NULL, *grille_5X5=NULL;
    SDL_Rect position_niv_3,pos_grille;
    position_niv_3.x=0;
    position_niv_3.y=0;
    pos_grille.x=350;
    pos_grille.y=15;

    //chargement de l'arriere plan+grille
    niv_3= IMG_Load("niv_3.png");
    grille_5X5=IMG_Load("grille_5X5.bmp");
    //afficher niveau1
    SDL_SetAlpha(grille_5X5, SDL_SRCALPHA, 128);
    SDL_BlitSurface(niv_3,NULL,ecran,&position_niv_3);
    SDL_BlitSurface(grille_5X5,NULL,ecran,&pos_grille);
    //bouton retour
    SDL_Surface  *return_button;
    SDL_Rect pos_return;
    pos_return.x=20;
    pos_return.y=30;
    return_button=IMG_Load("return_button.bmp");
    SDL_SetColorKey(return_button, SDL_SRCCOLORKEY, SDL_MapRGB(return_button->format, 0, 0, 255));
    SDL_BlitSurface(return_button,NULL,ecran,&pos_return);
}