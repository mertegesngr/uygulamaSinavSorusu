#include <stdio.h>

int main() {
    int x; 
    int basamak = 0; 
    int sayac = 0;

    // Kullanıcıdan sürekli olarak rakam girişi istenen döngü
    while (1) {
        sayac++;
        printf("Sayı giriniz (Çıkmak için -1 giriniz): ");
        scanf("%d", &x);

        // Girilen sayı 0-9 aralığındaysa `basamak` değerine eklenir
        if (x >= 0 && x <= 9) {
            basamak = (basamak * 10) + x;  // Yeni basamak oluşturuluyor
        }
        // Girilen sayı -1 ise programdan çıkış yapılır
        else if (x == -1) {
            printf("Programdan çıkış yapıldı.\n");
            break;  // Döngü sonlandırılır
        }
        // 0-9 aralığında değil ve -1 değilse hata mesajı verilir
        else {
            printf("Hatalı bir sayı girdiniz. 0-9 arası rakam girilmelidir.\n");
        }
    }

    // Döngü bittikten sonra elde edilen sonucu ekrana yazdır
    printf("Sonuç = %d\n", basamak);

    return 0;
}
