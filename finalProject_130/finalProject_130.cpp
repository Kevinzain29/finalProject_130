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
	virtual void cekKelulusan() { return ; }
	virtual void input() { return ; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	void setActivity(float nilai) {
		this->activity = nilai;
	}
	void setExercise(float nilai) {
		this->exercise = nilai;
	}
	void setTugasAkhir(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	float getActivity() {
		return activity;
	}
	float getExercise() {
		return exercise;
	}
	float getTugasAkhir() {
		return tugasAkhir;
	}
	//isi disini
};
class Pemrograman : public MataKuliah { //isi disini
	void input() {
		float presensi, activity, exercise, tugasAkhir;
		cout << "masukkan nilai Presensi: ";
		cin >> presensi;
		setPresensi(presensi);

		cout << "masukkan nilai Activity: ";
		cin >> activity;
		setActivity(activity);

		cout << "masukkan nilai Exercise: ";
		cin >> exercise;
		setExercise(exercise);

		cout << "masukkan nilai TugasAkhir: ";
		cin >> tugasAkhir;
		setTugasAkhir(tugasAkhir);
	}
	float hitungNilaiAkhir() {
		float nilaiAkhir = getPresensi() * 0.1 + getActivity() * 0.2 + getExercise() * 0.3 + getTugasAkhir() * 0.4;
		return nilaiAkhir;
	}
	void cekKelulusan() {
		float nilaiAkhir = hitungNilaiAkhir();
		cout << "Selamat, Anda lulus mata kuliah Pemrograman dengan nilai akhir " << nilaiAkhir << endl;
	}
};
int main() { //isi disini
	char ulang;
	do {
		cout << "Program dibuat" << endl;
		Pemrograman pemrograman;
		pemrograman.input ();
		pemrograman.cekKelulusan();
		cout << "Apakah anda ingin mengulang program? Y/N: ";
		cin >> ulang;
	} while (ulang == 'Y');

	return 0;

}