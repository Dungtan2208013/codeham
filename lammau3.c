#include<stdio.h>
/*khai bao ham*/

 int add(int num1,int num2);
 int ad(int num1,int num2);
 int ab(int num1,int num2);
 float ac(int num1,int num2);
 
 int main(){
  do {
    int a,b;
	char nhap;
    printf("nhap phep tinh(+,-,*,/)\n");
    fflush(stdin);
    scanf("%c",&nhap);
    printf("nhap 2 so:\n\n");
    scanf("%d %d", &a,&b);
  switch(nhap)
  {
  	case '+':	
  		printf("ket qua la= %d\n",add(a,b));
  		break;
  	case '-':
  		printf("ket qua la= %d\n",ad(a,b));
	    break;
	case '*':	
	      printf("ket qua la %d\n",ab(a,b));
	    break;
	case '/':
		printf("ket qua la %d\n",ac(a,b));
		break;
	default:
		printf("loi loi loi nhap lai de:\n");
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
