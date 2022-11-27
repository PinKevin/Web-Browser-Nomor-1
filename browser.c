#ifndef browser_C
#define browser_C
/***********************************/
/* Program   : browser.c */
/* Deskripsi : Realisasi untuk browser */
/* NIM/Nama  : 24060121120012/Emerio Kevin Aryaputra
               24060121140160/Arya Dheffan Shevchenko
*/
/* Tanggal   : 27 November 2022 */
/***********************************/
#include "browser.h"
#include <stdio.h>


void SetOn (address *P) {
/* Menyetel situs aktif */
    // kamus lokal

    // algoritma
        isOn(*P) = true;
}

void SetOff (address *P) {
/* Menyetel situs nonaktif */
    // kamus lokal

    // algoritma
        isOn(*P) = false;
}

void SetOffAll (List *L) {
/* Menyetel semua situs nonaktif */
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            do {
                SetOff(&P);
                P = next(P);
            } while (P != Nil);
        }
}

void ToNextPage (List *L) {
/* Berpindah ke halaman selanjutnya */
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            while (!isOn(P)) {
                P = next(P);
            }

            if (next(P) != Nil) {
                isOn(next(P)) = true;
                isOn(P) = false;
            }
        }
}

void ToPrevPage (List *L) {
/* Berpindah ke halaman sebelumnya */
    // kamus lokal
        address P;

    // algoritma
        if (!ListEmpty(*L)) {
            P = First(*L);
            while (!isOn(P)) {
                P = next(P);
            }

            if (prev(P) != Nil) {
                isOn(prev(P)) = true;
                isOn(P) = false;
            }
        }
}
#endif // browser_C
