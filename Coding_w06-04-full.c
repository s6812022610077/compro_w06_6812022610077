#include<stdio.h>

int main(){
    int x=1, y=2, z=3, a=4;
    int total=5, price=6, quantity=7, discount=8;
    int rate=9;
    int score=10, penalty=11, mistake=12;

    printf("x = %d\n", x=x-4.0);
    printf("x = %d\n", x=x*6.5);
    printf("x = %d\n", x=x%(y+z*a));
    printf("x = %d\n", x=x/(2.0*x));
    printf("total = %d\n", total=total+(price*quantity-discount));
    printf("x = %d\n", x=x/(1+rate/100));
    printf("score = %d\n", score=score-(penalty*(mistake+1)));

    return 0;
}

/*
***************************************** เนื่องจากต้องการเปรียบเทียบผลลัพธ์จึงได้กำหนดค่าเพื่อให้ง่ายต่อการเปรียบเทียบ ************************************************
บรรทัดที่ 1 เรียกใช้ stdio.h
บรรทัดที่ 3 ประกาศฟังก์ชัน main
บรรทัดที่ 4 กำหนดค่า x=1, y=2, z=3, a=4
บรรทัดที่ 5 กำหนดค่า total=5, price=6, quantity=7, discount=8
บรรทัดที่ 6 กำหนดค่า rate=9
บรรทัดที่ 7 กำหนดค่า score=10, penalty=11, mistake=12
บรรทัดที่ 9 แสดงผล x=x-4.0 แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 10 แสดงผล x=x*6.5 แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 11 แสดงผล x=x%(y+z*a) แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 12 แสดงผล x=x/(2.0*x) แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 13 แสดงผล total=total+(price*quantity-discount) แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 14 แสดงผล x=x/(1+rate/100) แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 15 แสดงผล score=score-(penalty*(mistake+1)) แล้วขึ้นบรรทัดใหม่
บรรทัดที่ 17 คืนค่าเป็น 0

*/