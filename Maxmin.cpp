#include<stdio.h>
main(){

    int n;
    scanf("%d", &n);//รับค่าN

    int weight[n] = {};//ประกาศอาร์เรย์**ต้องรับค่าN(ขนาดของอาร์เรย์)เข้ามาก่อน**
    int sum = 0;//ประกาศsumกำหนดให้ค่าเริ่มต้นเป็น0
    for(int i = 0; i < n; i++){
        scanf("%d", &weight[i]);//สร้างลูปรับข้อมูลในอาร์เรย์
        sum += weight[i];//หาค่าsum
    }
    float avg = (float)sum / n;//หาค่าavg

    int max = weight[0];//กำหนดค่าmaxให้เท่ากับค่าในอาร์เรย์ตำแหน่งแรก
    int min = weight[0];//กำหนดค่าminให้เท่ากับค่าในอาร์เรย์ตำแหน่งแรก
    for(int i = 0; i < n; i++){//สร้างลูปเพื่อเช็คเงื่อนไข
        if(weight[i] > max){//เงื่อนไขในการหาค่าmax
            max = weight[i];
        }
        if(weight[i] < min){//เงื่อนไขในการหาค่าmin
            min = weight[i];
        }
    }

    int mta = 0;//ประกาศตัวแปรในการนับจำนวนคนน้ำหนักเกิน
    for(int i = 0; i < n; i++){//สร้างลูปในการเช็คเงื่อนไข
        if(weight[i] > avg){//เงื่อนไขในการตรวจสอบน้ำหนัก
            mta++;
        }
    }

    printf("Max =%d\n", max);
    printf("Min =%d\n", min);
    printf("Average=%.2f\n", avg);
    printf("More than Average = %d people\n", mta);
}
