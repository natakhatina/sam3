#include <iostream>

void massive1 (int *p, int n);
void pechat (int a[], int n);
void swap25(int *p,int n);
int fun3 (int *p);
void obmen4 (int *p,int n);


int main() {
    int n=10;
    int a[n];
    //int b[]={3,4,5};
    //int *d=b;
    //printf ("%d",*p); на экране будет первый элемент массива b
    int *p=a;
    //printf ("%d",p); // на экране адрес первого элемента массива a
    printf("Наш массив:\n");
    massive1(p,n);
    printf("\n");
    printf("Заменим 1й и 2й элементы:\n");
    swap25 (p,n);
    pechat(a,n);
    printf("\n");
    printf("Длина массива:\n");
    int q=rand()%n;
    int *qq=&a[q];
    //printf("q=%d\n",q);
    //printf("*qq=%d\n",*qq);
    int size=fun3(qq);
    printf("size=%d\n",size);
    printf("Поменяем четные и нечетные местами:\n");
    obmen4(p,n);
    pechat(a,n);
    printf("\n");
    printf("Вернем изначальные значения в массив, учитывая, что четные и нечетные элементы поменялись местами:\n");
    swap25 (p,n);
    pechat(a,n);
    return 0;
}


void massive1 (int *p,int n){
    srand(time(NULL));
    for(int i = 0;i<n;i++,p++) {
        *p=rand()%100;
        printf("%-5d", *p);
    }
}
void swap25(int *p,int n) {
    static int i=1;
    static int x=-77;
    static int y=-777;
    if (i%2) {
    int t=*p;
    *p=x;
    x=t;
    printf("x=%d\n",x);
    p=p+n-1;
    t=*p;
    *p=y;
    y=t;
    printf("y=%d\n",y);i++;}
    else {
        p++;
        int t=*p;
        *p=x;
        x=t;
        p=p+n-3;
        t=*p;
        *p=y;
        y=t;
    i++;
    };
}

int fun3 (int *p) {
    int *a=p;
    int size=0;
    do {//printf ("%-5d",*p);
        size++;
        //printf ("size=%-5d",size);
    p--;}
    while (*p>0);

    do {//printf ("a=%-5d",*a);
        size++;
        //printf ("size=%-5d",size);
        a++;}
    while (*a>0);

    size=size+1;
        return size;
}


void obmen4 (int *p,int n) {
    for (int i = 0; i < n; i=i+2, p=p+2) {
        int t=*p;
     p++;
        int x=*p;
        *p=t;
        p--;
        *p=x;
    }
}


void pechat (int a[], int n){
    for (int i=0;i<n;i++)
        printf ("%-5d",a[i]);
}


