#include <stdio.h>   
#include <string.h>  //เพิ่มมาให้ใช้คำสัง สตริงได้

int main() {
    char input[100];    //กำหนม ข้อความในอัลเล 0-99
    int text = 1;   // ข้อความ 

    printf("Enter word: ");
    scanf("%s",input); 

    int len = strlen(input);  เพื่อ
    
    for (int i = 0; i < len; i++) {      //ใช้ ตรวจสอบตัวอักษรที่เขียนไป ถ้า i เท่ากับ len - 1 - i จากอีกด้าน
        if (input[i] != input[len - 1 - i]) {
            text = 0;   // ตั้งให้คำเป็น 0 เพราะว่ามันไม่ใช่คำ แล้วสั้งหยุด
            break;
        }
        
    }

    if (text) {
        printf("Pass.\n");
    } else {
        printf("Not Pass.\n");
    }

    return 0;
}
