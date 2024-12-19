#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[100];
    int age;
    char phoneNumber[20];
};
int main() {
    SinhVien s;
    printf("Nhap ho ten sinh vien: ");
    fgets(s.name, sizeof(s.name), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d",&s.age);
    fflush(stdin); 
    printf("Nhap so dien thoai sinh vien: ");
    fgets(s.phoneNumber, sizeof(s.phoneNumber), stdin);
    printf("\nThong tin sinh vien:\n");
    printf("Ho ten: %s", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("So dien thoai: %s\n", s.phoneNumber);

    return 0;
}

