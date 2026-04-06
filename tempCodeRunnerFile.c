#include <stdio.h>

int main() {
    int n, x;
    int tong = 0;

    // Dòng đầu tiên: Nhập số lượng dòng cần đọc tiếp theo
    printf("Nhap so luong dong n: ");
    scanf("%d", &n); 

    // Vòng lặp: Chạy đúng n lần để nhặt n dòng tiếp theo
    for (int i = 1; i <= n; i++) {
        // Mỗi lần lặp, máy sẽ đợi bạn nhập 1 số ở dòng mới
        scanf("%d", &x); 
        
        tong += x; // Xử lý số vừa nhặt được (ví dụ cộng dồn)
        printf("Da nhap dong thu %d: gia tri = %d\n", i, x);
    }

    printf("Tong cua %d so vua nhap la: %d\n", n, tong);
    return 0;
}