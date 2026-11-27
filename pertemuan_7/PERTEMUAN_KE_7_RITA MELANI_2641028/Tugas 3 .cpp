#include <iostream> 

int main() { 
    const int N = 8; 
	int data[N] = {12,7,19,4,25,7, 30, 16}; 
	
	std::cout << "1) for dengan indeks: "; 
	for (int i = 0; i < N; ++i) { 
	     std::cout << data[i] << ' ';
	} 
	std::cout << '\n'; 
	
	std::cout << "2) while       :  ";
	int i = 0; 
	while (i < N) { 
    	std::cout << data[i] << ' '; 
	    ++i;
}
    std::cout << '\n';
    
    std::cout << "3) range-based for : "; 
	for (int x : data) { 
	std::cout << x << ' '; 
	}
	std::cout << '\n';
	
	
	for (int& x : data) {
	     x *= 2; 
	}
	
	std::cout << "4) setelah x *= 2 : "; 
	for (int x : data) { 
	     std::cout << x << ' ';
    } 
	std::cout << '\n';
	
	int total = 0; 
	int genap = 0; 
	for (int x : data) { 
	    total += x; 
	    if (x % 2 == 0) { 
		    ++genap;
    	}
   }
   
   std::cout << "\nTotal semua elemen : " <<total << '\n'; 
   std::cout << "Banyak elemen genap: " << genap<< '\n'; 
   
   return 0;
}