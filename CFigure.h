/*
 * CFigure.h
 *
 *  Created on: 29 juin 2020
 *      Author: eleve
 */

#ifndef CFIGURE_H_
#define CFIGURE_H_

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class CFigure {

private: // déclaration des attributs statiques
	static SDL_Renderer * 	c_pRenderer;
protected:
	static SDL_Rect			c_gameArea;



protected: //pour pouvoir être hérité par les classes filles (classes dérivés)
	SDL_Rect        m_frame;
	SDL_Point		m_hotPointRatio;
	SDL_Point		m_speed;



public:
	CFigure(); // Constructeur par défaut (aucun paramètre)
	CFigure(
		int iLocX,
		int iLocY,
		int iWidth,
		int iHeight,
		int iHotRatioX,
		int iHotRatioY,
		int ispeedX,
		int ispeedY
	); // Constructeur surcharge

	~CFigure();

	int Move();
	int Move(int iX, int iY);			//méthode surchargé
	void Draw(SDL_Texture*pTexture) const;					// méthode constante

public: // déclaration des méthodes statiques
	static void InitGraphic(SDL_Renderer*pRenderer, SDL_Rect*pGameArea){
		c_pRenderer = pRenderer;
		SDL_memcpy(&c_gameArea, pGameArea, sizeof(SDL_Rect));
	}
};
#endif /* CFIGURE_H_ */

