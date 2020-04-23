//
//  main.c
//  C_StudyDemo
//
//  Created by Apple on 2020/4/23.
//  Copyright © 2020 LDY. All rights reserved.
//

#include <stdio.h>
#include <string.h>
//三个整数排序
void func01 () {
    
    int i,j,k,t;
    
    printf("请输入三个整数,逗号隔开\n");
    scanf("%d,%d,%d",&i,&j,&k);
    
    if (i > j) {
        t = i;
        i = j;
        j = t;
    }
    
    if (j > k) {
        t = j;
        j = k;
        k = t;
    }
    
    if (i > j) {
        t = i;
        i = j;
        j = t;
    }
    
    printf("%d,%d,%d\n",i,j,k);
    
}

//三个字符串排序
void func02 () {
    char a[10];
    char b[10];
    char c[10];
    
    char *p1 = a;
    char *p2 = b;
    char *p3 = c;
    char *t;
    
//    scanf("%s,%s,%s\n",p1,p2,p3);
    
//    scanf("%s\n",p1);
//    scanf("%s\n",p2);
//    scanf("%s\n",p3);
    
    gets(p1);
    gets(p2);
    gets(p3);
    
    if (strcmp(p1,p2) > 0) {
        t = p1;
        p1 = p2;
        p2 = t;
    }
    
    if (strcmp(p2,p3) > 0) {
        t = p2;
        p2 = p3;
        p3 = t;
    }
    
    if (strcmp(p1,p2) > 0) {
        t = p1;
        p1 = p2;
        p2 = t;
    }
    
    printf("%s,%s,%s\n",p1,p2,p3);
    
}



int main(int argc, const char * argv[]) {
    
    //printf("Hello, World!\n");
    
    func02();
    
    return 0;
}
