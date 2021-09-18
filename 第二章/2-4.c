#include <stdio.h>

/*
    使用强制类型转换来打印程序的字节表示
*/

// typedef 为 unsigned char 定义一个新的类型 byte_pointer
// char 类型为
typedef unsigned char *byte_pointer;


void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0;i<len;i++){
        // printf("%.2x",start[i]);
        printf("%d",start[i]);
        printf("\n");
    }
}

void show_int(int x){
    show_bytes((byte_pointer) &x,sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x,sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x,sizeof(void *));
}


void test_show_bytes(int val){
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;

    show_int(ival);
    // show_float(fval);
    // show_pointer(pval);
}

void main(){
    test_show_bytes(12345);
}