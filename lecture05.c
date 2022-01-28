
---------------เก็บเลขฐาน----------------
 int a = 100;  ฐาน 10
 int b = 0144;  ฐาน 8
 int c = 0x64;  ฐาน 16
 int d = 0b1010101; ฐาน 2

 int จอง 4 byte ส่วนใหญ่ ขึ้นอยู่กับ cpu
  int x= 100;
  printf( "x = %d",x);
-------------------------&x------อิงaddressของตัวแปร x ----------
  printf(" reference of x = %lu ",&x);   แสดงaddressของตัวแปร แบบฐาน10
  printf(" reference of x = %p ",&x);   แสดงaddressของตัวแปร แบบฐาน 16 พ้อยเตอร์เก็บaddress
  &x เปลี่ยนaddressไม่ได้   
;   พ้อยเตอร์เก็บ address ของคนอื่น
    ----array---- เป็นพ้อยเตอร์ด้วยตัวมันเอง
  int data[10] = {10,20,30,40,50};
  address จะต่อเนื่องกันของ data[0],data[1],...,....,...
  data => &data[0] =1004
  so &data[5] = 1004 + 5 * ความจุint

; เข้าถึงเกินจากที่กำหนดไว้ได้ เช่น data[100] data[-5] แต่ไม่มากเกินไป แต่ก็มีวิธีขอเข้าถึงอีกได้
---------------; ประกาศตัวแปรพ้อยเตอร์-----------------
    int *ptr = &x; เก็บที่อยู่ของ x ไว้ในตัวเอง
    int *arrPtr;
    arrPtr = data ; &data[0]
    *ptr =1000; เปลี่ยนค่าในaddress ที่ชี้ไป 

    printf("value of ptr = %p",ptr);
    printf("reference of ptr = %p", &ptr);

    printf("value of reference ptr = %d", *ptr);   Dereferencing   ไปที่ address ของ x ที่เก็บไว้ข้างใน แล้วไปที่อันนั้นจากนั้นดึงค่ามาแสดง

    ;-----------------scanf()---------------------
    int x;
    char c;
    char s[100];
    scanf(" %d %s",&x,s);
    printf("result - %d , %s"x, s);

    ;ระวังถ้ารับ char ต่อจากอันอื่น ต้องใส่ \n ไม่งั้นจะรับ \n ไว้เอง
     scanf("\n%c",&c)


     -------
     void printstr()






