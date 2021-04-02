#include <stdio.h>
#include <stdlib.h>



    int i=0;
    int tc_kimlik[50];
    float aylik_brut;
    char ad[50],soyad[50];
    char medeni_hal[50],evli[50],bekar[50],calisiyor,calismiyor,calisma_durumu,engellilik_durumu,engelli, engelli_degil;
    int ek_odenek,muaf,engellilik_orani,cocuk_sayisi;
    float maas1,maas2,maas3, aylik_toplam_brut[50],aylik_net_brut[50],gelir_vergisi_orani[50];
   float aylik_brut=1777.5;
    int secim;

    int main ()
 {
     do {
        printf("\n \n \n \n");
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n \n \n \n ");
        printf("\t PERSONEL BILGILERINI GIRMEK ICIN 1 ' i TUSLAYINIZ..\t \t \n");
        printf("\t TUM CALISAN ISTATISTIKLERINI GORMEK ICIN 2 'yi TUSLAYINIZ.. \t \t \n");
        printf("\t CIKMAK ICIN 3' u TUSLAYINIZ..\t \t \n \n \n \n ");
        printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n \n \n \n ");
        scanf("%d",&secim);


     }
     while(secim<0 || secim>3);
     if(secim==1)
     {

         verileriGirdir();
     }

if(secim==2)
{
    istatistikleriGoster();
}

  return 0;
 }

 void verileriGirdir()
 {

    printf("Tc Kimlik No: ");
    scanf("%d", &tc_kimlik);
    tc_kimlik[i]=tc_kimlik;

    printf("\n Ad ve Soyad: ");
    scanf("%s %s", &ad[i], &soyad[i]);
    ad[i]=ad;
    soyad[i]=soyad;

    printf("\n aylik brut ucreti :%.2f", aylik_brut);
    printf("\nmedeni haliniz (e/b): ");
    scanf(" %c",&medeni_hal[i]);
    medeni_hal[i]=medeni_hal;

if(medeni_hal=='e')
{
        printf("\n evli",evli[i]);
        evli[i]=evli;
        printf("\n esiniz calisiyor mu (E/H): ");
        scanf(" %c",&calisma_durumu);
     if(calisma_durumu=='E')
        {
            printf("evet\n");
        }
        else if (calisma_durumu=='H')
        {
            printf("hayir\n");
         ek_odenek=220;
         maas1=aylik_brut+ek_odenek;
         printf("%f\n",maas1);
        }

}
    else if (medeni_hal=='b')
{

    printf("bekar\n",bekar[i]);
    bekar[i]=bekar;

}

 printf("bakmakla yukumlu oldugunuz cocuk sayisi: ");
 scanf("%d",&cocuk_sayisi);
 if(cocuk_sayisi==0)
 {
      aylik_toplam_brut[i]=aylik_brut;

      printf("\n%.2f",aylik_toplam_brut[i]);

       if(aylik_toplam_brut[i]<2000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*15;
           printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }
       else if(aylik_toplam_brut[i]>=2000 && aylik_toplam_brut[i]<5000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*20;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }

      else if(aylik_toplam_brut[i]>=5000 && aylik_toplam_brut[i]<10000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*27;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }
      else if(aylik_toplam_brut[i]>=10000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*35;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }

 aylik_net_brut[i]=(aylik_toplam_brut[i])-(gelir_vergisi_orani[i]);
printf("\naylik net brut: %4.2f",aylik_net_brut[i]);




int para,kalan1,kalan2,kalan3,kalan4,kalan,iki_yuzluk,yuzluk,onluk,ellilik,beslik,birlik;

printf ("\n\nPara Miktarini Giriniz.:");
scanf ("%d",&para);
if ( (para%200==0)||(para%200!=0) )
{
iki_yuzluk=((para)/200);
printf ("\n%d  iki yuzluk var\n",iki_yuzluk);
}
kalan=para-(iki_yuzluk*200);

if ( (kalan%100==0)||(kalan%100!=0) )
{
yuzluk=((kalan)/100);
printf ("%d yuzluk var\n",yuzluk);
}
kalan1=kalan-(yuzluk*100);
if ( ( kalan1%50==0)||(kalan1%50!=0) )
{
ellilik=(kalan1/50);
printf("%d ellilik var\n",ellilik);
}
kalan2=kalan1-(ellilik*50);
if ( ( kalan1%10==0)||(kalan1%10!=0) )
{
onluk=kalan2/10;
printf("%d onluk var\n",onluk);

}
kalan3=kalan2-(onluk*10);
if ( ( (kalan3%5==0) ||(kalan3%5!=0) )&&(kalan3>=5))
{
beslik=kalan3/5;
printf("%d beslik var\n",beslik);
}
kalan4=kalan3-(beslik*5);
if ( ( (kalan4%1==0) ||(kalan4%1!=0) )&&(kalan4>=1))
{
birlik=kalan4/1;
printf("%d birlik var\n",birlik);
}


getch();
 }
 if(cocuk_sayisi>0)
 {
     if(cocuk_sayisi<=6)
 {
     ek_odenek=cocuk_sayisi*25;
     maas2=aylik_brut+ek_odenek;
      printf("%f\n",maas2);
 }
 else if(cocuk_sayisi>6)
 {
     ek_odenek=cocuk_sayisi*45;
     maas2=aylik_brut+ek_odenek;
      printf("%f\n",maas2);
 }
  printf("cocugunuz engellilik durumu var mi (E/H): ");
  scanf(" %c",&engellilik_durumu);
  if(engellilik_durumu=='E')
  {
      printf("engelli\n");
  printf("engellilik oranini giriniz (1 ile 100 arasinda): ");
  scanf("%d",&engellilik_orani);
  if(engellilik_orani>=80 && engellilik_orani<=100)
  {
      printf("1.dereceden engelli\n");
      muaf=900;
      maas3=maas2-muaf;
       printf("%f\n",maas3);
  }
    else if(engellilik_orani>=60 && engellilik_orani<80)
    {
        printf("2.dereceden engelli\n");
        muaf=470;
        maas3=maas2-muaf;
         printf("%f\n",maas3);
    }
  else if(engellilik_orani>=40 && engellilik_orani<60)
  {
      printf("3.dereceden engelli\n");
      muaf=210;
      maas3=maas2-muaf;
       printf("%f\n",maas3);
  }
  }
  else if(engellilik_durumu=='H')
  {
      printf("engelli degil\n");
  }

 }
 else
 {
     printf("yok\n");

 if(medeni_hal=='b')
    printf("\n%f",aylik_toplam_brut[i]=aylik_brut);

}



     aylik_toplam_brut[i]=(maas1)+(maas2)+(maas3);
      printf("\n%2.f",aylik_toplam_brut[i]);

       if(aylik_toplam_brut[i]<2000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*15;
           printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }
       else if(aylik_toplam_brut[i]>=2000 && aylik_toplam_brut[i]<5000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*20;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani);
       }

      else if(aylik_toplam_brut[i]>=5000 && aylik_toplam_brut[i]<10000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*27;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }
      else if(aylik_toplam_brut[i]>=10000)
       {
           gelir_vergisi_orani[i]=(aylik_toplam_brut[i]/100)*35;
            printf("\ngelir vergisi orani: %4.2f",gelir_vergisi_orani[i]);
       }
 aylik_net_brut[i]=(aylik_toplam_brut[i])-(gelir_vergisi_orani[i]);
