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
	cout << endl;
}

int main()
{
 
}


