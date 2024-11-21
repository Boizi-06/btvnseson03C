#include <stdio.h>
int main (){
	
	float diem_toan,diem_van,diem_anh,diem_tb,diem_t;

	printf("moi ban nhap diem van");
	scanf("%f",&diem_van);
	
    printf("moi ban nhap diem toan");
	scanf("%f",&diem_toan);
	
    printf("moi ban nhap diem anh");
	scanf("%f",&diem_anh);  
	
	diem_t = diem_toan + diem_van + diem_anh;
	
	diem_tb = diem_t / 3;
	
	printf("diem tong cua ban la %.2f\n",diem_t);
	
	printf("diem trung binh mon cua ban la %.2f\n",diem_tb);
	
    if(diem_tb<=8){
    printf("diem so cua ban chua duoc tot hay co gang hon\n");
    	
    	
	}
	else{
		printf("ban hoc rat gioi\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	
}
