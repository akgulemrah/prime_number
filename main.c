#include <stdio.h>
#include <stdlib.h>
​
#define bool    int
#define true    (1)
#define false   (0)
//or...
//typedef enum{false,true} bool;​

// kullanıcıdan başlangıç ve bitiş aralıklarını alacağımız fonktiyon
void degerAl(int *sayi1, int *sayi2);
​
/* alınan başlangıç ve bitiş aralığındaki değerleri kontrol
 * edip, asal olan sayıları ekrana bastıran fonksiyon
 */
void kontrolEt(const int *sayi1, const int *sayi2);
​
int main() {
    int sayi1 = 0, sayi2 = 0; //başlangıç ve bitiş değişkenleri
    degerAl(&sayi1, &sayi2); 
    kontrolEt(&sayi1, &sayi2);
​
    return 0;
}
void degerAl(int *sayi1, int *sayi2){
    printf("Başlangıç sayısını giriniz: "); scanf("%d", sayi1);
    printf("Bitiş sayısını giriniz: "); scanf("%d", sayi2);
}
void kontrolEt(const int *sayi1, const int *sayi2){
    if(*sayi1 <1 || *sayi2 <1 || *sayi2<*sayi1){
        perror("DEGERLERINIZDE HATA MEVCUTTU");
        exit(EXIT_FAILURE);
    }
    bool kontrol;
    
    /* eğer girilen iki değer arasındaki bir sayı asal değilse
     * kontrol değişkeni "false" değerini alacak ve ekrana 
     * o anki değer basılmayacak.
     */
    for(int i=*sayi1; i<=*sayi2; i++){
        kontrol = true;
        for(int j=2; j<i; j++){
            if(i%j==0){
                // i değişkeninin şu anki değeri asal değil
                // o yüzden kontrol false değeri alacak
                kontrol = false; 
                break;
            }
        }
        if(kontrol)
            printf("%d sayısı asaldır.\n", i);
    }
}
