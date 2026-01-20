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
#include <math.h>

int main(){
    float a, b, c, delta, X1, X2, X;
    printf("Nhập giá trị a: ");
    scanf("%f", &a);
     printf("Nhập giá trị b: ");
    scanf("%f", &b);
     printf("Nhập giá trị c: ");
    scanf("%f", &c);
    if(a==0)
    printf("Phương trình trở thành b*x + c = 0");
    else if(a!=0)
    {
        delta = b*b - 4*a*c;
        if(delta<0)
        printf("Phương trình vô nghiệm");
        else if(delta==0)
        {
            X = -b/(2*a);
            printf("Phương trình có nghiệm kép x = %.2f", X);
        }
        else if(delta>0)
        {
            X1 = (-b + sqrt(delta))/(2*a);
            X2 = (-b - sqrt(delta))/(2*a);
            printf("Phương trình có 2 nghiệm phân biệt:\nX1 = %.2f\nX2 = %.2f", X1, X2);
        }
    
    }
    // Khai báo biến


    // Nhập dữ liệu


    // Xử lý, tính toán VÀ Hiển thị kết quả

}   