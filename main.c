/***********************************/
/* Program   : main.c */
/* Deskripsi : Aplikasi list double pointer */
/* NIM/Nama  : 24060121120012/Emerio Kevin Aryaputra
               24060121140160/Arya Dheffan Shevchenko
*/
/* Tanggal   : 27 November 2022 */
/***********************************/
#include <stdio.h>
#include "list_double_pointer.h"

int main() {
    // kamus utama
    List A;
    address M, U;
    infotype E;

    // algoritma
    M = Alokasi(4);
    printf("M = Alokasi(4)");
    printf("\nAlamat = %d", M);

    printf("\n\n========== CreateList =========\n");
    CreateList(&A);
    printf("CreateList(&A)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

//    printf("\n\n========== ListEmpty =========");
//    printf("\nApakah list A kosong?");
//    if (ListEmpty(A)) {
//        printf(" Ya");
//    } else {
//        printf(" Tidak");
//    }

//    printf("\n\n========== NbElmt =========");
//    printf("\nJumlah elemen pada list A = %d", NbElmt(A));

    printf("\n\n========== InsertFirst =========");
    InsertFirst(&A, M);
    InsertFirst(&A, Alokasi(3));
    InsertFirst(&A, Alokasi(2));
    printf("\nInsertFirst(&A, M)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

    printf("\n\n========== ToNextPage =========");
    ToNextPage(&A);
    printf("\nToNextPage(&A)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

    ToNextPage(&A);
    printf("\n\nToNextPage(&A)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

    printf("\n\n========== ToPrevPage =========");
    ToPrevPage(&A);
    printf("\nToPrevPage(&A)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

    ToPrevPage(&A);
    printf("\n\nToPrevPage(&A)");
    printf("\nPrintInfo(A)\n");
    PrintInfo(A);
    printf("end PrintInfo(A)");

//    printf("\n\n========== InsertLast =========");
//    InsertLast(&A, Alokasi(6));
//    InsertLast(&A, Alokasi(61));
//    InsertLast(&A, Alokasi(38));
//    InsertLast(&A, Alokasi(2));
//    printf("\nInsertLast(&A, Alokasi(6))");
//    printf("\nInsertLast(&A, Alokasi(61))");
//    printf("\nInsertLast(&A, Alokasi(38))");
//    printf("\nInsertLast(&A, Alokasi(2))");
//    printf("\nPrintInfo(A)\n");
//    PrintInfo(A);
//    printf("end PrintInfo(A)");
//
//    printf("\n\n========== InsertAfter =========");
//    InsertAfter(&A, Alokasi(7), M);
//    InsertAfter(&A, Alokasi(745), M);
//    InsertAfter(&A, Alokasi(91), M);
//    printf("\nInsertAfter(&A, Alokasi(7), M)");
//    printf("\nInsertAfter(&A, Alokasi(745), M)");
//    printf("\nInsertAfter(&A, Alokasi(91), M)");
//    printf("\nPrintInfo(A)\n");
//    PrintInfo(A);
//    printf("end PrintInfo(A)");

//    printf("\n\n========== DelAfter =========");
//    DelAfter(&A, &U, M);
//    printf("\nDelAfter(&A, &U, M)");
//    printf("\nPrintInfo(A)\n");
//    PrintInfo(A);
//    printf("end PrintInfo(A)");
//    printf("\nAlamat = %d", U);
//
//    printf("\n\n========== DelFirst =========");
//    DelFirst(&A, &U);
//    printf("\nDelFirst(&A, &U)");
//    printf("\nPrintInfo(A)\n");
//    PrintInfo(A);
//    printf("end PrintInfo(A)");
//    printf("\nAlamat = %d", U);
//
//    printf("\n\n========== DelLast =========");
//    DelLast(&A, &U);
//    printf("\nDelLast(&A, &U)");
//    printf("\nPrintInfo(A)\n");
//    PrintInfo(A);
//    printf("end PrintInfo(A)");
//    printf("\nAlamat = %d", U);

//    printf("\nBanyak elemen pada list A = %d", NbElmt(A));

    printf("\n");
    return 0;
}
