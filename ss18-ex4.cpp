#include<stdio.h>
#include<string.h>
struct SinhVien{
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
};
int main (){
    struct SinhVien s[50];
    int n=5; 
    printf("Nhap thong tin 5 sinh vien:\n");
    for(int i=0;i<n;i++){
    	printf("Sinh vien thu %d:\n",i+1);
    	s[i].id=i+1;
    	printf("Nhap ho va ten: ");
    	fgets(s[i].name,sizeof(s[i].name),stdin);
    	printf("Nhap tuoi: ");
    	scanf("%d",&s[i].age);
    	fflush(stdin);
    	printf("Nhap so dien thoai: ");
    	scanf("%s",&s[i].phoneNumber);
    	fflush(stdin); 
	}
	for(int i=0;i<n;i++){
		printf("Id sinh vien: %d\n",s[i].id);
		printf("Ho va ten :%s",s[i].name);
		printf("Tuoi :%d\n",s[i].age);
		printf("So dien thoai :%s\n",s[i].phoneNumber);
	}
	return 0;
}
