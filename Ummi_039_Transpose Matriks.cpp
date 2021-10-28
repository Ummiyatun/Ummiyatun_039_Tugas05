#include <iostream>

using namespace std;

int main(){
	
  int i, j, m, n, matriks[10][10], transpose[10][10];
  
cout << "\tProgram Transpose Matriks";
cout << "\n-------------------------------------------";
cout << "\n\nMasukkan Banyaknya Baris = "; cin>>m;
cout << "Masukkan Banyaknya Kolom = "; cin>>n;

cout << "\n";
cout << "Masukkan Elemen matriks = \n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){ 
		cin>> matriks[i][j]; 
	} 
	}
	for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
    	transpose[j][i] = matriks[i][j];
    }
  	}
cout << "\n";
cout << "Hasil Transpose Matriks = \n";
  	for (i = 0; i < n; i++){
    for (j = 0; j < m; j++){
cout << transpose[i][j] << "\t";
    }
cout << "\n";
  	}
return 0;
}
