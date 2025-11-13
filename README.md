# C Dersleri (c-dersleri)

## PROJENİN AMACI
---
> [!WARNING]
> proje yöneticisi, geçici bir süreliğine düzenleme yapamamaktadır. en kısa sürede tekrar gelip güncellemeleri yapacaktır, beklemede kalın.
21 ust
Bu proje, İstanbul Gelişim Üniversitesi Yazılım Mühendisliği 1. sınıf öğrencilerinin C dilinde öğrendiklerini uygulamalı şekilde geliştirmesi ve ortak bir GitHub deposu üzerinden paylaşması amacıyla oluşturulmuştur.
Her katılımcı, kendi adına açılmış bir klasörde çalışarak bireysel katkı yapar. Amaç, birlikte öğrenmek, kod disiplini kazanmak ve Git–GitHub ortamına alışmaktır.

Projenin kuralları zor geliyorsa ayrılmanızı rica ederim. Konfor alanında değil, baskı altında öğrenilir.
Proje sonunda herkesin kendi CV’sine ve deneyimine ekleyebileceği bir açık kaynak proje geçmişi olacak.
İlk ayda hemen katılım sağlanması beklenmemelidir; hepimiz yolun başındayız ve öğreneceğimiz çok şey var.

> [!IMPORTANT]
> proje tanıtım [Sitesi](https://cdws.vercel.app) geliştirilmiştir.

## KATILIM KURALLARI

1. Her öğrenci klasör adı olarak kendi adını ve soyadını Türkçe karakter kullanmadan yazmalıdır. (örnek: Halil_Hattab)
2. Her öğrenci yalnızca kendi klasöründe dosya oluşturabilir, silebilir veya düzenleyebilir.
3. Kodlarda Türkçe karakter kullanılmaz (örnek: ğ, ü, ş, ö, ç, ı).
4. Kod dosyaları anlamlı isimler taşımalıdır (örnek: faktoriyel.c, dizi_ortalama.c).
5. Kod içinde açıklayıcı yorum satırları bulunmalıdır.
6. Her kod derlenebilir durumda olmalıdır. Hatalı veya eksik kod yüklenmemelidir; hatalıysa düzeltilmelidir.
6. Git işlemleri düzenli yapılmalıdır. Katılımcıların bu komutları kendilerinin öğrenmesi ve uygulaması beklenir:
   Yeni dosya eklemek için: git add .
   Açıklayıcı mesajla commit atmak için: git commit -m "Yeni ödev eklendi"
   Değişiklikleri GitHub’a göndermek için: git push
7. Başkalarının klasörlerine yapılan yanlışlıkla değişiklikler tespit edilirse commit geri alınmalıdır. Tekrarlanırsa katılımcı projeden çıkarılır.
8. Projeler haftalık olarak kontrol edilir.
9. Her katılımcı kendi GitHub hesabıyla katkı sağlar. Commit’ler kendi kullanıcı adlarıyla görüneceği için sistem otomatik olarak katkıyı algılar.

## BELGELENDİRME

Her klasör içinde kısa bir README.md dosyası bulunmalı ve aşağıdaki bilgileri içermelidir:
1. Projenin adı
2. Ne amaçla yazıldığı
3. Kısa çalışma açıklaması
4. Derleme ve çalıştırma komutları.

> [!CAUTION]
> projede bulunan `.git` klasörünü **asla dokunmayın**.

## PROJE YAPISI
Her katılımcı için proje ana dizininde bir klasör bulunur.

Örnek yapı:

```text
ana proje dizini /
│
├─ Ali_Veli        <== örnek klasör adı
├─ Ahmet_Yilmaz    <== örnek klasör adı
├─ Aysenur_Gurses  <== örnek klasör adı
├─ Ismail_Sen      <== örnek klasör adı
└─ README.md       <== proje bilgilendirmesi
```

---

# İNDİRME VE DÜZENLEME SİSTEMİ

> [!WARNING]
> daha detaylı anlatım için lütfen [Proje Kullanım Klavuzu](https://github.com/iguGH2025/c-dersleri/tree/main/Proje_Kullanim_Klavuzu)'na bakınız.

Bu proje doğrudan main branch üzerinde çalışacak şekilde yapılandırılmıştır. Katılımcıların proje dosyalarına erişebilmesi ve düzenleme yapabilmesi için yönetici onayıyla davet edilmesi gerekir.

1. Katılım ve Erişim İzni
   Projeye katkı yapmak isteyen öğrenciler önce yöneticiden izin almak zorundadır. Yönetici, katılmak isteyen kullanıcının GitHub kullanıcı adını aldıktan sonra, e-posta adresine davet (invite) gönderir. Daveti kabul eden kullanıcı projeye yazma izni kazanır ve main branch üzerinde düzenleme yapabilir.
   Katkı talebi için iletişim adresi: [igu2025gh@hotmail.com](mailto:igu2025gh@hotmail.com)

2. Projeyi İndirme (Klonlama)
   Daveti kabul ettikten sonra proje kendi bilgisayarına şu şekilde indirilir:

```
git clone https://github.com/iguGH2025/c-dersleri.git
cd c-dersleri
```

3. Git Kullanıcı Bilgisini Ayarlama **(Zorunlu İlk Adım)**
   Eğer ilk kez Git kullanıyorsanız veya commit sırasında aşağıdakine benzer bir uyarı alırsanız:

```
Author identity unknown
*** Please tell me who you are.
Run
git config --global user.email "you@example.com"
git config --global user.name "Your Name"
```
   Bu durumda, kendi adınızı ve GitHub e-posta adresinizi yazarak aşağıdaki komutları çalıştırın:

```
git config --global user.name "Adınız Soyadınız"
git config --global user.email "github_email_adresiniz@example.com"
```

   Bu ayarları bir kez yaptıktan sonra, tüm projelerde geçerli olur.
   Eğer sadece bu proje için geçerli olmasını istiyorsanız --global parametresini kaldırabilirsiniz.


4. Çalışmaya Başlamadan Önce Son Güncellemeleri Alma (Zorunlu)
   Yerelde çalışmaya başlamadan önce ana depodaki en güncel halleri alın:

```
git switch main
git fetch origin
git pull origin main
```

Not: Rebase sırasında çatışma (conflict) oluşursa ilgili dosyaları düzeltin, ardından:

```
git add <duzeltilen-dosyalar>
git rebase --continue
```

5. Klasör Ekleme ve Düzenleme
   Her öğrenci yalnızca kendi klasöründe çalışmalıdır. Klasör adı Ad_Soyad formatında olmalı, Türkçe karakter kullanılmamalıdır.

```
mkdir Ad_Soyad
cd Ad_Soyad
echo "// ilk örnek dosya" > ornek.c
```

6. Değişiklikleri Kaydetme ve Gönderme
   Yapılan değişiklikler doğrudan main branch’ine eklenir:

```
git add .
git commit -m "Ad_Soyad klasörü içinde ornek.c eklendi"
git push origin main
```

Eğer push sırasında “önce günceli çek” uyarısı alırsanız, tekrar:

```
git pull --rebase origin main
git push origin main
```

7. Yönetici Onayı ve Denetim
   Her commit yöneticiler tarafından düzenli olarak gözden geçirilir. Uygun olmayan değişiklikler (örneğin başkasının klasörüne müdahale) geri alınabilir veya silinebilir. Proje bütünlüğü düzenli aralıklarla kontrol edilir.

> [!WARNING]
> ### MÜDAHALE
> Yazdığınız kodlara başkası tarafından müdahale edilirse, dosyalarınızı tekrar düzenleyip gönderin veya durumu [proje yöneticisi](mailto:hattab1342@gmail.com) ne bildirin (email).

## HEDEFLER

- C dili pratiği yapmak
- Git ve GitHub akışını öğrenmek
- Kodlama disiplinini kazanmak
- Ortak çalışma kültürünü geliştirmek
- Katkı geçmişiyle özgeçmişe referans sağlayacak bir yazılım projesi oluşturmak

<h2 align="center">Katkı Sağlayanlar</h2>

<p align="center">
  Bu projeye katkı sağlayan öğrenciler aşağıda listelenmiştir. <br/>
  (GitHub profil fotoğraflarına tıklayarak profillerine ulaşabilirsiniz.)
</p>

<p align="center">
  <a href="https://github.com/iguGH2025" title="iguGH2025">
    <img src="https://images.weserv.nl/?url=avatars.githubusercontent.com/iguGH2025&h=70&w=70&fit=cover&mask=circle" width="70" height="70" alt="iguGH2025"/>
  </a>
  <a href="https://github.com/trs-1342" title="trs-1342">
    <img src="https://images.weserv.nl/?url=avatars.githubusercontent.com/trs-1342&h=70&w=70&fit=cover&mask=circle" width="70" height="70" alt="trs-1342"/>
  </a>
  <a href="https://github.com/sara-rezk" title="sara-rezk">
    <img src="https://images.weserv.nl/?url=avatars.githubusercontent.com/sara-rezk&h=70&w=70&fit=cover&mask=circle" width="70" height="70" alt="sara-rezk"/>
  </a>
  <a href="https://github.com/qusaitahan2007-debug" title="qusaitahan2007-debug">
    <img src="https://images.weserv.nl/?url=avatars.githubusercontent.com/qusaitahan2007-debug&h=70&w=70&fit=cover&mask=circle" width="70" height="70" alt="qusaitahan2007-debug"/>
  </a>
   <a href="https://github.com/65SH" title="65SH">
    <img src="https://images.weserv.nl/?url=avatars.githubusercontent.com/65SH&h=70&w=70&fit=cover&mask=circle" width="70" height="70" alt="65SH"/>
  </a>
</p>


> [!NOTE]
> Katkıda bulunmak isteyen öğrenciler yöneticiden davet almalı ve katkıları onaylandıktan sonra bu listeye eklenir.

---

### Proje Yöneticisi
- [trs-1342](https://github.com/trs-1342)
