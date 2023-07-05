#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	//isi disini
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}

	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
};
class Pemrograman :public MataKuliah { //isi disini
public:

	void cekKelulusan() {
		if
			jika nilai lebih dari 75 maka dinyatakan lulus
		else
			jika kurang dari 75 maka tidak lulus
	}
};
class Pemrograman :public MataKuliah {
public:
	void input() {

		int p;
		cout << "masukan presensi : " << endl;
		cin >> p;
		setPresensi(p);


		int a;
		cout << "masukan activity : " << endl;
		cin >> a;
		setA(a);


		int e;
		cout << "masukan exercise : " << endl;
		cin >> e;
		setE(e);


		int ua;
		cout << "masukan tugas akhir : " << endl;
		cin >> ua;
		setUA(ua);

	}

};
int main() { //isi disini