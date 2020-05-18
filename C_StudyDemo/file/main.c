//
//  main.c
//  file
//
//  Created by Yangdongwu on 2020/5/15.
//  Copyright © 2020 LDY. All rights reserved.
//

#include <stdio.h>

typedef struct {
    short level;                //缓存区满或空的程度
    unsigned flags;             //文件状态标识
    char fd;                    //文件描述符
    unsigned char hold;         //如缓冲区无内容,不读取字符
    short bsize;                //缓冲区大小
    unsigned char *buffer;      //数据缓冲区的位置
    unsigned char *curp;        //文件位置标记指针当前的指向
    unsigned istemp;            //临时文件指示器
    short token;                //用于有效性检查
} FILE;

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
