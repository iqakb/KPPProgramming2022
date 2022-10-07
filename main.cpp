// NAMA       : Achmad Iqbal Akbari
// NRP        : 5022221118
// Jurusan    : Teknik Elektro

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

float mencari_V0(int jrk,int losss)
{
      return sqrt(jrk*GRAVITASI)+losss;
}

float speed_dgn_loss(float h)
{
    return h-2*floor(h/10)+1;  //Rumus floor ganjil
}

int main() {
    float a,v0,vtan; // deklarasi
    int jarak; // deklarasi variable jarak maksimum pelemparan bola
    std::cin >> a;

    vtan = speed_dgn_loss(a); //mencari kecepatan tangensial roller
    loss = a-vtan;

    if (a>30){ //mengecek apabila kecepatan tangensial roller lebih dengan 30 m/s
        return 0;
    }
    jarak = int(v0*v0/10); // hitung jarak. ingat sin(2*45) = 0.5
    v0 = mencari_V0(jarak,loss);

    //output semua
    std::cout << jarak;
    std::cout << " ";
    std::cout << v0 << std::endl;

    return 0;
}

