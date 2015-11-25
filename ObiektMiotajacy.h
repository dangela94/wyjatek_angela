#pragma once 
#include "typy.h"
#include "Mem.h"
class ObiektMiotajacy
{
	public: 
	ObiektMiotajacy () {}
	void Rzuc () {
		Mem(this);
		throw new typ2() ;
	}


};
