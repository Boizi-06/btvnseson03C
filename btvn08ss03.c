#include <stdio.h>
int main(){
    int num1,ngin,tram,chuc,donvi,sohangtram,sohangchuc,tong;
	
	printf("nhap so nguyen co chu so");
	scanf("%d",&num1);
	ngin=num1/1000;
	sohangtram=num1-ngin*1000;
	tram=sohangtram/100;
	sohangchuc=sohangtram-tram*100;
	chuc=sohangchuc/10;
	donvi=sohangchuc-chuc*10;
	printf("so dao nguoc la %d%d%d%d\n",donvi,chuc,tram,ngin);
	
	
	
	
	
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	return 0;
}
