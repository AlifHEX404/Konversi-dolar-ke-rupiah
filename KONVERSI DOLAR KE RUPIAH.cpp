#include <stdio.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()

{system ("color e");
    long rupiah,dollar,kurs;
    int jenis;
    char back;
printf("|====================================================================|\n");
printf("|========================= ALIF MUSTAFANAH ==========================|\n");
printf("|=========================== WELCOME TO =============================|\n");
printf("|================= PROGRAM KONVERSI DOLAR KE RUPIAH =================|\n");
printf("|====================================================================|\n");

   ATAS :
    printf("\n|====================================================================|\n");
    printf("\nPilih MENU : \n"); //Pilih konversi suhu
    printf("\n1. KONVERSI DOLAR KE RUPIAH\n");
    printf("2. EXIT\n");
    printf("\nSilahkan anda pilih : ");
    scanf("%d", &jenis);
    switch(jenis)
    {
case 1:
rupiah=15000,dollar,kurs;
printf("--------------------------");
printf("\nkonversi dollar ke rupiah\n");
printf("--------------------------\n");
printf("Masukkan nilai dollar $USD : ");scanf("%d", &dollar);
kurs=rupiah*dollar;
printf("\nkurs = %i * %i = Rp %i",dollar,rupiah,kurs);
 default:
    goto ATAS;
break;
   case 2:
printf("|====================================================================|\n");
printf("|=========================== TERIMAKASIH ============================|\n");
printf("|========================= ALIF MUSTAFANAH ==========================|\n");
printf("|====================== PRESS ENTER TO EXIT =========================|\n");
printf("|====================================================================|\n");

break;
return 0;
 }

}
