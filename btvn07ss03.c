#include <stdio.h>
int main(){
	int sum,number;
	printf("moi ban nhap mot so nguyen duong co 4 chu so");
    scanf("%f",&number);
    sum += number % 10; // L?y ch? s? cu?i cùng
    number /= 10; // B? ch? s? cu?i cùng

    // += number % 10; // L?y ch? s? k? ti?p
   // number /= 10;

    ///sum += number % 10; // L?y ch? s? k? ti?p
    //number /= 10;

    //sum += number % 10; // L?y ch? s? d?u tiên
   // number /= 10;

    // In t?ng các ch? s?
    printf("T?ng các ch? s? là: %d\n", sum);  
    
    
    
    
    
    //num2=ngin*1000;
    //sohangtram=num1-num2;
    //tram=sohangtram/100;
    //num3=tram*100;
    //sohangchuc=sohangtram-num3;
    
    //chuc=sohangchuc/10;
    //donvi=sohangchuc-chuc*10;
    //tong=ngin+chuc+tram+donvi;
    
    
    
    
    
    
	
	
	return 0;
}
