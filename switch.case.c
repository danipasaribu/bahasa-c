#include<stdio.h>
int main()
{
int pil, alas, tinggi, luas, p, l, luas_pp;

printf(" ***** MENU ***** \n");
printf("\n 1. Menghitung luas segitiga");
printf("\n 2. Menghitung luas Persegi panjang ");
printf("\n 3. Keluar ");
printf("\n Masukkan pilihan anda (1...3) : ");
scanf("%d", &pil);
switch (pil)
{
case 1:
printf("\n Masukkan Alas :");
scanf("%d", &alas);
printf("\n Masukkan tinggi : ");
scanf("%d", &tinggi);
luas = .5*alas*tinggi;
printf("\n Luas segitiga tersebut adalah : %d", luas);
break;
case 2:
printf("\n Masukkan Panjang : ");
scanf("%d", &p);
printf("\n Masukkan Lebar : ");
scanf("%d", &l);
luas_pp = p*l;
printf("\n Luas Persegi panjang tersebut adalah : %d", luas_pp);
break;
case 3:
break;
default :
printf("\n Pilihan tidak tersedia, pilihan yang tersedia 1,2,3");
}
}
