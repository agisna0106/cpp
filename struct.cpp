#include <iostream>
using namespace std;

struct Buah{
	string nama;
	int harga;
}buah1;

struct Produk{
	string nama;
	int harga;
};

int main() {
	buah1.nama = "Mangga";
	buah1.harga = 10000;
	
	cout << buah1.nama << " harganya " << buah1.harga << endl;	
	
	Produk *p1 = new Produk();
	p1->nama = "Pulpen";
	p1->harga = 2000;
	
	cout << p1->nama << " harganya " << p1->harga << endl;
	
	return 0;
}
