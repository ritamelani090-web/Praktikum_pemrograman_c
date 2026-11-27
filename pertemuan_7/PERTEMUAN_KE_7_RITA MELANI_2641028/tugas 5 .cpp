 #include <iostream>

 void cetak(const int data[], int n); 
 int jumlah(const int data[], int n); 
 double rataRata(const int data[], int n); 
 void gandakan(int data[], int n);
 
 int main() { 
     int nilai[] = {60, 75, 80, 95, 70}; 
	 const int N = static_cast<int>(sizeof(nilai) / sizeof(nilai[0])); 
	 
	 std::cout << "Data awal : "; 
     cetak(nilai, N); 
     std::cout << "Jumlah           : " << jumlah(nilai, N)<< '\n'; 
	 std::cout << "Rata-rata        : " << rataRata(nilai,N)<< '\n'; 
	 
	 gandakan(nilai, N);            // mengubah elemen asli std::cout<< "Setelah gandakan: "; 
	 cetak(nilai, N);              // Perhatikan: sizeof(nilai) di dalam fungsi hanya ukuran pointer. 
	 std::cout << "\nsizeof(nilai) di main = " << sizeof(nilai)<< " byte\n"; 
	 return 0;
}

 void cetak(const int data[], int n) {
     for (int i = 0; i < n; ++i) { 
	      std::cout << data[i] << (i + 1 < n ? " " : "\n"); 
	 }
}

 int jumlah(const int data[], int n) { 
    int total = 0; 
    for (int i = 0; i < n; ++i) { 
	    total+=data[i]; 
	}
    return total; 
}

 double rataRata(const int data[], int n) { 
      if (n <= 0) { 
	      return 0.0;            // kontrak: hindari pembagian nol 
	  } 
	  return static_cast<double>(jumlah(data, n)) /n; 
} 
 void gandakan(int data[], int n) { 
     for (int i = 0; i < n; ++i) { 
          data[i]*=2;            // mengubah array milik pemanggil
	 }
}
