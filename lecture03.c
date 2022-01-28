# include <stdio.h>
// // void ไม่ส่งค่ากลับ
// ReturnType FunctionName(parameter){
//     // statement

//     return ....; //ค่าเดียวกับ returntype
// }

//-------------- ประกาศfunction--------------
// int addTen(int x ){
//     printf("addTen x = %d\n",x);
//     x+=10;
//     printf("after added addTen x = %d\n",x);
//     return x;
// }
// ถ้าตัวแปรอยู่ใน function เดียวกันประกาศซ้ำไม่ได้
// ------------Function Pototype----------
// int addTwenty();
// int main() 
// {
//     double d =10; // จะเติม .00 ให้
//     int i = (int)12.56; //แปลงเป็น int  
//     int x= 200;
//     int y =addTen(x);
//     printf("In main x = %d, y=%d\n",x,y);
//     int z = addTwenty();
//     printf("In main2 x =%d, y =%d ,z = %d\n",x ,y ,z);
// }
// int addTewenty() {
//     printf("addTwenty x = %d\n",x);
//     x+=20;
//     printf("afet added addTwenty x=%d\n",x);
//     return x;

// }
// int k,l; ตัวแปรGlobal กำหนดค่ามาให้เป็น 0 อัตโนมัติ ถ้าไม่กำหนดค่าเอง  ##นอกฟังก์ชัน ไม่อยู่ใน{}

// ในฟังก์ชันแล้ว ตัวแปร local
// loop while-----------------
// int 4 byte ,char 1 byte
// int i; ถ้าไม่กำหนดค่า จะจองเนื้อที่ในความจำที่มันมีค่าอยู่แล้ว (ค่าที่ไม่ได้เคลีย / ขยะ)
//    int i = 0; 
//     while (i<10){
//         printf("%d\n",i);
//         i++;
//     }

//     while (1){
//         printf("%d\n",i);
//         i++;
//
//
//
//     }
// for ----------------
//for (int i =0 ; i<10 ; i++) //1.ทำก่อนloop ครั้งเดียว 2.เช็คก่อนเข้าloop ถ้าจริงทำ ไม่จริงไม่ทำ 3.ทำทุกครั้งหลังจบloop 1-3ว่างได้
