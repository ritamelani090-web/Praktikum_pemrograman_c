#include <iomanip>
#include <iostream>

const int M = 2; 
const int N = 3;
const int P = 2;

void cetak(const int mat[][P], int baris) {
	for (int i = 0; i < baris; ++i) {
		for (int j = 0; j < P; ++j) {
			std::cout << std::setw(5) << mat[i][j];
		}
		std::cout << '\n';
	}
}
void cetakA(const int mat[][N], int baris) {
	for (int i = 0; i < baris; ++i) {
		for (int j = 0; j < N; ++j) {
			std::cout << std::setw (5) << mat[i][j];
		}
		std::cout << '\n';
	}
}
int main() {
	int a[M][N] = {
	{1, 2, 3},
	{4, 5, 6}
	};
	int b[N][P] = {
	    {7, 8},
	    {9, 10},
	    {11, 12}
		};
	int c [M][P] = {};
	
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < P; ++j) {
			for (int k = 0; k < N; ++k) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}	
	
	std::cout << "A ( " << M << 'x' << N << "):\n";
	cetakA (a, M);
	std::cout << "\nB (" << N << 'x' << P << "):\n";
	cetak(b, N);
	std::cout << "\nc = A x B (" << M << 'x' << P << "):\n";
	cetak(c, M);
	
	std::cout << "\nC[0][0] seharusnya 58 -> " << c[0][0] << '\n';
	
	return 0;
}