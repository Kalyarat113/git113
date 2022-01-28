#include <stdio.h>
int main()
{
    // char str[10];
    // printf("input");
    // gets(str);
    // printf("in = %s",str);

    // false 

    // int i = 0 ;
    // float f = 0.0 ;
    // char c = '\0'; // null character => ascii code ลำดับ 0

    // "kong" =['k', 'o' , 'n' ,'g','\0'] จำว่าตัวแรกอยู่ที่ไหน จนกว่าจะเจอ null
    // เผื่อไว้ 2 ตัว เสมอ

    // true 
    // "kong" = ['k', 'o' , 'n' ,'g','\0']
    char str [10] = "";
    fgets(str,10,stdin);
    int i = atoi(str);

    // Operator > >= < <= == != 
    // Logical && || !
    if (i >400){
        printf("if");
    }else if (i<=400 && i > 100){
        printf("else if");
    }else {
        printf("else");
    }

    
}