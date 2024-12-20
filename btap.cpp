#include <stdio.h>
#include<string.h>
struct Dish{
	int id;
	char name[100];
	double price;
};
int main(){
	int choice;
	int n=5;
	struct Dish menu[100]={
		{1,"Com rang",39999},
		{2,"Nuoc ngot",14999},
		{3,"Banh mi pate",21999},
		{4,"Mi xao",10999},
		{5,"Do an vat",4999},
	};
	while(1){
		printf("\n \t MENU \n");
		printf("\n1.In ra gia tri cac phan tu trong menu mon an theo dang");
		printf("\n2.Them mot phan tu vao vi tri cuoi cung");
		printf("\n3.Sua mot phan tu o vi tri cuoi cung");
		printf("\n4.Xoa mot phan tu o vi tri cuoi cung");
		printf("\n5.Sap xep cac phan tu");
		printf("\n	a.Giam dan theo price");
		printf("\n	b.Tang dan theo price");
		printf("\n6.Tim kiem phan tu theo name nhap vao");
		printf("\n	a.Tim kiem tuyen tinh");
		printf("\n	b.Tim kiem nhi phan");
		printf("\n7.Thoat.");
		printf("\nNhap lua chon cua ban:");
		scanf("%d",&choice);
		fflush(stdin);
		switch(choice){
			case 1:{
				printf("Phan tu co trong menu mon an:\n");
				for(int i=0 ;i < n;i++){	
					printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
				}
				break;
				}
			case 2:{
				menu[n].id=n+1;
				printf("Nhap vao ten mon moi: ");
				fgets(menu[n].name,sizeof(menu[n].name),stdin);
				menu[n].name[strlen(menu[n].name)-1]='\0';
				printf("Nhap vao gia tien mon moi: ");
				scanf("%lf",&menu[n].price);
				fflush(stdin);
				n++;
					printf("Mon an sau khi them : \n");
				for(int i=0 ;i < n;i++){
					printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
				}
				break;
				}
			case 3:{
				int vitri;
				printf("Nhap vi tri muon sua mon an va gia tien:");
				scanf("%d",&vitri);
				if (vitri <=0 || vitri >n){
					printf("Vi tri mon can sua khong co trong menu");
				}
				fflush(stdin);
				menu[n].id=n+1;
				for(int i=0;i<n;i++){
					printf("Nhap vao mon an muon sua: ");
					fgets(menu[vitri-1].name,sizeof(menu[vitri-1].name),stdin);
					menu[vitri-1].name[strlen(menu[vitri-1].name)-1]='\0';
					printf("Nhap vao gia tien muon sua: ");
					scanf("%lf",&menu[vitri-1].price);
					fflush(stdin);
					break;
				}
				printf("Menu mon an sau khi thay doi la: \n");
				for(int i=0 ;i < n;i++){
					printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
				}
				break;
				}
			case 4:{
			    printf("Menu sau khi xoa la: \n");
			    n--;
			    for(int i=0;i<n;i++){
				printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
				}
					break;
				}
			case 5:{
				for (int i=0 ; i < n-1 ; i++){
					for(int j=0; j< n-i-1 ; j++){
						if (menu[j].price >menu[j+1].price){
							struct Dish temp = menu[j];
							menu[j] = menu[j+1];
							menu[j+1]=temp; 
						}
					}
				} 
				printf("Menu sau khi sap xep la: \n");
				for(int i=0; i< n; i++){
				   	printf("%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
			    }
				break;
				} 
			case 6: {
			    char checkMenu[100];
			    printf("Nhap vao ten mon an muon tim kiem: ");
			    fgets(checkMenu, 100, stdin);
			    checkMenu[strlen(checkMenu) - 1] = '\0';  
			    int check = 0;
			    for (int i = 0; i < n; i++) {
			        if (strcmp(checkMenu, menu[i].name) == 0 ) {
			            check ++;
			            printf("Mon an tim kiem la :%d. %s: %.2lf\n",menu[i].id,menu[i].name,menu[i].price);
			        }
			    }
			    if (!check) {
			        printf("Mon an muon tim khong co trong menu!\n");
			    }
			    break;
				}
			case 7:{
				printf("Thoat menu");
				return 0;
				} 
			default :{
			printf("Vui long nhap lai\n");
			break;
			}
		}
	}while(choice!=7);
	return 0;
}
