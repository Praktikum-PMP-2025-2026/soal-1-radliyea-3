/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 4 - Dynamic Structures
 *   Hari dan Tanggal    : Selasa, 5 Mei 2026
 *   Nama (NIM)          : Amelia Rahma Nurradliyah 13224020
 *   Nama File           : soal1.c
 *   Deskripsi           : Program untuk menentukan ritual penyegelan simbol kurung dalam string itu valid ketika huruf diabaikan
 * //analogi masalah soal 1 ritual penyegelan
 -campuran hurug kecil dan simbol kurung.
-huruf biasa adalah isi teks sedangkan simbol kurung menentukan segel dianggap sah atau cacat
-peneliti ingin memeriksa validitas segel secara otomatis
TUGAS ANDA
menentukan apakah struktur simbol kurung dalam string itu valid ketika huruf diabaikan
noted; gunakan ()[]{} aja, huruf diabaikan, kurung harus berpasangan dan terttutup, jka ad akarakter penutup yang tidak punya psangan, string tidak valid
*/

#include <stdio.h>
int main(){
    char a[10]; //input string
    scanf("%s",a);
    char stack[10];
    int top = -1; 
    for(int i = 0; a[i] != '\0'; i++){ //loop tiap karakter
        if(a[i] == '(' || a[i] == '['|| a[i] == '{'){ //masukin stack aja
            top++;
            stack[top] = a[i];
        }
        else if(a[i] == ')' || a[i] == ']' || a[i] == '}'){
            if(top == -1){
                printf("INVALID\n");
                return 0;
            }
            //pasangin cocok apa ga
            if(a[i] == ')' && stack[top] != '('){ //yang () dulu ya
                printf("INVALID\n");
                return 0;
            }
            if(a[i] == ']' && stack[top] != '['){ //yang {} 
                printf("INVALID\n");
                return 0;
            }
            if(a[i] == '}' && stack[top] != '{'){ //terakhir []
                printf("INVALID\n");
                return 0;
            }
        }
        top --; //kalo cocok pop in
        //ada huruf skip aja
    }
    if(top != -1){
        printf("INVALID\n");
    }else{
        printf("VALID\n");
    }
    return 0;
}