printf("\naylik net brut: %4.2f",aylik_net_brut[i]);



int para,kalan1,kalan2,kalan3,kalan4,kalan,iki_yuzluk,yuzluk,onluk,ellilik,beslik,birlik;

printf ("\n\nPara Miktarini Giriniz.:");
scanf ("%d",&para);
if ( (para%200==0)||(para%200!=0) )
{
iki_yuzluk=((para)/200);
printf ("\n%d  iki yuzluk var\n",iki_yuzluk);
}
kalan=para-(iki_yuzluk*200);

if ( (kalan%100==0)||(kalan%100!=0) )
{
yuzluk=((kalan)/100);
printf ("%d yuzluk var\n",yuzluk);
}
kalan1=kalan-(yuzluk*100);
if ( ( kalan1%50==0)||(kalan1%50!=0) )
{
ellilik=(kalan1/50);
printf("%d ellilik var\n",ellilik);
}
kalan2=kalan1-(ellilik*50);
if ( ( kalan1%10==0)||(kalan1%10!=0) )
{
onluk=kalan2/10;
printf("%d onluk var\n",onluk);

}
kalan3=kalan2-(onluk*10);
if ( ( (kalan3%5==0) ||(kalan3%5!=0) )&&(kalan3>=5))
{
beslik=kalan3/5;
printf("%d beslik var\n",beslik);
}
kalan4=kalan3-(beslik*5);
if ( ( (kalan4%1==0) ||(kalan4%1!=0) )&&(kalan4>=1))
{
birlik=kalan4/1;
printf("%d birlik var\n",birlik);
}
getch();
i++;
main();
return 1;
 }


void istatistikleriGoster()
{
    int i,j;
    int toplam,toplam1;

  for(i=0; i<aylik_net_brut[i]; i++)
  {
      toplam1= toplam1+aylik_net_brut[i];

  }
  printf("tum calisanlara bir ayda odenen aylik toplam net ucret:%4.2f \n",toplam1);
for(i=0; i<gelir_vergisi_orani[i]; i++)
{
    toplam=toplam+gelir_vergisi_orani[i];

 }
 printf("devlete aktarilan toplam gelir vergisi tutari: %4.2f \n",toplam);
     for(i=0; i< aylik_toplam_brut[i]; i++)
     {
         toplam= toplam+ aylik_toplam_brut[i];
     }
    float ortalama=toplam/i;
     printf("tum calisanlarin aylik toplam brut ucretleri ortalamasi:%.2f\n",ortalama);
     for(i=0; i<aylik_net_brut[i]; i++)
     {
          toplam1= toplam1+aylik_net_brut[i];
     }
   ortalama=toplam1/i;
  printf("tum calisanlarin aylik toplam net ucretlerinin ortalamasi:%.2f\n",ortalama);

}

