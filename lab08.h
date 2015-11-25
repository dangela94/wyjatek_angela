#pragma once

#include "typy.h"
 #include "ObiektMiotajacy.h"
#include "Przetworz.h"
#include "Mem.h"

void Przetworz1 ( typ2 * wsk)
{
	std::cout<<"Przetworz1 - wyjatek typu 2 o adresie: "<<wsk<<std::endl;
	throw static_cast<typ4*>(wsk);
}

void Przetworz1 ( typ1 * wsk)
{
	std::cout<<"Przetworz1 - wyjatek typu 1 o adresie typ1: "<<wsk<<std::endl;
	throw;
}

