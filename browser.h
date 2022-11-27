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
/* Menyetel situs aktif */

void SetOff (address *P);
/* Menyetel situs nonaktif */

void SetOffAll (List *L);
/* Menyetel semua situs nonaktif */

void ToNextPage (List *L);
/* Berpindah ke halaman selanjutnya */

void ToPrevPage (List *L);
/* Berpindah ke halaman sebelumnya */

#endif // browser_H
