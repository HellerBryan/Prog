/*
 * CContainer.h
 *
 *  Created on: 30 juin 2020
 *      Author: eleve
 */

#ifndef CCONTAINER_H_
#define CCONTAINER_H_

class CContainer{
		/**********************CNode component section********************/
		class CNode{
		public:
		};
/**********************CContainer component section********************/
public:
		typedef void*(*t_ptfVV)(void*,void*);

private:
public:
	CContainer();
	~CContainer();

	void* Pushback (void*pElem);
	int Card() const;

	void* Parse(t_ptfVV pParseFunc, void*pParam);


};


#endif /* CCONTAINER_H_ */
