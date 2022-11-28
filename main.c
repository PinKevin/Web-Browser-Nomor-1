/***********************************/
/* Program   : main.c */
/* Deskripsi : Aplikasi browser */
/* NIM/Nama  : 24060121120012/Emerio Kevin Aryaputra
               24060121140160/Arya Dheffan Shevchenko
*/
/* Tanggal   : 27 November 2022 */
/***********************************/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "list_double_pointer.h"
#include "browser.h"

int main() {
    // kamus utama
    List A;
    address M, N;
    boolean on;
    char *web;
    char pred;
    int i;
    size_t malloc_size;

    // algoritma
    on = true;
    i = 0;
    malloc_size = 100;

    CreateList(&A);

    while (on){
        system("cls");
        MenuPage();
        PrintInfo(A);
        printf("\nMasukkan perintah: ");
        scanf(" %c", &pred);
        switch (pred){
            case 'a':
                web = malloc(malloc_size*sizeof(char));
                printf("Masukkan nama situs: ");
                scanf("%s", web);
                M = Alokasi(web);
                InsertFirst(&A, M);
                break;
            case 'b':
                web = malloc(malloc_size*sizeof(char));
                printf("Masukkan nama situs: ");
                scanf("%s", web);
                M = Alokasi(web);
                InsertLast(&A, M);
                break;
            case 'd':
                DelFirst(&A);
                break;
            case 'e':
                DelLast(&A);
                break;
            case 'f':
                if (NbElmt(A) > 1) {
                    DelAfter(&A);
                } else {
                    printf("Hanya dapat digunakan jika terdapat dua tab atau lebih");
                    sleep(2);
                }
                break;
            case 'g':
                ToNextPage(&A);
                break;
            case 'h':
                ToPrevPage(&A);
                break;
            case 'l':
                on = false;
                printf("\nSampai jumpa lagi!");
                break;
            default:
                printf("Perintah tidak dikenali\n");
                sleep(2);
                break;
        }
    }

    printf("\n");
    return 0;
}

