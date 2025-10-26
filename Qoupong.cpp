/*จงแสดงการ ออกแบบโปรแกรมด้วย ผังงาน รหัสเทียม และตารางทดสอบ จากโจทย์โปรแกรมต่อไปนี้
ต้องการแจกคูปองให้ลูกค้าที่ซื้อสินค้า ที่มีมูลค่า 13 % ของราคารวม ตั้งแต่ 5000 บาทขึ้นไป
แล้วคำนวณหา มูลค่าคูปองทั้งหมด และจงหาว่าจะจ่ายคูปอง มูลค่า 100, 10  อย่างละกี่คูปอง โดยมูลค่าของคูปองทั้งหมดคิดจาก 2.5 % ของราคารวม*/
#include <stdio.h>
int main (){

    int price;
    float price_2;
    int qoupong_100;
    int qoupong_10;
    int all_qoupong;
    int lift_qoupong;

    scanf("%d", &price);

    price_2 = price * 0.13;

    if (price_2 >= 5000){
        all_qoupong = price * 0.025;
        qoupong_100 = all_qoupong / 100;
        lift_qoupong = all_qoupong % 100;
        qoupong_10 = lift_qoupong / 10;

        printf("%d\n", qoupong_100);
        printf("%d\n", qoupong_10);
        printf("%d", all_qoupong);

    }



    return 0;
}
