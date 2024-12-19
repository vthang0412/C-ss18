#include<stdio.h>
#include<string.h>
struct SinhVien{
	char name[100];
	int age;
	char phoneNumber[100];
	
};
int main (){
    struct SinhVien s[5];
    printf("Nhap thong tin 5 sinh vien:\n");
    for(int i=0;i<5;i++){
    	printf("Nhap ho va ten: ");
    	fgets(s[i].name,sizeof(s[i].name),stdin);
    	printf("Nhap tuoi: ");
    	scanf("%d",&s[i].age);
    	fflush(stdin);
    	printf("Nhap so dien thoai: ");
    	scanf("%s",&s[i].phoneNumber);
    	fflush(stdin); 
	}
	printf("\n");
	printf("Thong tin cua 5 sinh vien la:\n");
	for(int i=0;i<5;i++){
		printf("Sinh vien thu %d:\n",i+1);
		printf("Ho va ten: :%s\n",s[i].name);
		printf("Tuoi :%d\n",s[i].age);
		printf("So dien thoai :%s\n",s[i].phoneNumber);
	}
	return 0;
}
