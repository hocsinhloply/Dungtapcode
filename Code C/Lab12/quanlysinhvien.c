#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct quanlysinhvien
{
    char name[100];
    char dob[100];
    float tin;
    float toan;
    float anh;
};

typedef struct quanlysinhvien sinhvien;

void nhap(sinhvien a[], int n){
    for(int i = 0; i < n; ++i){
        printf("\nNhap ten: "); fflush(stdin); gets(a[i].name);
        printf("\nNgay sinh: "); gets(a[i].dob);
        printf("\nNhap diem 3 mon: "); scanf("%f%f%f", &a[i].tin, &a[i].toan, &a[i].anh);
    }
}

float dtb(sinhvien sv){
    return sv.tin / 3 + sv.toan / 3 + sv.anh / 3;
}

char *xeploai(sinhvien sv){
    if(dtb(sv) >= 9) return "Xuat sac";
    else if(dtb(sv) >= 8) return "Gioi";
    else if(dtb(sv) >= 6.5) return "Kha";
    else if(dtb(sv) >= 5) return "Trung binh";
    else return "Yeu";
}

void xuat(sinhvien a){
    printf("Ho ten: %s\n", a.name);
    printf("Ngay sinh: %s\n", a.dob);
    printf("Diem tin: %.2f\n", a.tin);
    printf("Diem toan: %.2f\n", a.toan);
    printf("Diem anh: %.2f\n", a.anh);
    printf("Diem DTB: %.2f\n", dtb(a));
    printf("Xep loai: %s\n", xeploai(a));
}

void xuatN(sinhvien a[], int n){
    for(int i = 0; i < n; i++){
        printf("\nSinh vien %d: \n", i + 1);
        xuat(a[i]);
    }
}

sinhvien tim(char *ht, sinhvien a[], int n){
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].name, ht) == 0) return a[i];
    }
}

void hoanvi(sinhvien *sv1, sinhvien *sv2){
    sinhvien doi;
    doi = *sv1;
    *sv1 = *sv2;
    *sv2 = doi;
}

void sapxep(sinhvien sv[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(sv[i].tin < sv[j].tin) hoanvi(&sv[i], &sv[j]);
        }
    }
}

void xoak(sinhvien *a, int n, int k){
    for(int i = k - 1; i < n - 1; i++){
        a[i] = a[i + 1];
    }
}

void xoasinhvien(sinhvien *a, int n){
    char s[100];
    int k = 0;
    printf("\nNhap ten can xoa: "); fflush(stdin); gets(s);
    for(int i = 0; i < n; i++){
        if(strcmp(a[i].name, s) == 0){
            k = i;
            break;
        }
    }
    xoak(a, n, k);
}

int main(){
    sinhvien a[100];
    int n;
    int nhapdung = 1;
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n");
    printf("-       1. Nhap du lieu n sinh vien               -\n");
    printf("-       2. Xuat du lieu sinh vien                 -\n");
    printf("-       3. Tim sinh vien theo ten                 -\n");
    printf("-       4. Sap xep sinh vien theo diem tin        -\n");
    printf("-       5. Xoa sinh vien thu k                    -\n");
    printf("-       6. Xoa sinh vien theo ten                 -\n");
    printf("-       7. Thoat chuong trinh                     -\n");
    printf("---------------------------------------------------\n");
    printf("---------------------------------------------------\n");
    while(nhapdung != 0){
        int key;
        scanf("%d", &key);
        switch (key)
        {
            case 1:
                {
                scanf("%d", &n);
                nhap(a, n);
                getch();
                break;
            }
            case 2:
                {
                xuatN(a, n);
                getch();
                break;
            }
            case 3:
                {
                char ht[100];
                printf("Nhap ten sinh vien can tim: "); 
                fflush(stdin); gets(ht);
                xuat(tim(ht, a, n));
                getch();
                break;
            }
            case 4:
                {
                sapxep(a, n);
                getch();
                break;
            }
            case 5:
                {
                int k;
                printf("Nhap so thu tu sinh vien can xoa: ");
                scanf("%d", &k);
                xoak(a, n, k);
                n = n - 1;
                getch();
                break;
            }
            case 6:
                {
                xoasinhvien(a, n);
                n = n - 1;
                getch();
                break;
            }
            default:
                {
                nhapdung = 0;
                break;
            }
        }
    }
    return  0;
}