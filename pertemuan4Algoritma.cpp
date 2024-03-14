#include <iostream>
using namespace std;

int arr[20];			//membuat array dengan panjang data 20
int n;					//membuat variabel inputan n


void input() {			//prosedure input
	while (true)
	{
		cout << "masukan jumlah Data pada array:";		//membuat inputan jumlah elemen array
		cin >> n;										//memanggil variable inputan n
		if (n <= 20) {
			break;
		}
		else {
			cout << "\nArray yang ada masukan maksimal 20 elemen.\n";//menampilkan pesan jika
		}
	}
	cout << endl;			//membuat jarak per baris program
	cout << "===================" << endl;	//membuat tampilan susunan data elemen array
	cout << "masukan elemen array" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++)				//menggunakan perulangan for untuk menyiapkan data pada array
	{
		cout << "data ke-" << (i + 1) << ":";	//memasukan atau menginputkan for untuk menyiapkan data pada n
		cin >> arr[i];							//menyiapkan nilai data n kedalam array arr
	}

}

void insertionsort() {		//procedure Insertion sort
	int temp;				//membuat variable data temporer atau penyiapa  sementara
	int i, j;				//membuat variabel j sebagai penanda

}

int main()
{
 
}


