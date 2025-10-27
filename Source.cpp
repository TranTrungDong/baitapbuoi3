#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout <<"trungdong";

int tong(int a, int b) {
    return a + b;
}
int hieu(int a, int b) {
    return a - b;
}
int tich(int a, int b) {
    return a * b;
}
//Ép kiểu (float) để đảm bảo kết quả là số thực
float thuong(int a, int b) {
    if (b == 0) {
        cout << "\nLoi: Khong the chia cho 0!" << endl;
        return 0.0;
    }
    return (float)a / b;
}

// Hàm chính của chương trình
int main() {
    cout << "DAY LA CHUONG TRINH DE THUC HANH GIT" << endl;
    cout << "user1" << endl;

    int num1 = 10;
    int num2 = 5;

    cout << "-----------------------------------" << endl;
    cout << "Ket qua phep tinh:" << endl;
    cout << num1 << " + " << num2 << " = " << tong(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << hieu(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << tich(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << thuong(num1, num2) << endl;
	cout << "-----------------------------------" << endl;
    
	system("pause");
	return 0;
}