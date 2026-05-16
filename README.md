# Akıllı Ev Otomasyon Sistemleri - ESP32 Wokwi Proje Seti

Bu GitHub projesi, **Akıllı Ev Otomasyon Sistemleri** dersini alan öğrenciler için hazırlanmış
ESP32 tabanlı Wokwi uygulama örneklerinden oluşur.

Amaç; öğrencilerin yalnızca devre kurmasını değil, **giriş oku → karar ver → çıkış üret** mantığıyla
akıllı ev senaryoları tasarlamasını sağlamaktır.

## Klasör Yapısı

```text
akilli_ev_esp32_wokwi_github/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── ogretmen_rehberi.md
│   └── proje_degerlendirme_rubrigi.md
└── projects/
    ├── 01_led_yak_sondur_temel_uygulamasi/
    │   ├── sketch.ino
    │   ├── diagram.json
    │   └── README.md
    └── ...
```

## Proje Listesi

| No | Proje | Kısa açıklama | Klasör |
|---:|---|---|---|
| 1 | LED Yak-Söndür Temel Uygulaması | ESP32 üzerinde bir LED’in belirli aralıklarla yanıp sönmesi sağlanır. Dijital çıkış mantığı öğretilir. | [`projects/01_led_yak_sondur_temel_uygulamasi`](projects/01_led_yak_sondur_temel_uygulamasi) |
| 2 | Butonla LED Kontrolü | Butona basıldığında LED yanar, bırakıldığında söner. Dijital giriş ve çıkış ilişkisi gösterilir. | [`projects/02_butonla_led_kontrolu`](projects/02_butonla_led_kontrolu) |
| 3 | Butonla Aç/Kapa Anahtarı | Her buton basışında LED’in durumu değişir. Toggle mantığı ve debounce öğretilir. | [`projects/03_butonla_ac_kapa_anahtari`](projects/03_butonla_ac_kapa_anahtari) |
| 4 | Trafik Lambası Simülasyonu | Kırmızı, sarı ve yeşil LED’ler belirli sırayla çalıştırılır. Zamanlama algoritması öğretilir. | [`projects/04_trafik_lambasi_simulasyonu`](projects/04_trafik_lambasi_simulasyonu) |
| 5 | Yaya Geçidi Butonlu Trafik Lambası | Butona basıldığında trafik ışığı yaya geçiş moduna alınır. Olay tabanlı kontrol anlatılır. | [`projects/05_yaya_gecidi_butonlu_trafik_lambasi`](projects/05_yaya_gecidi_butonlu_trafik_lambasi) |
| 6 | PWM ile LED Parlaklık Kontrolü | LED parlaklığı PWM ile azaltılıp artırılır. Dimmer mantığına giriş yapılır. | [`projects/06_pwm_ile_led_parlaklik_kontrolu`](projects/06_pwm_ile_led_parlaklik_kontrolu) |
| 7 | Potansiyometre ile Işık Şiddeti Ayarı | Potansiyometreden alınan analog değer LED parlaklığına dönüştürülür. Analog okuma öğretilir. | [`projects/07_potansiyometre_ile_isik_siddeti_ayari`](projects/07_potansiyometre_ile_isik_siddeti_ayari) |
| 8 | LDR ile Otomatik Gece Lambası | Ortam karardığında LED otomatik yanar. Işık sensörüyle aydınlatma otomasyonu kurulur. | [`projects/08_ldr_ile_otomatik_gece_lambasi`](projects/08_ldr_ile_otomatik_gece_lambasi) |
| 9 | LDR + PWM Akıllı Aydınlatma | Ortam ışığı azaldıkça LED parlaklığı artar. Enerji tasarruflu aydınlatma mantığı verilir. | [`projects/09_ldr_pwm_akilli_aydinlatma`](projects/09_ldr_pwm_akilli_aydinlatma) |
| 10 | PIR Hareket Sensörlü Koridor Lambası | Hareket algılanınca LED yanar, belirli süre sonra söner. Hareket tabanlı otomasyon yapılır. | [`projects/10_pir_hareket_sensorlu_koridor_lambasi`](projects/10_pir_hareket_sensorlu_koridor_lambasi) |
| 11 | Gece Modlu Hareketli Aydınlatma | LDR karanlık algılar ve PIR hareket algılarsa ışık yanar. Çoklu koşul mantığı öğretilir. | [`projects/11_gece_modlu_hareketli_aydinlatma`](projects/11_gece_modlu_hareketli_aydinlatma) |
| 12 | Kapı Açıldı Uyarı Sistemi | Buton veya reed switch kapı sensörü gibi kullanılır. Kapı açılınca LED veya buzzer çalışır. | [`projects/12_kapi_acildi_uyari_sistemi`](projects/12_kapi_acildi_uyari_sistemi) |
| 13 | Basit Hırsız Alarmı | PIR hareket algıladığında buzzer ve kırmızı LED aktif olur. Güvenlik senaryosu kurulur. | [`projects/13_basit_hirsiz_alarmi`](projects/13_basit_hirsiz_alarmi) |
| 14 | Şifreli Alarm Devreye Alma | Seri monitörden doğru şifre girilirse alarm aktif/pasif yapılır. Kullanıcı doğrulama mantığı anlatılır. | [`projects/14_sifreli_alarm_devreye_alma`](projects/14_sifreli_alarm_devreye_alma) |
| 15 | Servo Motorlu Akıllı Kapı Kilidi | Doğru şifre girildiğinde servo motor kapıyı açar. Aktüatör kontrolü gösterilir. | [`projects/15_servo_motorlu_akilli_kapi_kilidi`](projects/15_servo_motorlu_akilli_kapi_kilidi) |
| 16 | RFID Benzeri Kartlı Geçiş Simülasyonu | Seri monitörden girilen ID doğru kabul edilirse servo kilit açılır. Kimlik doğrulama senaryosu modellenir. | [`projects/16_rfid_benzeri_kartli_gecis_simulasyonu`](projects/16_rfid_benzeri_kartli_gecis_simulasyonu) |
| 17 | DHT22 ile Sıcaklık-Nem Ölçümü | DHT22 sensöründen sıcaklık ve nem okunur. Seri monitöre değer yazdırılır. | [`projects/17_dht22_ile_sicaklik_nem_olcumu`](projects/17_dht22_ile_sicaklik_nem_olcumu) |
| 18 | Sıcaklığa Göre Fan Kontrolü | Sıcaklık eşik değeri aşınca fanı temsil eden LED çalışır. Termostat mantığı öğretilir. | [`projects/18_sicakliga_gore_fan_kontrolu`](projects/18_sicakliga_gore_fan_kontrolu) |
| 19 | Nem Seviyesine Göre Havalandırma | Nem belirli değeri geçince fan aktif olur. Banyo/havalandırma otomasyonu simüle edilir. | [`projects/19_nem_seviyesine_gore_havalandirma`](projects/19_nem_seviyesine_gore_havalandirma) |
| 20 | Akıllı Termostat Sistemi | Sıcaklık düşükse ısıtıcı LED’i, yüksekse fan LED’i çalışır. İklimlendirme karar mantığı kurulur. | [`projects/20_akilli_termostat_sistemi`](projects/20_akilli_termostat_sistemi) |
| 21 | OLED Ekranlı Ortam İzleme | Sıcaklık, nem ve ışık seviyesi OLED ekranda gösterilir. Kullanıcı arayüzü temeli verilir. | [`projects/21_oled_ekranli_ortam_izleme`](projects/21_oled_ekranli_ortam_izleme) |
| 22 | LCD Ekranlı Akıllı Ev Paneli | Sensör değerleri LCD ekranda listelenir. Basit kontrol paneli tasarlanır. | [`projects/22_lcd_ekranli_akilli_ev_paneli`](projects/22_lcd_ekranli_akilli_ev_paneli) |
| 23 | Gaz Kaçağı Alarmı | Gaz sensörü simülasyonu için analog giriş kullanılır. Eşik aşılınca buzzer çalışır. | [`projects/23_gaz_kacagi_alarmi`](projects/23_gaz_kacagi_alarmi) |
| 24 | Duman/Yangın Uyarı Sistemi | Duman sensörü simülasyonu ile eşik aşılınca kırmızı LED ve buzzer aktif olur. | [`projects/24_duman_yangin_uyari_sistemi`](projects/24_duman_yangin_uyari_sistemi) |
| 25 | Su Baskını Alarmı | Su sensörü yerine analog giriş kullanılarak kaçak algılama simüle edilir. Su baskını uyarısı tasarlanır. | [`projects/25_su_baskini_alarmi`](projects/25_su_baskini_alarmi) |
| 26 | Akıllı Sulama Sistemi | Toprak nemi düşükse pompayı temsil eden LED çalışır. Otomatik sulama mantığı anlatılır. | [`projects/26_akilli_sulama_sistemi`](projects/26_akilli_sulama_sistemi) |
| 27 | Yağmur Algılayınca Pencere Kapatma | Yağmur sensörü tetiklenince servo motor pencereyi kapatır. Hava durumuna bağlı otomasyon yapılır. | [`projects/27_yagmur_algilayinca_pencere_kapatma`](projects/27_yagmur_algilayinca_pencere_kapatma) |
| 28 | Rüzgâr Uyarılı Tente Sistemi | Potansiyometre rüzgâr şiddeti gibi kullanılır. Eşik aşılınca tente servo ile kapanır. | [`projects/28_ruzg_r_uyarili_tente_sistemi`](projects/28_ruzg_r_uyarili_tente_sistemi) |
| 29 | Akıllı Perde Kontrolü | LDR değerine göre servo motor perdeyi açar veya kapatır. Gün ışığına bağlı kontrol gösterilir. | [`projects/29_akilli_perde_kontrolu`](projects/29_akilli_perde_kontrolu) |
| 30 | Sabah Otomatik Perde Açma | Zamanlayıcı mantığıyla servo motor belirli sürede perdeyi açar. Zaman tabanlı senaryo kurulur. | [`projects/30_sabah_otomatik_perde_acma`](projects/30_sabah_otomatik_perde_acma) |
| 31 | Akıllı Priz Simülasyonu | Röle modülüyle bir cihazın açılıp kapatılması simüle edilir. Yük kontrolü kavramı öğretilir. | [`projects/31_akilli_priz_simulasyonu`](projects/31_akilli_priz_simulasyonu) |
| 32 | Enerji Tasarruf Modu | Hareket yoksa ışık ve cihaz LED’leri otomatik kapanır. Yokluk senaryosu modellenir. | [`projects/32_enerji_tasarruf_modu`](projects/32_enerji_tasarruf_modu) |
| 33 | Oda Doluluk Algılama Sistemi | PIR hareket bilgisine göre odada kullanıcı var/yok kararı verilir. Varlık temelli kontrol yapılır. | [`projects/33_oda_doluluk_algilama_sistemi`](projects/33_oda_doluluk_algilama_sistemi) |
| 34 | Akıllı Banyo Fanı | Nem yüksekse fan çalışır, nem normale dönünce kapanır. Gerçekçi ev otomasyonu örneği sunulur. | [`projects/34_akilli_banyo_fani`](projects/34_akilli_banyo_fani) |
| 35 | Mutfak Güvenlik Sistemi | Gaz, duman ve sıcaklık bilgileri birlikte değerlendirilir. Çoklu sensörlü risk analizi yapılır. | [`projects/35_mutfak_guvenlik_sistemi`](projects/35_mutfak_guvenlik_sistemi) |
| 36 | Akıllı Gece Güvenlik Modu | Gece/hava karanlıkta hareket algılanırsa düşük ışık veya alarm senaryosu seçilir. | [`projects/36_akilli_gece_guvenlik_modu`](projects/36_akilli_gece_guvenlik_modu) |
| 37 | Seri Monitör Komutlu Ev Kontrolü | Kullanıcı seri monitöre komut yazarak LED, fan veya servo kontrol eder. Yazılım arayüzü mantığı öğretilir. | [`projects/37_seri_monitor_komutlu_ev_kontrolu`](projects/37_seri_monitor_komutlu_ev_kontrolu) |
| 38 | Web Kontrollü LED Sistemi | ESP32 Wi-Fi üzerinden basit web sayfasıyla LED kontrol edilir. Uzaktan kontrol kavramına giriş yapılır. | [`projects/38_web_kontrollu_led_sistemi`](projects/38_web_kontrollu_led_sistemi) |
| 39 | Wi-Fi Ortam İzleme Paneli | ESP32 sensör değerlerini web arayüzünde gösterir. IoT tabanlı veri izleme mantığı kurulur. | [`projects/39_wi_fi_ortam_izleme_paneli`](projects/39_wi_fi_ortam_izleme_paneli) |
| 40 | Mini Akıllı Ev Senaryo Sistemi | LDR, PIR, DHT22, buzzer ve servo birlikte kullanılır. Aydınlatma, güvenlik ve iklimlendirme tek projede birleştirilir. | [`projects/40_mini_akilli_ev_senaryo_sistemi`](projects/40_mini_akilli_ev_senaryo_sistemi) |

