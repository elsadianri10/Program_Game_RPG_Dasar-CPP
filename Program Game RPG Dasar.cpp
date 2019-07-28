#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdlib>
using namespace std;

struct status
{
	int darah=100, kekuatan=10, pertahanan=5, sihir=7, spirit=25, level=1;
	int darah_musuh=100, serang_musuh=10, serang_musuh2=20, serang=10, uang=5000;

};
status s;

void menu(); void status(); void serang(); void pilih_battle(); void pertahanan(); void sihir(); void tambah_status(); void exit();
void lari(); void save(); void serang2(); void pertahanan2(); void sihir2();
class data
{
	public:
		int pil_hero, pil_senjata, pil_menu, pil_boss, pil_serang;
		int pil_tambah_darah, pil_sihir;
		char nama[100];
	
};
data r;
	
void pilih_hero()
{
	cout<<" Masukan Id Game : "; cin>>r.nama;
	system("cls");
	cout<<" Hallo "<<r.nama<<" Selamat Datang di Petualangan Lilo Dan Lily "<<endl;
	
	hero:
	cout<<" Pilih Karakter yang Kamu Suka"<<endl;
	cout<<" 1. Lilo "<<endl;
	cout<<" 2. Lily "<<endl;
	cout<<" Karakter mana yang Kamu pilih ? : "; cin>>r.pil_hero;
	system("cls");
	if(r.pil_hero==1)
	{
		cout<<" Hallo Lilo, Tentukan Senjata yang ingin Kamu gunakan..."<<endl;
	}
	else if(r.pil_hero==2)
	{
		cout<<" Hallo Lily, Tentukan Senjata yang ingin Kamu gunakan..."<<endl;
	}
	else
	{
		cout<<" Pilihan Anda Salah, Silahkan Coba Lagi"<<endl;
		goto hero;
	}
}

