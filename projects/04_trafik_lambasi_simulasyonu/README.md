# 04. Trafik Lambası Simülasyonu

Kırmızı, sarı ve yeşil LED’ler belirli sırayla çalıştırılır. Zamanlama algoritması öğretilir.

## Dosyalar

- `sketch.ino`: ESP32/Arduino kodu
- `diagram.json`: Wokwi devre şeması
- `README.md`: proje açıklaması

## Donanım bileşenleri

Bu proje Wokwi üzerinde ESP32 DevKit kartı ile simüle edilecek şekilde hazırlanmıştır.
Gerekli sensör ve aktüatörler `diagram.json` içinde tanımlıdır.

## Nasıl çalıştırılır?

1. Bu klasörü Wokwi projesi olarak açın.
2. `sketch.ino` dosyasını derleyin.
3. `diagram.json` içindeki bağlantıları inceleyin.
4. Seri monitör gereken projelerde 115200 baud kullanın.

## Öğrenme çıktısı

Bu proje; giriş okuma, karar verme ve çıkış üretme mantığını öğretmek için hazırlanmıştır.


## Öğrenci görevi

- Eşik değerlerini değiştirerek sistem davranışını gözlemleyin.
- Seri monitör çıktısını yorumlayın.
- Projeyi en az bir yeni koşul veya çıkış elemanı ekleyerek geliştirin.
