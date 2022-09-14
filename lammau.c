#include<stdio.h>
/*khai bao ham*/

 int add(int num1,int num2);
 int ad(int num1,int num2);
 int ab(int num1,int num2);
 float ac(int num1,int num2);
 
 int main(){
  
  int a,b;
  printf("nhap a:\n"); scanf("%d",&a);
  printf("nhap b:\n"); scanf("%d",&b);
do {
	  int choice;
  printf("menu:\n");
  printf("1.tinh sum:\n");
  printf("2.tinh hieu:\n");
  printf("3.tinh tich:\n");
  printf("4.thinh thuong:\n");
  printf("moi ban chon:\n");
  scanf("%d",&choice);


  switch(choice)
  {
  	case 1:	
  		printf("ket qua la= %d\n",add(a,b));
  		break;
  	case 2:
  		printf("ket qua la= %d\n",ad(a,b));
	    break;
	case 3:	
	      printf("ket qua la %d\n",ab(a,b));
	    break;
	case 4:
		printf("ket qua la %f\n",ac(a,b));
		break;
	default:
		printf("loi loi loi:\n");
  }
  } while(1);
  return 0;
}

int add(int num1, int num2)
{
	int sum;
	sum = num1 + num2;	
	return sum;
}
int ad(int num1,int num2){
	int hieu;
	hieu = num1 -num2;
	return hieu;
}
int ab(int num1,int num2){
	int tich;
	tich = num1 *num2;
	return tich;
}
float ac(int num1,int num2){
	float thuong;
	thuong = (float)num1 /num2;
	return thuong;	
}