## Kullanım

Her proje klasörü bağımsız bir Wokwi/ESP32 örneğidir.

1. İlgili proje klasörüne girin.
2. `sketch.ino` içeriğini Wokwi Arduino editörüne aktarın.
3. `diagram.json` içeriğini Wokwi devre dosyasına aktarın.
4. Simülasyonu çalıştırın.
5. Seri monitörü 115200 baud olarak açın.

## Önerilen GitHub Yükleme Komutları

```bash
git init
git add .
git commit -m "Akıllı ev ESP32 Wokwi proje seti"
git branch -M main
git remote add origin https://github.com/KULLANICI_ADI/akilli-ev-esp32-wokwi.git
git push -u origin main
```

## Ders Kazanımları

- Dijital giriş ve çıkış mantığını kullanma
- Analog sensör verilerini okuma
- Eşik değerine göre karar verme
- Sensör ve aktüatör ilişkisini kurma
- Basit akıllı ev senaryoları tasarlama
- ESP32 ile Wi-Fi tabanlı kontrol ve izleme mantığını kavrama


## Lisans ve Atıf

Bu depodaki kaynak kodlar ve uygulama dosyaları MIT Lisansı ile paylaşılmıştır.

Bu proje eğitim ve öğretim amacıyla hazırlanmıştır. Kodların, devre şemalarının,
ders materyallerinin, proje açıklamalarının veya bu materyalden türetilmiş
çalışmaların kullanılması durumunda aşağıdaki şekilde kaynak gösterilmesi
ahlaki ve akademik olarak beklenir:

**Abdullah ATILGAN, "Akıllı Ev Otomasyon Sistemleri - ESP32 Wokwi Temel Uygulamalar Proje Seti", 2026. https://github.com/bdllhtlgn1/IOT-Temel-Uygulamalar**

Önerilen atıf biçimi:

```text
Atilgan, A. (2026). Akıllı Ev Otomasyon Sistemleri - ESP32 Wokwi Temel Uygulamalar Proje Seti. GitHub Repository.
```

Ayrıntılar için `LICENSE`, `NOTICE` ve `CITATION.cff` dosyalarına bakınız.
