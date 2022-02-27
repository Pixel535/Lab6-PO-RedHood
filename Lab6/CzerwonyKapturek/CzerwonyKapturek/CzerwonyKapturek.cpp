#include <iostream>
#include "Babcia.h"
#include "Kapturek.h"
#include "Mama.h"
#include "Narrator.h"
#include "Gajowy.h"
#include "Wilk.h"
#include "Postac.h"

int main()
{
    Narrator n;
    Mama m;
    Babcia b;
    Gajowy g;
    Wilk w;
    Kapturek k;

    
    n.przedstawia(1);
    m.wrecza();
    m.wyslala();
    m.przestrzega();
    k.wyrusza(1);
    k.zbacza();
    k.zbiera();
    n.przedstawia(2);
    w.spotyka();
    k.odpowiada(1);
    w.pyta(1);
    

    k.odpowiada(2);
    w.obmysla();
    w.pyta(2);
    k.przedstawia(1);
    w.wyrusza(1);
    k.wyrusza(2);
    w.dochodzi();
    w.puka();
    b.pyta();
    w.oszukuje(1);
    

    b.zaprasza();
    w.wchodzi();
    w.polyka(1);
    k.dochodzi();
    k.widzi();
    k.pyta(1);
    w.oszukuje(2);
    k.pyta(2);
    w.oszukuje(3);
    k.pyta(3);
    w.oszukuje(4);
    k.pyta(4);
    w.oszukuje(5);
    

    w.polyka(2);
    w.zasypia();
    w.chrapie();
    n.przedstawia(3);
    g.slyszy();
    g.zaglada();
    g.widzi();
    g.budzi();
    g.chce_strzelic();
    g.stwierdza();
    g.wyjmuje(1);
    g.rozcina();
    b.wyskakuje();
    

    g.wyjmuje(2);
    g.zaszywa();
    w.budzi_sie();
    w.chce_uciec();
    w.umiera();
    g.czieszy_sie();
    b.cieszy_sie();
    k.postanawia();
    n.konczy();

    return 0;
}

