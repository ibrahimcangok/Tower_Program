#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Çarpım/Bölüm/Kule yüksekliği sorusu
	
	int sayi1,sayi2;
	/*burada while döngüsüyle 0 dan küçük değer giriyorsak hata komutunu verdirtiyoruz
	0 dan büyük olana kadar tekrar tekrar sayıları alma işlemini uyguluyoruz */
	
	while(1)
	{
		printf("Iki adet sifirdan buyuk tamsayi giriniz: ");
		scanf("%d%d",&sayi1,&sayi2);
		
	    if(sayi1<=0 || sayi2<=0)
		{
			printf("Hata!! Sayilar sifirdan buyuk olmali \n");
		}
		else
		{
			break;
		}
	}
	//program çıktısına göre birinci ve ikinci sayıları aralarında boşluk olucak şekilde yazdırıyoruz
	
	printf("Birinci Sayi                     Ikinci Sayi \n");
	//ilk sayı kalansız bölünecek ve tek sayılarda ikinci sayının değeri elde tutularak birinci sayı 1 olana kadar toplanacak
	//ikinci sayı ise birinci sayı 1 olana kadar sürekli 2 ile çarpılacak ona göre değişkenleri isimlere göre eşitledik
	int i;
	int s1bolme = sayi1;
	int s2toplam = 0;
	int dongu = 0;
	int sayimtoplam = sayi2;
	
	//for döngüsüyle i değişkenini ilk girdiğimiz değere atadık ne kadar büyükse o değerden 1 e kadar döndürdük
	for(i = sayi1; i>=1;)
	{
		//sayı 1 den küçükse break komutuyla hata vermesini engeller
		if(i<1)
		{
			break;
		}
		else
		{
			//sayıları yanyana ekranda düzgün çıkabilmesi için ilk işlemde sayi1'i ekrana yazdırıyoruz
			printf("%d                                 ",s1bolme);	
		}
		//bir sonraki işlemde ise 2. girdiğimiz sayi olarak yan tarafa sayi2 nin karşılık değerine gelen sayimtoplam değişkenini yazdırıyoruz
		printf("%d \n",sayimtoplam);
		
		//burdaki işlemde ilk girdiğimiz sayı eğer tek sayı ise ikinci sayı değerinin üstüne ekleyerek programı devam ettirir
		if(s1bolme % 2 != 0)
		{
			s2toplam = s2toplam + sayimtoplam;
		}
		//ikinci sayıyı her alt satırda 2 ile çarpılır
		sayimtoplam *=2;
		
		//birinci sayıyı ise her alt satırda 2'ye böldürüyoruz
		s1bolme = i/2;
			
		//forda kullandığımız i değişkenini sayi1'e karşılık geldiğini yazdırıyoruz
		i = s1bolme;
		
		//ve en önemli olarak dongu komutunu arttırmanın önemini kulenin yüksekliği satır sayısı ne kadar ise o kadar yüksekliğe sahip olduğunu kanıtlarız
		dongu++;
	}
	//yukarda yaptığımız formüllere karşılık olarak bulduğumuz sonucu ve kulenin yükseliğini aşşağıda yazdırırız
	printf("-------------------------------------------- \n");
	printf("Carpim Kulesi Ile Hesaplanan Sonuc= %d \n",s2toplam);
	printf("Kule Yuksekligi= %d \n",dongu);
	return 0;
}