void pilih_senjata()
{
	senjata:
	cout<<" 1. Sword"<<endl;
	cout<<" 2. Axe"<<endl;
	cout<<" 3. Arrow"<<endl;
	cout<<" 4. Magic Wand"<<endl;
	cout<<" Senjata yang Kamu pilih? : "; cin>>r.pil_senjata;
	system("cls");
	
	if(r.pil_senjata==1)
	{
		cout<<" Wow, Itu Pilihan Terbaik, Mulai Game Anda Sekarang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	else if(r.pil_senjata==2)
	{
		cout<<" Wow, Itu Pilihan Terbaik, Mulai Game Anda Sekarang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	else if(r.pil_senjata==3)
	{
		cout<<" Wow, Itu Pilihan Terbaik, Mulai Game Anda Sekarang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	else if(r.pil_senjata==4)
	{
		cout<<" Wow, Itu Pilihan Terbaik, Mulai Game Anda Sekarang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	else
	{
		cout<<" Pilihan Anda Salah, Silahkan Coba Lagi"<<endl;
		system("pause");
		system("cls");
		goto senjata;
	}
}

void status()
{
	    cout<<" \n\nCek Status Anda"<<endl;
		cout<<" Darah Anda            : "<<s.darah<<endl;
		cout<<" Kekuatan Anda         : "<<s.serang<<endl;
		cout<<" Pertahanan Anda       : "<<s.pertahanan<<endl;
		cout<<" Sihir Anda            : "<<s.sihir<<endl;
		cout<<" Spirit Anda           : "<<s.spirit<<endl;
		cout<<" Level                 : "<<s.level<<endl;
		cout<<" Uang                  : "<<s.uang<<"g"<<endl;
		system("pause");
		system("cls");
}

void boss()
{
	cout<<"\n\nBertarung Dengan Musuh "<<endl;
	cout<<" 1. Boss Of Knight Tree "<<endl;
	cout<<" 2. Boss Of Knight Of Pegasus"<<endl;
	cout<<" Pilih Boss yang ingin Anda Lawan : "; cin>>r.pil_boss;
	system("cls");
	pilih_battle();
}

void pilih_battle()
{
	if(r.pil_boss==1)
	{
		cout<<" Kekuatan Musuh : "<<s.serang_musuh<<endl;
		system("pause");
		cout<<" 1. Serang "<<endl;
		cout<<" 2. Bertahan "<<endl;
		cout<<" 3. Skill Sihir"<<endl;
		cout<<" 4. Lari"<<endl;
		cout<<" Pilih Kekuatan Anda Di Sini : "; cin>>r.pil_serang;
		system("cls");
		
		if (r.pil_serang==1)
		{
			serang();		
		}
		if (r.pil_serang==2)
		{
			pertahanan();
		}
		if (r.pil_serang==3)
		{
			sihir();
		}
		if (r.pil_serang==4)
		{
		 	lari();
		}
	}
	else if(r.pil_boss==2)
	{
		cout<<" Kekuatan Musuh : "<<s.serang_musuh2<<endl;
		system("pause");
		cout<<" 1. Serang "<<endl;
		cout<<" 2. Bertahan "<<endl;
		cout<<" 3. Skill Sihir"<<endl;
		cout<<" 4. Lari"<<endl;
		cout<<" Pilih Kekuatan Anda Di Sini : "; cin>>r.pil_serang;
		system("cls");
		
		if (r.pil_serang==1)
		{
			serang2();	
		}
		if (r.pil_serang==2)
		{
			pertahanan2();
		}
		if (r.pil_serang==3)
		{
			sihir2();
		}
		if (r.pil_serang==4)
		{
			lari();
		}
	}
}

void lari()
{
	menu();
}

void serang()
{
	char yt;
	s.darah = s.darah - s.serang_musuh;
	s.darah_musuh = s.darah_musuh - s.serang;
	cout<<" Hero mu Menyerang : "<<s.serang<<endl;
	cout<<" Serang Musuh     : "<<s.serang_musuh<<endl;
	system("pause");
	cout<<" Darah Kamu        : "<<s.darah<<endl;
	cout<<" Pertahanan Kamu   : "<<s.pertahanan<<endl;
	cout<<" Spirit Kamu       : "<<s.spirit<<endl;
	cout<<" Skill Sihir Kamu  : "<<s.sihir<<endl;
	cout<<" Darah Musuh       : "<<s.darah_musuh<<endl;
	if (s.darah==0)
	{
		cout<<" Hero Kamu Mati, Pertarungan telah Selesai...."<<endl;
		system("pause");
		system("cls");
		exit();
	}
	if (s.darah_musuh<=0)
	{
		s.uang  = s.uang + 1000;
		s.level  = s.level + 1;
		cout<<" \n Di sini mendapat Pengalaman : 100"<<endl;
		cout<<" Level Up..."<<endl;
		cout<<" Selamat, Level Up"<<s.level<<endl;
		cout<<" Dapat Menghasilkan Uang     : "<<s.uang<<"g"<<endl<<endl;
		cout<<" Boss telah Mati, Mari Pergi "<<endl<<endl<<endl;
		system("pause");
		system("cls");
		menu();
	}
	cout<<" \nSerang lagi ? Y/T : "; cin>>yt;
	system("cls");
	
	if(yt=='T'||yt=='t')
	{
		menu();
	}
	if(yt=='Y'||yt=='y')
	{
		pilih_battle();
	}   
}

void serang2()
{
	char yt7;
	s.darah = s.darah - s.serang_musuh2;
	s.darah_musuh= s.darah_musuh - s.serang;
	cout<<" Kamu Menyerang   : "<<s.serang<<endl;
	cout<<" Musuh Menyerang  : "<<s.serang_musuh2<<endl;
	system("pause");
	
	cout<<" Darah Kamu       : "<<s.darah<<endl;
	cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
	cout<<" Spirit Kamu      : "<<s.spirit<<endl;
	cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
	cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
	
	if (s.darah==0)
	{
		cout<<" Hero Kamu Mati, Pertarungan telah Selesai....."<<endl;
		system("pause");
		system("cls");
		exit();	
	}
	if (s.darah_musuh<=0)
	{
		s.uang  = s.uang + 1000;
		s.level  = s.level + 1;
		cout<<" \n Di sini mendapat Pengalaman : 100"<<endl;
		cout<<" Level Up..."<<endl;
		cout<<" Selamat, Level Up"<<s.level<<endl;
		cout<<" Dapat Menghasilkan Uang   : "<<s.uang<<"g"<<endl<<endl;
		cout<<" Boss telah Mati, Mari Pergi "<<endl<<endl<<endl;
		system("pause");
		system("cls");
		menu();
	}
	cout<<" \nSerang Lagi ? Y/T : "; cin>>yt7;
	system("cls");
	
	if(yt7=='T'||yt7=='t')
	{
		menu();
	}
	if(yt7=='Y'||yt7=='y')
	{
		pilih_battle();
	}   
}

void pertahanan()
{
	char yt3;
	if (s.pertahanan<5)
	{
		cout<<" Pertahanan Anda Tidak Bekerja, Menggunakan Sihir Untuk Meningkatkan Pertahanan"<<endl;
		pilih_battle();
	}
	
	cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
	cout<<" Musuh Menyerang  : "<<s.serang_musuh<<endl;
	cout<<" Spirit +10"<<endl;
	cout<<" Sihir  +5 "<<endl;
	system("pause");
	
	s.darah   = s.darah - (10*2) + 10;
	s.spirit = s.spirit +10;
	s.sihir  = s.sihir + 5;
	s.pertahanan = s.pertahanan-5;
	if (s.darah==0)
	{
		cout<<" Hero Kamu Mati, Pertarungan telah Selesai....."<<endl;
		system("pause");
		system("cls");
		exit();	
	}
	
	cout<<" Darah Kamu       : "<<s.darah<<endl;
	cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
	cout<<" Spirit Kamu      : "<<s.spirit<<endl;
	cout<<" Sihir Kamu       : "<<s.sihir<<endl;
	cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
	
	cout<<" \nSerang Lagi ? Y/T : "; cin>>yt3;
	system("cls");
	
	if(yt3=='t'||yt3=='t')
	{
		menu();
	}
	if(yt3=='Y'||yt3=='y')
	{
		pilih_battle();
	}   
}

void pertahanan2()
{
	char yt8;
	if (s.pertahanan<5)
	{
		cout<<" Pertahanan Anda Tidak Bekerja, Menggunakan Sihir Untuk Meningkatkan Pertahanan"<<endl;
		pilih_battle();
	}
	
	cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
	cout<<" Musuh Menyerang  : "<<s.serang_musuh;
	cout<<" Spirit +10"<<endl;
	cout<<" Sihir  +5 "<<endl;
	system("pause");
	
	s.darah   = s.darah - (10*2) + 10;
	s.spirit = s.spirit +10;
	s.sihir  = s.sihir + 5;
	s.pertahanan = s.pertahanan-5;
	if (s.darah==0)
	{
		cout<<" Hero Kamu Mati, Pertarungan telah Selesai....."<<endl;
		system("pause");
		system("cls");
		exit();
	}
	
	cout<<" Darah Kamu       : "<<s.darah<<endl;
	cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
	cout<<" Spirit Kamu      : "<<s.spirit<<endl;
	cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
	cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
	cout<<" \nSerang Lagi ? Y/T : "; cin>>yt8;
	system("cls");
	
	if(yt8=='T'||yt8=='t')
	{
		menu();
	}
	if(yt8=='Y'||yt8=='y')
	{
		pilih_battle();
	}   
}

void sihir()
{
	char yt4;
	cout<<" Skill Sihir "<<endl;
	cout<<" 1. Magic Of Katon  (Fire)  "<<endl;
	cout<<" 2. Magic Of Suiton (Water) "<<endl;
	cout<<" 3. Magic Of Doton  (Earth) "<<endl;
	cout<<" 4. Magic Of Fuuton (Wind)  "<<endl;
	cout<<" Pilih Skill Sihir yang Anda ingin gunakan? : "; cin>>r.pil_sihir;
	system("cls");
	
	if(r.pil_sihir==1)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Katon Gamayu Endan "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai....."<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt4;
		system("cls");
	}
	else if(r.pil_sihir==2)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Suiton Suishoha "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt4;
		system("cls");	
	}
	else if(r.pil_sihir==3)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Doton Doryuheki "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt4;
		system("cls");
		
	}
	else if(r.pil_sihir==4)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Futton Toppa "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt4;
		system("cls");
	}
	
		if(yt4=='T'||yt4=='t')
		{
			menu();
		}
		if(yt4=='Y'||yt4=='y')
		{
			pilih_battle();
		}   
}

