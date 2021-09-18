#include <stdio.h>
#include <string.h>

// 自定义一个类型 Book
typedef struct Books
{
    /* data */
    char name[10];
} Book;

int main(){
    Book book;

    strcpy(book.name,"xxxxx");

    printf("name is %s\n",book.name);
    return 0;

}

