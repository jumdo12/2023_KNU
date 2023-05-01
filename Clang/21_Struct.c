#include <stdio.h>

char copy_str(char *dest , char *src);
int set_human(struct test *a, int age ,int gender , const char *name);

struct Books{
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};

char copy_str(char *dest , char *src){
    while(*src){
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
    return 1;
}

void Example1(){
    struct Books book_list[3];

    for (int i = 0; i < 3; i++)
    {
        printf("%d 책의정보 입력 : ", i);
        scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
        book_list[i].borrowed = 0;
    }
}

struct test{
    int a ,b;
    int *pointer;
    char name[20];
};

void Example2(){
    struct test st;
    struct test *ptr;

    ptr = &st;

    (*ptr).a = 1;

    printf("%d" , st.a);

    //(*ptr).a = 1은 되지만 *ptr.a는 안됨
    //.은 구조체 멤버변수를 가리키는 것 .이 *보다 우선순위가 높다
    // *ptr.a는 *(ptr.a)와 동일 따라서 컴파일 불가
    //그래서 등장한것이 ptr -> a;
    //즉 (*ptr).a == ptr -> a
}

void Example3(){
    struct test t1;
    struct test *pt;
    pt = *t1;

    (*pt).a = 0;

    pt -> b = 1;
}

void Example4(){
    struct test t;
    struct test *pt;

    int i = 0;

    t.pointer = &i;
    *t.pointer = 3;

    pt -> pointer = 1;
}

void Exaple5(){
    struct test human;
    
    set_human(&human,10,2,"Lee");
}

int set_human(struct test *a , int age , int gender , const char *name){
    a->a = age;
    a -> b = gender

    copy_str(a->name , name);

    return 0;
}

struct employee
{
    int age;
    int salary;
};

struct company{
    struct employee data;
    char name[10];
}

void example6(){
    struct company Kim;

    Kim.data.age = 31;
    Kim.data.salary=3000000;
}

struct AA func(int j);
struct AA
{
    int i;
    int j;
    int k;
} AAA;

void example7()
{
    struct AA a;
    a = func(10);
}

struct AA func(int j)
{
    struct AA A = {1, 2, 3};
    A.i = j;
    return A;
}

int main(){

    return 0;
}