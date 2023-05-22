
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

Ulomek okrajšaj(Ulomek u) {
    int a = u.st;
    int b = u.im;
    int c;
    if(a == 0){
        u.im = 1;
        return u;
    }
    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }
    u.st /= a;
    u.im /= a;
    if(u.im < 0) {
        u.st *= -1;
        u.im *= -1;
    }
    return u;
}

Ulomek odštej(Ulomek u1, Ulomek u2) {
    Ulomek u = okrajšaj((Ulomek) { u1.st * u2.im - u2.st * u1.im, u1.im * u2.im });
    return u;
}

Ulomek zmnoži(Ulomek u1, Ulomek u2) {
    Ulomek u = okrajšaj((Ulomek) { u1.st * u2.st, u1.im * u2.im });
    return u;
}

Ulomek obrni(Ulomek u) {
    Ulomek u1 = okrajšaj((Ulomek) { u.im, u.st });
    return u1;
}

Ulomek seštej(Ulomek u1, Ulomek u2) {
    Ulomek u = okrajšaj((Ulomek) { u1.st * u2.im + u2.st * u1.im, u1.im * u2.im });
    return u;
}

Tocka projekcija(Tocka t, Premica p) {
    if (p.navpicna) {
        return (Tocka) { okrajšaj(p.n), okrajšaj(t.y) };
    }else{
        if(p.k.st == 0) return (Tocka) { okrajšaj(t.x), okrajšaj(p.n) };
        Ulomek koeficient = okrajšaj((Ulomek) { (p.k.im)*-1, p.k.st });
        Ulomek n1 = okrajšaj(p.n);
        Ulomek x = okrajšaj(t.x);
        Ulomek y = okrajšaj(t.y);
        Ulomek n2 = odštej(y, zmnoži(koeficient, x));
        Ulomek kordinatax = zmnoži(odštej(n2, n1), obrni(odštej(p.k, koeficient)));
        Ulomek kordinatay = seštej(n2, zmnoži(koeficient, kordinatax));
        return (Tocka) { kordinatax, kordinatay };
    }
}
#ifndef test
int main() {
    return 0;
}
#endif
