#include <stdio.h>
#include <math.h>
#include <conio.h>

struct PhanSo
{
    int tuso;
    int mauso;
};

typedef struct PhanSo phanso;

void nhap(phanso *ps){
    scanf("%d%d", &ps->tuso, &ps->mauso);
}

void xuat(phanso *ps){
    printf("%d/%d\n", ps->tuso, ps->mauso);
}

int UCLN(int a, int b){
    a = abs(a);
    b = abs(b);
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

void rutgon(phanso *ps){
    int a = ps->tuso;
    int b = ps->mauso;
    ps->tuso = ps->tuso / UCLN(a, b);
    ps->mauso = ps->mauso / UCLN(a, b);
}

phanso tong(phanso a, phanso b){
    phanso c;
    c.tuso = a.tuso * b.mauso + b.tuso * a.mauso;
    c.mauso = a.mauso * b.mauso;
    rutgon(&c);
    return c;
}

phanso hieu(phanso a, phanso b){
    phanso c;
    c.tuso = a.tuso * b.mauso - b.tuso * a.mauso;
    c.mauso = a.mauso * b.mauso;
    rutgon(&c);
    return c;
}

phanso tich(phanso a, phanso b){
    phanso c;
    c.tuso = a.tuso * b.tuso;
    c.mauso = a.mauso * b.mauso;
    rutgon(&c);
    return c;
}

phanso thuong(phanso a, phanso b){
    phanso c;
    c.tuso = a.tuso * b.mauso;
    c.mauso = a.mauso * b.tuso;
    rutgon(&c);
    return c;
}

int main(){
    phanso a, b, c;
    nhap(&a);
    nhap(&b);
    printf("Phan so a la: ");
    xuat(&a);
    printf("Phan so a la: ");
    xuat(&b);
    rutgon(&a);
    printf("Rut gon a ta duoc: ");
    xuat(&a);
    rutgon(&b);
    printf("Rut gon a ta duoc: ");
    xuat(&b);
    printf("Tong cua hai phan so = ");
    c.tuso = tong(a, b).tuso;
    c.mauso = tong(a, b).mauso;
    xuat(&c);
    printf("Hieu cua hai phan so = ");
    c.tuso = hieu(a, b).tuso;
    c.mauso = hieu(a, b).mauso;
    xuat(&c);
    printf("Tich cua hai phan so = ");
    c.tuso = tich(a, b).tuso;
    c.mauso = tich(a, b).mauso;
    xuat(&c);
    printf("Thuong cua hai phan so = ");
    c.tuso = thuong(a, b).tuso;
    c.mauso = thuong(a, b).mauso;
    xuat(&c);
    getch();
}