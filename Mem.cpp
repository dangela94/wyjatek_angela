#include "Mem.h"
#include "ObiektMiotajacy.h"

Mem::Mem ( ObiektMiotajacy * ptr )  : wsk(ptr) {}

Mem::~Mem(){ delete wsk ; }
