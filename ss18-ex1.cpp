#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[100];
   	int age=18;
    char phoneNumber[20];
};
int main() {
    SinhVien s;
    strcpy(s.name, "Dang Van Thang");
    strcpy(s.phoneNumber, "0866171066");
    printf("Thong tin sinh vien:\n");
    printf("Ho ten: %s\n", s.name);
    printf("Tuoi: %d\n", s.age);
    printf("So dien thoai: %s\n", s.phoneNumber);

    return 0;
}

