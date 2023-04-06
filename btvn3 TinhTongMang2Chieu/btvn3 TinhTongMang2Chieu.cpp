#include <iostream>
using namespace std;
// Định nghĩa số phần tử trogn mảng
#define ROW	10
#define COL 10
// Hàm nhập mảng
void NhapMang(int array[ROW][COL], int& r, int& c)
{

	cout << "Nhap so dong: ";
	cin >> r;
	cout << "Nhap so cot: ";
	cin >> c;
	// khởi tạo giá trị cho mảng
	// Do có cột và hàng nên sẽ sd 2 vòng lặp
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "array[" << i << "][" << j << "] = ";
			cin >> array[i][j];
		}
	}

}
void XuatMang(int array[ROW][COL], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
// Hàm tính tổng dòng
int TongDong(int array[ROW][COL], int c, int r)
{
	int sum(0);
	// Duyệt các cột 
	/*Khi tính 1 dòng thì có sẵn vị trí dòng đó rồi,
	nên ta phải duyệt vị trí từng cột của dòng đó*/
	for (int j = 0; j < c; j++)
	{
		/*Tính tồng tại vị trí dòng muốn tính
		và vị trí của dòng đó ở từng cột*/
		sum += array[r][j];
	}
	return sum;
}
// Hàm tính tổng cột
int TongCot(int array[ROW][COL], int r, int c)
{
	int sum(0);
	// Tương tự như tính tổng các dòng
	/*Biết được vị trí cột nào r nên phải
	duyệt vị trí từng dòng của cột đó*/
	for (int i = 0; i < r; i++)
	{
		sum += array[i][c];
	}
	return sum;
}

int main()
{
	{
		/*Khai báo số lượng dòng và số lượng cột
		lớn nhất mà mảng có thể chứa*/
		int array[ROW][COL];
		// Tổng số lượng hàng và cột thực tế
		int row, col;
		NhapMang(array, row, col);
		XuatMang(array, row, col);
		//Khai báo tính tổng dòng
		cout << " Nhap dong can tinh tong: ";
		int iRow;
		cin >> iRow;
		int SumRow = TongDong(array, col, iRow);
		cout << "Tong gia tri cua dong: " << SumRow << endl;
		// Khai báo tính tổng cột
		cout << " Nhap cot can tinh tong: ";
		int iCol;
		cin >> iCol;
		int SumCol = TongCot(array, row, iCol);
		cout << " Tong gia tri cua cot: " << SumCol << endl;

		return 0;
	}
}
