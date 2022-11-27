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
#include "browser.c"
#include "boolean.h"
#include "list_double_pointer.c"

int main() {
    // kamus utama
    List A;
    address M, U;
    infotype E;
    boolean on = true;
    char *web[100];
    char pred;
    int i = 0;
    size_t malloc_size = 100;

    // algoritma
    CreateList(&A);
    

    printf("=============Selamat datang di Web Kecil-Kecilan=============\n");
    printf("Command tersedia: \n");
    printf("A : Insert First\n");
    printf("B : Insert Last\n");
    printf("C : Insert After\n");
    printf("D : Delete First\n");
    printf("E : Delete Last\n");
    printf("F : Delete After\n");
    printf("G : Next Page\n");
    printf("H : Previous Page\n");
    printf("L : STOP\n");
    while (on){
        printf("Masukkan perintah: ");
        scanf(" %c", &pred);
        switch (pred){
            case 'A':
                web[i] = malloc(malloc_size * sizeof(char));
                printf("Masukkan nama situs: ");
                scanf("%s", web[i]);
                E = web[i];
                M = Alokasi(E);
                if(i == 0){
                    SetOn(&M);
                }
                InsertFirst(&A, M);
                i++;
                PrintInfo(A);
                break;
            case 'B':
                web[i] = malloc(malloc_size * sizeof(char));
                printf("Masukkan nama situs: ");
                scanf("%s", web[i]);
                E = web[i];
                M = Alokasi(E);
                if(i == 0){
                    SetOn(&M);
                }
                InsertLast(&A, M);
                i++;
                PrintInfo(A);
                break;
            case 'L':
                on = false;
                break;
            default:
                printf("Perintah tidak dikenali\n");
                break;
        }
    }
//    printf("\n\n========== ListEmpty =========");
//    printf("\nApakah list A kosong?");
//    if (ListEmpty(A)) {
//        printf(" Ya");
//    } else {
//        printf(" Tidak");
//    }

//    printf("\n\n========== NbElmt =========");
//    printf("\nJumlah elemen pada list A = %d", NbElmt(A));
    printf("============Kondisi Awal============\n");
    PrintInfo(A);
    printf("\n\n========== ToNextPage =========\n");
    ToNextPage(&A);
    PrintInfo(A);

    ToNextPage(&A);
    PrintInfo(A);

    printf("\n\n========== ToPrevPage =========\n");
    ToPrevPage(&A);
    PrintInfo(A);

    ToPrevPage(&A);
    PrintInfo(A);

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
    // printf("\n\n========== InsertAfter =========");
    // E = 'google';
    // InsertAfter(&A, Alokasi('tiktok'), Search(A, E));
    // PrintInfo(A);
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
