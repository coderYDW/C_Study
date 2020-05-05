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

//结构体练习
void Func03 () {
    
    struct Student {
        int num;
        char name[20];
        float score;
    } a,b;
    
    scanf("%d%s%f",&a.num,a.name,&a.score);
    scanf("%d%s%f",&b.num,b.name,&b.score);
    
    printf("The Heigher scroce is:\n");
    
    if (a.score > b.score) {
        printf("%d    %s    %.2f\n",a.num,a.name,a.score);
    }
    else if (a.score < b.score) {
        printf("%d    %s    %.2f\n",b.num,b.name,b.score);
    }
    else {
        printf("%d    %s    %.2f\n",a.num,a.name,a.score);
        printf("%d    %s    %.2f\n",b.num,b.name,b.score);
    }
}

void Func4 () {
    
    struct Person {
        char name[20];
        int count;
    } leader[3] = {"Yang",0,"Wang",0,"Liu",0};
    
}

struct Student {
    int num;
    char name[20];
    float score;
};

//结构体排序
void func5 () {
    
    struct Student stu[5] = {{101,"zhang",78.0},{102,"ang",79.0},{103,"ng",77.0},{104,"z",80.0}};
    struct Student temp;
    
    const int n = 4;
    int i,j,k;
    printf("The order is:\n");
    
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i + 1; j < n; j++) {
            if (stu[j].score > stu[k].score) {
                k = j;
            }
            temp = stu[k];
            stu[k] = stu[i];
            stu[i] = temp;
        }
    }
    
    for (i = 0; i < n; i++) {
        printf("%d %s %.2f\n",stu[i].num,stu[i].name,stu[i].score);
    }
    
    
}

//指向结构体的指针
void func6 () {
    
     struct Student stu[5] = {{101,"zhang",78.0},{102,"ang",79.0},{103,"ng",77.0},{104,"z",80.0}};
    
    struct Student * p;
    printf("  No. Name                 Score\n");
    for (p = stu; p < stu + 4; p++) {
        printf("%5d %-20s %.2f\n",p->num,p->name,p->score);
    }
    
}

#define N 3
struct Student01 {
    int num;
    char name[20];
    float score[3];
    float aver;
};

void func07 (void);

int main(int argc, const char * argv[]) {
    
    func07();
    
    return 0;
}

//输入学生信息输出平均成绩最好的学生
void func07 () {
    void input(struct Student01 stu[]);
    struct Student01 max(struct Student01 stu[]);
    void printMax(struct Student01 stu);
    
    struct Student01 stu[N];
    struct Student01 * p = stu;
    
    input(p);
    struct Student01 maxStu = max(p);
    printMax(maxStu);
}

void input(struct Student01 stu[]) {
    printf("请输入各个学生的信息:学号,姓名,三门课的成绩:\n");
    int i;
    for (i = 0; i < N; i++) {
        scanf("%d %s %f %f %f",&stu[i].num,stu[i].name,&stu[i].score[0],&stu[i].score[1],&stu[i].score[2]);
        stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
    }
}

struct Student01 max(struct Student01 stu[]) {
    int i, m = 0;
    for (i = 0; i < N; i++) {
        if (stu[i].aver > stu[m].aver) {
            m = i;
        }
    }
    return stu[m];
}

void printMax(struct Student01 stu) {
    printf("成绩最高的学生是:\n");
    printf("学号:%d\n姓名:%s\n三门课成绩:%5.1f,%5.1f,%5.1f\n平均成绩:%6.2f\n",stu.num,stu.name,stu.score[0],stu.score[1],stu.score[2],stu.aver);
}


