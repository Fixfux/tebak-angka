#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int angka, randomnumber;

void acak(){
	randomnumber = rand() % 11;
}

main(){
	printf("MAIN TEBAK ANGKA!!!!\n masukan angka 1-10:");
	scanf("%d", &angka);
	acak();
	
	if(angka == randomnumber){
		printf("Selamat anda berhasil menebak angka nya yaitu: %d", randomnumber);
	}else if (angka > randomnumber){
		printf("Angka yang anda masukan lebih \n GAMEOVER angka nya adalah %d", randomnumber);
	}else if(angka < randomnumber){
		printf("Angka yang anda masukan kurang\n GAMEOVER angka nya adalah %d", randomnumber);
	}
	
	getch();
	return 0;
}
