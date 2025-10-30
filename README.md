# C Dersleri (c-dersleri)

## PROJENİN AMACI

Bu proje, İstanbul Gelişim Üniversitesi Yazılım Mühendisliği 1. sınıf öğrencilerinin C dilinde öğrendiklerini uygulamalı şekilde geliştirmesi ve ortak bir GitHub deposu üzerinden paylaşması amacıyla oluşturulmuştur.
Her katılımcı, kendi adına açılmış bir klasörde çalışarak bireysel katkı yapar. Amaç, birlikte öğrenmek, kod disiplini kazanmak ve Git–GitHub ortamına alışmaktır.

Projenin kuralları zor geliyorsa ayrılmanızı rica ederim. Konfor alanında değil, baskı altında öğrenilir.
Proje sonunda herkesin kendi CV’sine ve deneyimine ekleyebileceği bir açık kaynak proje geçmişi olacak.
İlk ayda hemen katılım sağlanması beklenmemelidir; hepimiz yolun başındayız ve öğreneceğimiz çok şey var.

## PROJE YAPISI
Her katılımcı için proje ana dizininde bir klasör bulunur.

Örnek yapı:

```text
ana proje dizini /
│
├─ Ali_Veli
├─ Ahmet_Yilmaz
├─ Aysenur_Gurses
└─ Ismail_Sen
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

3. Çalışmaya Başlamadan Önce Son Güncellemeleri Alma (Zorunlu)
   Yerelde çalışmaya başlamadan önce ana depodaki en güncel halleri alın:

```
git switch main
git fetch origin
git pull --rebase origin main
```

Not: Rebase sırasında çatışma (conflict) oluşursa ilgili dosyaları düzeltin, ardından:

```
git add <duzeltilen-dosyalar>
git rebase --continue
```

4. Klasör Ekleme ve Düzenleme
   Her öğrenci yalnızca kendi klasöründe çalışmalıdır. Klasör adı Ad_Soyad formatında olmalı, Türkçe karakter kullanılmamalıdır.

```
mkdir Ad_Soyad
cd Ad_Soyad
echo "// ilk örnek dosya" > ornek.c
```

5. Değişiklikleri Kaydetme ve Gönderme
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

6. Yönetici Onayı ve Denetim
   Her commit yöneticiler tarafından düzenli olarak gözden geçirilir. Uygun olmayan değişiklikler (örneğin başkasının klasörüne müdahale) geri alınabilir veya silinebilir. Proje bütünlüğü düzenli aralıklarla kontrol edilir.

> [!WARNING]
> ### MÜDAHALE
> Yazdığınız kodlara başkası tarafından müdahale edilirse, dosyalarınızı tekrar düzenleyip gönderin veya durumu [proje yöneticisi](mailto:hattab1342@gmail.com) ne bildirin (email).

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

## HEDEFLER

- C dili pratiği yapmak
- Git ve GitHub akışını öğrenmek
- Kodlama disiplinini kazanmak
- Ortak çalışma kültürünü geliştirmek
- Katkı geçmişiyle özgeçmişe referans sağlayacak bir yazılım projesi oluşturmak


## Katkı Sağlayanlar

Bu projeye katkı sağlayan öğrenciler aşağıda listelenmiştir.  
(GitHub profil fotoğraflarına tıklayarak profillerine ulaşabilirsiniz.)

<p align="center">
  <a href="https://github.com/iguGH2025">
    <img src="https://avatars.githubusercontent.com/iguGH2025" width="70" height="70" style="border-radius:50%;" alt="iguGH2025"/>
  </a>
  <a href="https://github.com/trs-1342">
    <img src="https://avatars.githubusercontent.com/trs-1342" width="70" height="70" style="border-radius:50%;" alt="trs-1342"/>
  </a>
  <a href="https://github.com/sara-rezk">
    <img src="https://avatars.githubusercontent.com/sara-rezk" width="70" height="70" style="border-radius:50%;" alt="trs-1342"/>
  </a>
</p>

> [!NOTE]
> Katkıda bulunmak isteyen öğrenciler yöneticiden davet almalı ve katkıları onaylandıktan sonra bu listeye eklenir.
