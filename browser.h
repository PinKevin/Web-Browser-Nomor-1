#ifndef browser_H
#define browser_H
/***********************************/
/* Program   : browser.h */
/* Deskripsi : Modul untuk browser */
/* NIM/Nama  : 24060121120012/Emerio Kevin Aryaputra
               24060121140160/Arya Dheffan Shevchenko
*/
/* Tanggal   : 27 November 2022 */
/***********************************/
#include <stdio.h>
#include <stdlib.h>
#include "list_double_pointer.h"


void SetOn (address *P);
/* I.S. : P terdefinisi
   F.S. : situs address P disetel menjadi aktif*/

void SetOff (address *P);
/* I.S. : P terdefinisi
   F.S. : situs address P disetel menjadi nonaktif*/

void SetOffAll (List *L);
/* I.S. : List tidak kosong
   F.S. : semua situs disetel menjadi nonaktif*/

void ToNextPage (List *L);
/* I.S. : List tidak kosong
   F.S. : berpindah ke halaman selanjutnya*/

void ToPrevPage (List *L);
/* I.S. : List tidak kosong
   F.S. : berpindah ke halaman sebelumnya*/

void MenuPage();
/* I.S. : Tidak terdefinisi 
   F.S. : Tampilan menu opsi yang bisa dilakukan dalam program*/

#endif // browser_H