void sihir2()
{
	char yt9;
	cout<<" Skill Sihir "<<endl;
	cout<<" 1. Magic Of Katon  (Fire)  "<<endl;
	cout<<" 2. Magic Of Suiton (Water) "<<endl;
	cout<<" 3. Magic Of Doton  (Earth) "<<endl;
	cout<<" 4. Magic Of Fuuton (Wind)  "<<endl;
	cout<<" Pilih Skill Sihir yang ingin Anda gunakan? : "; cin>>r.pil_sihir;
	system("cls");
	
	if(r.pil_sihir==1)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Katon Gamayu Endan "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh2<<endl;
		system("pause");
		s.darah = s.darah - s.serang_musuh2;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt9;
		system("cls");
	}
	else if(r.pil_sihir==2)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Suiton Suishoha "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh2<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh2;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nAttack Again ? Y/T : "; cin>>yt9;
		system("cls");
	}
	else if(r.pil_sihir==3)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Doton Doryuheki "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh2<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh2;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nAttack Again ? Y/T : "; cin>>yt9;
		system("cls");
	}
	else if(r.pil_sihir==4)
	{
		if (s.sihir==0)
		{
			cout<<" Sihir Anda Tidak Bekerja, Pertahankan Sekarang Untuk Mengatur Sihir"<<endl;
			pilih_battle();
		}
		
		cout<<" Futton Toppa "<<endl<<endl;
		cout<<" Skill Sihir Kamu      : "<<s.sihir<<endl;
		cout<<" Musuh Menyerang       : "<<s.serang_musuh2<<endl;
		system("pause");
		
		s.darah = s.darah - s.serang_musuh2;
		s.darah_musuh = s.darah_musuh - s.sihir;
		s.sihir = 0;
		
		if (s.darah==0)
		{
			cout<<" Hero Kamu Mati, Pertarungan telah Selesai........"<<endl;
			system("pause");
			system("cls");
			exit();
		}
		
		cout<<" Darah Kamu       : "<<s.darah<<endl;
		cout<<" Pertahanan Kamu  : "<<s.pertahanan<<endl;
		cout<<" Spirit Kamu      : "<<s.spirit<<endl;
		cout<<" Skill Sihir Kamu : "<<s.sihir<<endl;
		cout<<" Darah Musuh      : "<<s.darah_musuh<<endl;
		cout<<" \nSerang Lagi? Y/T : "; cin>>yt9;
		system("cls");
	}
	
		if(yt9=='T'||yt9=='t')
		{
		menu();
		}
		if(yt9=='Y'||yt9=='y')
		{
		pilih_battle();
		}   
}

