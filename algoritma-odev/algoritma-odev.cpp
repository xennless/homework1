#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // Türkçe karakterler kullanmamıza izin veren komut
    srand(time(NULL)); // Rastgele sayı üretirken farklı sayı üretmesine olanak sağlar

    int sayi1, sayi2, islem, kislem, puan = 0, hak = 3;

    cout << endl << "Ahmet Demirci 2120220063" << endl; 
    cout << endl << "Rastgele Sayı ve Rastgele İşlemler İle Matematik Testi" << endl;


    while (hak != 0) {
        islem = rand() % 3 + 1;
        sayi1 = rand() % 10 + 1;
        sayi2 = rand() % 10 + 1;

        cout << endl << "-----------------------------------------------------------------" << endl;


        switch (islem) {
            case 1:
                cout << endl << "İşlem : " << sayi1 << " + " << sayi2 << " = ";
                cin >> kislem;
                if (kislem == sayi1 + sayi2) {
                    puan++;
                    cout << endl << "Doğru Cevap Tebrikler..." << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                } else {
                    --hak;
                    cout << endl << "Yanlış Cevap!" << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                } 
                break;
            case 2:
                cout << endl << "İşlem : " << sayi1 << " - " << sayi2 << " = ";
                cin >> kislem;
                if (kislem == sayi1 - sayi2) {
                    puan++;
                    cout << endl << "Doğru Cevap Tebrikler..." << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                }
                else {
                    --hak;
                    cout << endl << "Yanlış Cevap!" << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                }
                break;
            case 3:
                cout << endl << "İşlem : " << sayi1 << " * " << sayi2 << " = ";
                cin >> kislem;
                if (kislem == sayi1 * sayi2) {
                    puan++;
                    cout << endl << "Doğru Cevap Tebrikler..." << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                }
                else {
                    --hak;
                    cout << endl << "Yanlış Cevap!" << endl;
                    cout << "Kalan Hakkınız : " << hak << " | Puanınız : " << puan << endl;
                }
                break;
        }
    }

    while (hak == 0) {
        cout << endl << "-----------------------------------------------------------------" << endl;
        cout << endl << "Hakkınız Bitti. Oyun Bitti!" << endl;
        cout << endl << "-----------------------------------------------------------------" << endl;
        break;
    }
}
