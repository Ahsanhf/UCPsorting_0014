//nomer 1 Dengan cara mensisipkan data dimulai dari beberapa data udah ada yang urut
//nanti jika ada data yang tidak urut bisa disisipkan
//nanti dilihat mana data yang perlu disisipkan dan posisinya dibagian mana

//nomer 2 dengan membagi data dulu sebelum dikerjakan dan setelah itu
// dikelompokkan dengan menggunakan jarak tertentu sesuai yang di sepakati
// lalu kalau sudah nanti dikelompokkan lagi menjadi 2 
// lalu masuk ke insertion sort data mana yang perlu disisipkan supaya urut
// 
//nomer 3 dengan melihat hasil akhir ada berapa jumlah langkah yang dilakukan oleh data
// nanti data terakhir berapa tinggal pakai rumus n-1.


#include <iostream>
using namespace std;

int ahsan[14];
int n;
int i;
int j;

void input() {        
	while (true) {
		cout << "masukan banyaknya elemen pada ahsan : "; 
		cin >> n; 
		if (n <= 14) 
			break; 
		else {     
			cout << "\nahsan dapat mempunyai maksimal 14 elemen.\n"; 
		}
	}
	cout << endl;                          
	cout << "===================" << endl; 
	cout << "masukan elemen ahsan" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> ahsan[i];
	}
}

void bubblesort() {
	int pass = 1; {
		do {
			for (int j = 0; j <= n - 2 - pass; j++) {
				if (ahsan[i] < ahsan[j]) {
					int temp = ahsan[j];
					ahsan[j] = ahsan[n - 1];
					ahsan[j + 1] = (j);
				}
			}

			for (int i = j + 1; n; j++) {
				cout << ahsan[j] << " ";

			}
			cout << endl;
		} while (pass <= n - 2);
	}
}


void display() {
	cout << endl;
	cout << "=================" << endl;
	cout << "element ahsan yang telah tersusun" << endl;
	cout << "=================" << endl;
	cout << endl;
	for (int j = 0; j < n; j++) {
		cout << ahsan[j];
		if (j < n - 1) {
			cout << " --> ";
		}
	}
	cout << endl;
	cout << endl;
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}



int main()
{
	input();
	bubblesort();
	display();

}
