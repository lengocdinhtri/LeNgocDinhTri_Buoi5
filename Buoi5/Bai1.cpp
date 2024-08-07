#include <stdio.h>

// Hàm để chuyển một đĩa từ cột này sang cột khác
void ChuyenDia(char cotTu, char cotDen) {
	printf("Chuyen dia tu cot %c sang cot %c\n", cotTu, cotDen);
}

// Hàm đệ quy để giải bài toán Tháp Hà Nội
void ThapHaNoi(int n, char cotA, char cotB, char cotC) {
	// Trường hợp cơ sở: chỉ có 1 đĩa
	if (n == 1) {
		ChuyenDia(cotA, cotC);
	}
	else {
		// Chuyển n-1 đĩa từ cột A sang cột B, sử dụng cột C làm trung gian
		ThapHaNoi(n - 1, cotA, cotC, cotB);

		// Chuyển đĩa thứ n từ cột A sang cột C
		ChuyenDia(cotA, cotC);

		// Chuyển n-1 đĩa từ cột B sang cột C, sử dụng cột A làm trung gian
		ThapHaNoi(n - 1, cotB, cotA, cotC);
	}
}

int main() {
	int n;

	printf("Nhap so luong dia: ");
	scanf("%d", &n);

	// Gọi hàm ThapHaNoi để bắt đầu quá trình chuyển đĩa
	ThapHaNoi(n, 'A', 'B', 'C');

	return 0;
}
