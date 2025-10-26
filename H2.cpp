#include <stdio.h>
int main()
{
    int Start_H, Start_M, X;
    int Stop_H, Stop_M, S;

    // อ่านค่าตัวแปร
    printf("Enter H: ");
    scanf("%d", &Start_H);
    printf("Enter M: ");
    scanf("%d", &Start_M);
    printf("Enter X: ");
    scanf("%d", &X);

    // เริ่มต้นวิ่ง 30 นาที
    Stop_M = Start_M + 30;
    // ถ้านาทีเป็นเลขคี่ ให้บวกเวลาเพิ่ม X นาที
    if (Start_M % 2 != 0) {
        Stop_M += X;
    }
    // แปลงค่าเวลาให้ตรงตามหลัก
    Stop_H = Start_H + (Stop_M / 60);
    Stop_M = Stop_M % 60;
    // แปลงกรณีเริ่มที่ 60นาที
    if (Start_M == 60) {
        Start_H ++;
        Start_M = 0;
    }
    // คำนวณเวลารวมเป็นวินาที
    if(Stop_H > Start_H){
      S = ((Stop_H - Start_H) * 3600) + ((Stop_M - Start_M) * 60);
    }else{
      S = (Stop_M - Start_M) * 60;
    }

    // แสดงค่า
    printf("Start time = %2d:%2d\n", Start_H, Start_M);
    printf("Stop time  = %2d:%2d\n", Stop_H, Stop_M);
    printf("Total run time = %d seconds\n", S);

    return 0;
}
