#include<stdio.h>
main(){

    int n = 11; //กำหนกขนาดของอาร์เรย์

    char data[n] = {};//การประกาศอาร์เรย์

    //scanf("%s", &data);
    for(int i = 0; i < n; i++){//การรับค่า (INPUT)
        scanf(" %c", &data[i]);//**ทุกครั้งที่มีการเรียกใช้งานอาร์เรย์ต้องอ้างอิง*index*ตลอด**
    }

    char Switch;// ตัวแปรในการสลับข้อมูล
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(data[j] < data[j+1]){//เงื่อนไขในการสลับ
                Switch = data[j];
                data[j] = data[j+1];
                data[j+1] = Switch;
            }
        }
    }

    for(int i = 0; i < n; i ++){//แสดงผล
        printf("%c ", data[i]);
    }

}
