#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d",&m);
	int numbers[n][m];
	int sumNumbers;
	int mulNumbers;
	int currentIndex=0;
	do{
		printf("1. Nhap gia tri cac phan tu cua mang:\n");
		printf("2. In gia tri cac phan tu theo ma tran:\n");
		printf("3. Tinh so luong cac phan tu chia het cho 2 va 3 trong mang:\n");
		printf("4. In cac phan tu va tong cac phan tu nam tren duong bien duong cheo chinh va duong cheo phu:\n");
		printf("5. su dung thuat toan sap xep lua chon sap xep cac phan tu tang dan theo cot cua cua mang:\n");
		printf("6. In ra cac phan tu la so nguyen to trong mang:\n");
		printf("7. su dung thuat toan noi bot sap xep cac phan tu tren duong cheo chinh cua mang giam dan:\n");
		printf("8. nhap gia tri mot mang 1 chieu gom m phan tu va chi so dong muon chen vao mang, thuc hien chen vao mang 2 chieu:\n");
		printf("9. Thoat\n");
		printf("nhap lua chon cua ban\n");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("%d\t",numbers[i][j]);
					}
					printf("\n");
				}
				printf("\n");
				break;
			case 3:
				sumNumbers=0;
				printf("Cac phan tu le trong mang la:\n");
				for(int i=0;i<n;i++){	
				for(int j=0;j<m;j++){
						if(numbers[i][j]%2!=0){
							printf("%d\t",numbers[i][j]);
							sumNumbers+=numbers[i][j];
						}
					}
				}
				printf("\nTong cac phan tu le trong mang: %d\n",sumNumbers);
				break;
			case 4:
				mulNumbers = 1;
				printf("Cac phan tu nam tren duong bien:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(i==0 || i==n-1 || j ==0 || j == m-1){
							printf("%d\t",numbers[i][j]);
						}
					}
				}
				if(n==m){
					sumNumbers = 0;
					printf("Cac phan tu nam tren duong cheo chinh:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i==j){
								printf("%d\t",numbers[i][j]);
								sumNumbers+=numbers[i][j];
							}
						}
					}
					printf("\nTong cac phan tu tren cheo chinh: %d\n",sumNumbers);
					sumNumbers=0;
					printf("Cac phan tu nam tren duong cheo phu:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i+j==n-1){
								printf("%d\t",numbers[i][j]);
								sumNumbers+=numbers[i][j];
							}
						}
					}
					printf("\nTong cac phan tu tren cheo phu: %d\n",sumNumbers);
				}else{
					printf("Day khong phai ma tran vuong, khong co cheo chinh va cheo phu\n");
				}
				break;
			case 5:
				break;
			case 6:
			    printf("Cac so nguyen to trong mang:\n");
			    for(int i=0;i<n;i++){
			    	for(int j=0;j<m;j++){
			        int isPrime = 0;
			        if(numbers[i][j]>=2){
			          	for(int k=2;k<=sqrt(numbers[i][j]);k++){
			        		if(numbers[i][j]%k==0){
			           		isPrime = 1;
			        break;
			           		}
			        	}
			        }else{
			          isPrime=1;
			        }
			        if(isPrime==0){
			        	printf("%d\t",numbers[i][j]);
			        }
			    	}
			    }
			    printf("\n");
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				exit(0);	
			default:
				printf("vui long nhap tu 1-9");
		}
	}while(1==1);
}
