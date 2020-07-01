/*
 * CFigure.cpp
 *
 *  Created on: 29 juin 2020
 *      Author: eleve
 */

#include "CFigure.h"
#include <iostream>
using namespace std;

//Implémentation des attributs statiques: attributs de classe
SDL_Renderer * 	CFigure::c_pRenderer (nullptr);
SDL_Rect		CFigure::c_gameArea {0};

CFigure::CFigure()  :
	m_frame({0}),
	m_hotPointRatio({0}),
	m_speed({0})

{
	cout << "CFigure::CFigure()" << endl;
}
CFigure::CFigure(
		int iLocX,
		int iLocY,
		int iWidth,
		int iHeight,
		int iHotRatioX,
		int iHotRatioY,
		int ispeedX,
		int ispeedY
) :
	m_frame({iLocX, iLocY, iWidth, iHeight}),
	m_hotPointRatio({iHotRatioX, iHotRatioY}),
	m_speed({ispeedX, ispeedY})
{}

CFigure::~CFigure() {
	cout << "~CFigure::~CFigure()" << endl;
}
int CFigure::Move(){
	m_frame.x += m_speed.x;
	m_frame.y += m_speed.y;
	return 0;
}

int CFigure::Move(int iLocX, int iLocY){
	m_frame.x = iLocX;
	m_frame.y = iLocY;
	return 0;
}

void CFigure::Draw(SDL_Texture*pTexture) const {
	SDL_SetTextureBlendMode(pTexture, SDL_BLENDMODE_ADD);
	SDL_RenderCopy(c_pRenderer, pTexture, nullptr, &m_frame);
}








