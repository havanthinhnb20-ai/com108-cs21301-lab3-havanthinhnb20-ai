/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>

int main(){


    double a, b, c;
    printf("Nhap a: ");
    scanf("%lf", &a);
    printf("Nhap b: ");
    scanf("%lf", &b);
    printf("Nhap c: ");
    scanf("%lf", &c);

    // Trường hợp a = 0 => phương trình bậc 1
    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phuong trinh co vo so nghiem");
            else
                printf("Phuong trinh vo nghiem");
        } else {
            double x = -c / b;
            printf("Phuong trinh co nghiem x = %lf", x);
        }
    }
    // Trường hợp a != 0 => phương trình bậc 2
    else {
        double delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem");
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %lf", x);
        } else {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %lf\n", x1);
            printf("x2 = %lf\n", x2);
            printf("x2 = %lf\n", x2);
        }
    }

    return 0;
}

    