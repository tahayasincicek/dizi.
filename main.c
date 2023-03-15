#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int enkucuk(int dizi[], int esayisi){
	
	int k,gecicidegisken = dizi[0];
	
	for(k=1;k<esayisi;k++){      /*1*/
		
		if(gecicidegisken>dizi[k]){     /*2*/  
			
			gecicidegisken=dizi[k];     /*3*/  
		}
	}
	return gecici;             /*4*/
}


/* *1* 1+(n+1)+n   1.satýr döngü olduðu için ortadaki iþlem n+1 kadar tekrar eder.1.iþlem sadece deðer atama iþlemi olduðu için 1 kere tekrar eder. 
				    3.iþlem ise sonuncu döngü sýrasý n olduðu için n kere tekrar eder
				    
   *2* 1           2.satýrda 1 iþlem yapýlmýþtýr ve 1 kere tekrarlanmýþýtr.
   *3* 1           3.satýrda 1 iþlem yapýlmýþtýr ve 1 kere tekrarlanmýþýtr.   
   *4* 1           4.satýrda 1 iþlem yapýlmýþtýr ve 1 kere tekrarlanmýþýtr.
   T(n) = 2n+5     Bütün sonuçlar toplandýðýnda 2n+5 cevabý çýkar.
   
   */   

