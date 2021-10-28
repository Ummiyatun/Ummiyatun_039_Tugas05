#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main() {
	
	int i, j, m, n, matriksA[10][10], matriksB[10][10], matriksC[10][10];

cout << "\tProgram pengurangan matriks";
cout << "\n-------------------------------------------";
cout << "\n\nMasukkan Banyaknya Baris = "; cin>>m;
cout << "Masukkan Banyaknya Kolom = "; cin>>n;

cout << "\n";
  	for(i = 0; i < m; i++){
	for(j = 0; j < n; j++){
cout << "Elemen matriks A [" << i << "," << j << "] = ";
cin>>matriksA[i][j];
    }
  	}
cout << "\n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
cout <<"Elemen matriks B [" << i << "," << j << "] = ";
cin>>matriksB[i][j];
    }
	}
/* ------menampilkan matriks A------*/
cout << "\n";
cout << "Matriks A = \n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){ 
cout << " "<< matriksA[i][j]; 
	} 
cout << "\n";
	} 
/* ------menampilkan matriks B------*/
cout << "\n";
cout << "Matriks B = \n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){ 
cout << " "<< matriksB[i][j]; 
	} 
cout << "\n";
	}
/* ------menampilkan matriks C hasil penjumlahan------*/ 
cout << "\n";
cout << "\tMatriks A - Matriks B = Matriks C \n";
cout << "\nMatriks C = \n";
	for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
matriksC[i][j] = matriksA[i][j] - matriksB[i][j];
cout <<" "<< matriksC[i][j];
	}
cout << "\n";
	}
  
  return 0;
}

