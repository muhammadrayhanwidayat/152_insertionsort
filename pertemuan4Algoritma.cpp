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
	for (i = 1; i <= n - 1; i++) {	//1.looping dengan i dimulai dari 1 hingga n-1
		temp = arr[i];				//2.simpan nilai arr[1] ke variabel sementara temp
		j = i - 1;					//3.setting nilai j sama dengan i-1;

		while (j >= 0 && arr[j] > temp) //4.looping while dimana nilai j lebih besar sama dengan 0 dan
		{								//arr[j] lebih besar daripada temp
			arr[j + 1] = arr[j];		//4.a. simpan arr[j] lebih besar daripada temp
			j--;						//4.b decrement nilai j by 1
		}
		arr[j + 1] = temp;				//5.simpan nilai temp ke dalam arr[j+1]

		cout << "\npass" << i << ":";	//output ke layar
		for (int k = 0; k < n; k++) {	//looping ninlai k dimulai dari 0 hingga n-1
			cout << arr[k] << "";		//output ke layar
		}
	}
}

void display() {					//prosedur display
	cout << endl;											//output baris kosong
	cout << "\n============================" << endl;		//output ke layar
	cout << "elemen array yang telah tersusun" << endl;		//output ke layar
	cout << "\n============================" << endl;		//output ke layar

	for (int j = 0;j < n; j++) {							//looping dengan j dimulai dari 0 hingga n-1
		cout << arr[j] << endl;								//output ke layar
	}
	cout << endl;											//output baris kosong
}

int main()
{
	input();						//memanggil input
	insertionsort();				//memanggil insertionsort
	display();						//memanggil display
}