void notfull()
{
	if(s.uang<500)
	{
		cout<<"Tidak Cukup Emas, Pergi Berjuang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	
	cout<<" Bayar        : 500g"<<endl;
	s.uang = s.uang - 500;
	s.darah = s.darah + 50;
	cout<<" Emas Kamu  : "<<s.uang<<"g"<<endl;
	
		if(s.darah>=100)
		{
			s.darah=100;
		}
	system("pause");
	system("cls");
}

void full()
{
	if(s.uang<1000)
	{
		cout<<"Tidak Cukup Emas, Pergi Berjuang"<<endl;
		system("pause");
		system("cls");
		menu();
	}
	
	cout<<" Bayar        : 1000g"<<endl;
	s.uang = s.uang - 1000;
	s.darah = 100;
	cout<<" Emas Kamu  : "<<s.uang<<"g"<<endl;
	cout<<" Tambah Darah  : "<<s.darah<<endl;
	system("pause");
	system("cls");
}

void setfull_life()
{
	setlife:
	int yt2;
	cout<<" 1. Penuh "<<endl;
	cout<<" 2. Tidak Penuh (50Hp)"<<endl;
	
	cout<<" \nAtur Darah Kamu   : "; cin>>r.pil_tambah_darah;
	system("cls");
	
	if(r.pil_tambah_darah==1)
	{
		full();
	}   
	else if(r.pil_tambah_darah==2)
	{
		notfull();
	}
	else
	{
		cout<<" Pilihan mu salah, Silahkan coba lagi.."<<endl;
		goto setlife;
	}
	
}

void tambah_status()
{
	char yt5;
	if(s.uang<5000)
	{
		cout<<" Tidak Cukup Emas, Pergi Berjuang"<<endl;
		system("pause");
		system("cls");
		menu();
		system("cls");
	}
	
	s.uang = s.uang - 5000;
	cout<<" Tambah Status Kamu ? Y/T : "; cin>>yt5;
	system("cls");
	
	if(yt5=='T'||yt5=='t')
	{
		menu();
	}
	if(yt5=='Y'||yt5=='y')
	{
		cout<<" Bayar  : 5000g"<<endl;
		s.darah = s.darah + 10;
		s.serang = s.serang + 10;
		s.pertahanan =	s.pertahanan+5;
		s.sihir = s.sihir+8;
		s.spirit = s.spirit+15;
		cout<<" Darah Anda            : "<<s.darah<<endl;
		cout<<" Kekuatan Anda         : "<<s.serang<<endl;
		cout<<" Pertahanan Anda       : "<<s.pertahanan<<endl;
		cout<<" Sihir Anda            : "<<s.sihir<<endl;
		cout<<" Spirit Anda           : "<<s.spirit<<endl;
		cout<<" Level                 : "<<s.level<<endl;
		system("pause");
		system("cls");
	} 
}

void keluar()
{
	char yt6;
	cout<<" Kamu Mau Save Data ? Y/T : "; cin>>yt6;
	if(yt6=='T'||yt6=='t')
	{
		cout<<" Kamu Kalah, Fix Bhay !"<<endl;
		system("pause");
		system("cls");
		cout<<" Terima Kasih Telah Bermain Dengan Game RPG Saya "<<endl;
		cout<<" Nama    : Elsa Diana Putri"<<endl;
		cout<<" NIM     : 20170801161"<<endl;
		system ("pause");
	}
	
	if(yt6=='Y'||yt6=='y')
	{
		save();
	}
}

void save()
{
	//hasil fstream
	ofstream save_data;
	save_data.open("SaveData.txt", ios_base::app);
		save_data<<" Atur Darah            : "<<s.darah<<endl;
		save_data<<" Atur Kekuatan         : "<<s.kekuatan<<endl;
		save_data<<" Atur Pertahanan       : "<<s.pertahanan<<endl;
		save_data<<" Atur Skill Sihir      : "<<s.sihir<<endl;
		save_data<<" Atur Spirit           : "<<s.spirit<<endl;
		save_data<<" Level                 : "<<s.level<<endl;
		save_data<<" Uang                  : "<<s.uang<<"g"<<endl;
	save_data.close();
	
	cout<<" Data Anda di simpan di SaveData.txt "<<endl;
	system("pause");
	system("cls");
	cout<<" Terima Kasih Telah Bermain Game RPG Saya "<<endl;
	cout<<" Nama    : Elsa Diana Putri"<<endl;
	cout<<" NIM     : 20170801161"<<endl;	
}

void menu()
{
	do
	{
		cout<<" Village Of Esa Unggul University "<<endl;
		cout<<" 1. Cek Status"<<endl;
		cout<<" 2. Battle dengan Musuh"<<endl;
		cout<<" 3. Tambah Darah Anda"<<endl;
		cout<<" 4. Tambah Status Anda"<<endl;
		cout<<" 5. Keluar dari Game"<<endl;
		cout<<" Masukan Pilihan Anda di sini : "; cin>>r.pil_menu;
	
		if(r.pil_menu==1)
		{
			status();
		}
		else if(r.pil_menu==2)
		{
			boss();
		}
		else if(r.pil_menu==3)
		{
			setfull_life();
		}
		else if(r.pil_menu==4)
		{
			tambah_status();
		}
		else if(r.pil_menu==5)
		{
			keluar();
		}
	}
	while(r.pil_menu!=5);
}


int main()
{
	pilih_hero();
	pilih_senjata();
}
