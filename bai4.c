/******************************************************************************
 * Họ và tên: [Hà Văn Thịnh ]
 * MSSV:      [PS49131]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    int choice;
    printf("Menu Chương Trình:\n");
    printf("1. Xây dựng chương trình tính học lực\n");
    printf("2. Giải phương trình bậc 2\n");
    printf("3. Tính tiền điện\n");
    printf("0. Thoát\n");
    printf("Chọn một tùy chọn (0-3): ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Bạn đã chọn chương tình tính học lực.\n");
            break;
        
        case 2:
            printf("Bạn đã chọn giải phương trình bậc 2.\n");
            
            break;
        case 3:
            printf("Bạn đã chọn tính tiền điện.\n");
           
            break;
        case 0:
            printf("Thoát chương trình. Tạm biệt!\n");
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
    }
    

    // Khai báo biến


    // Nhập dữ liệu



}