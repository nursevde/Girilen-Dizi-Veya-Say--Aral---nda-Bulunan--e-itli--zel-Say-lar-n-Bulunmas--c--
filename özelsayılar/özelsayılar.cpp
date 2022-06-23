/*****************************************************************************
**
**                         SAKARYA ÜNÝVERSÝTESÝ
**                        FEN EDEBÝYAT FAKÜLTESÝ
**                           MATEMATÝK BÖLÜMÜ
**                      PROGRAMLAMAYA GÝRÝÞ DERSÝ
**                   
**                    ÖDEV NUMARASI....: 2
**                    ÖÐRENCÝ ADI......: Sevdenur AK
**                    ÖÐRENCÝ NUMARASI.: B180200034
**                    DERS GRUBU.......: 1
**
*******************************************************************************/


#include <iostream>
#include <cmath>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//Burada diziyi alýp her bir elemanýn tau sayýsý olup olmadýðýný kontrol ediyoruz.
bool TauSayiMi(int sayi)
{
	int bolen=1; //Her zaman girilen sayýlar 1'e bölünebilir.
	int miktar=0; //Bölen sayýsýnýn miktarý.
	
	do
    {
		if(sayi%bolen==0) //Sayýyý bölene böldüðümüzde kalan sýfýr ise miktarý ve böleni bir arttýrýyoruz.
	    	miktar++;
	    bolen++;	
	    	
	}while(bolen != sayi+1); 
	
	if(sayi%miktar==0) //Girilen sayý bölen miktarýna bölündüðünde kalan sýfýr oluyorsa tau sayýsý oluyor.
     	return sayi;
     	
	        else 
	          return 0;
}

//Burada tau sayýsý olan ve olmayan sayýlarý ekrana yazdýrýyoruz.
void TauSayilariBul(int arr[], int size)
{
	int TauSayilar[size]; //Tau sayýsý olan sayýlar.
	int naTauSayilar[size]; //Tau sayýsý olmayan sayýlar.
	
	int TauSayiSize=0;
	int naTauSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])) //Girilen dizideki elemanlarýn tau sayýsý olup olmadýðýna bakýyor. Tau sayýsý ise miktarý bir arttýrýyor.
		{
			TauSayilar[TauSayiSize]=arr[i];
			TauSayiSize++;
		}
		else   //Tau sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naTauSayilar[naTauSayiSize]=arr[i];
			naTauSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<TauSayiSize;i++)
	{
		cout<< TauSayilar[i] << " ";
	}
	
	if(TauSayiSize!=0)//Eðer hiç tau sayýsý yoksa yazý yazýlmasýn diye.
	    cout<<"Tau sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauSayiSize;i++)
	{
		cout<< naTauSayilar[i] << " ";
	}
	
	if(naTauSayiSize!=0) //Eðer bütün sayýlar tau sayýsý ise yazý yazýlmasýn diye.
	    cout<<"Tau sayi(lar) degildir.\n";
	
}

//Burada diziyi alýp her bir elemanýn wooddall sayýsý olup olmadýðýný kontrol ediyoruz.
bool WooddallSayiMi(int sayi)
{
     
    if(sayi%2==0)
    {
        return false;
    }
     
    if(sayi==1)
    {
        return true;
    }
     
     sayi++;
     
    int n=0;
    while (sayi%2==0)
    {
        sayi=sayi/2;
        n++;

        if(n==sayi)
        {
            return true;
        }
    }

    return false; 
    
}

//Burada wooddall sayýsý olan ve olmayan sayýlarý ekrana yazdýrýyoruz.
void WooddallSayilariBul(int arr[], int size)
{
	int WooddallSayilar[size]; //Wooddall sayýsý olan sayýlar.
	int naWooddallSayilar[size]; //Wooddall sayýsý olmayan sayýlar.
	
	int WooddallSayiSize=0;
	int naWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(WooddallSayiMi(arr[i]))//Girilen dizideki elemanlarýn wooddall sayýsý olup olmadýðýna bakýyor. Wooddall sayýsý ise miktarý bir arttýrýyor.
		{
			WooddallSayilar[WooddallSayiSize]=arr[i];
			WooddallSayiSize++;
		}
		else //Wooddall sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naWooddallSayilar[naWooddallSayiSize]=arr[i];
			naWooddallSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<WooddallSayiSize;i++)
	{
		cout<< WooddallSayilar[i] << " ";
	}
	
	if(WooddallSayiSize!=0)//Eðer hiç wooddall sayýsý yoksa yazý yazýlmasýn diye.
	    cout<<"Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naWooddallSayiSize;i++)
	{
		cout<< naWooddallSayilar[i] << " ";
	}
	
	if(naWooddallSayiSize!=0)//Eðer bütün sayýlar wooddall sayýsý ise yazý yazýlmasýn diye.
	    cout<<"Wooddall sayi(lar) degildir.\n";
	
}

//Burada diziyi alýp her bir elemanýn fermat sayýsý olup olmadýðýný kontrol ediyoruz.
bool FermatSayiMi(int sayi)
{

    if(sayi%2==0)
    {
        return false;
    }
     
    if(sayi==1)
    {
        return false;
    }
   
	
	sayi--;
	
	int n=0;
	
	while(n<sayi) 
	{
		if(sayi%2==0) 
		{
				
            if(sayi==pow(2,pow(2,n))) //Ýki üzeri iki üzeri n ifadesi sayýya eþit ise fermat sayýsý olur.
            {
                return true;
            }
    		
        }
        n++;
		
    }
    
    return false;

}

//Burada fermat sayýsý olan ve olmayan sayýlarý ekrana yazdýrýyoruz.
void FermatSayilariBul(int arr[], int size)
{
	int FermatSayilar[size];//Fermat sayýsý olan sayýlar.
	int naFermatSayilar[size];//Fermat sayýsý olmayan sayýlar.
	
	int FermatSayiSize=0;
	int naFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(FermatSayiMi(arr[i]))//Girilen dizideki elemanlarýn fermat sayýsý olup olmadýðýna bakýyor. Fermat sayýsý ise miktarý bir arttýrýyor.
		{
			FermatSayilar[FermatSayiSize]=arr[i];
			FermatSayiSize++;
		}
		else //Fermat sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naFermatSayilar[naFermatSayiSize]=arr[i];
			naFermatSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<FermatSayiSize;i++)
	{
		cout<< FermatSayilar[i] << " ";
	}
	
	if(FermatSayiSize!=0)//Eðer hiç fermat sayýsý yoksa yazý yazýlmasýn diye.
	    cout<<"Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naFermatSayiSize;i++)
	{
		cout<< naFermatSayilar[i] << " ";
	}
	
	if(naFermatSayiSize!=0)//Eðer bütün sayýlar fermat sayýsý ise yazý yazýlmasýn diye.
	    cout<<"Fermat sayi(lar) degildir.\n";
	
}

//Burada diziyi alýp her bir elemanýn mükemmel sayý olup olmadýðýný kontrol ediyoruz.
bool MukemmelSayiMi(int sayi)
{
	int toplam=1; //1 her zaman bölendir.
	
	//Bir sayýnýn bölenleri karekökünden yukarý çýkmaz bu yüzden bölen karesine kadar kontrol ediyoruz.
	
	for(int i=2;i*i<=sayi;i++)
	{
		if(sayi%2==0)
		{
			if(i*i!=sayi)
		    	toplam=toplam+i+sayi/2;
			else
		    	toplam=toplam+i;
		}
	}
	
	if(toplam == sayi&&sayi != 1) // 1 mükemmel sayi deðildir.
	   return true;
	
	return false;
}

//Burada mükemmel sayý olan ve olmayan sayýlarý ekrana yazdýrýyoruz.
void MukemmelSayilariBul(int arr[], int size)
{
	int MukemmelSayilar[size];//Mükemmel sayý olan sayýlar.
	int naMukemmelSayilar[size];//Mükemmel sayý olmayan sayýlar.
	
	int MukemmelSayiSize=0;
	int naMukemmelSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i]))//Girilen dizideki elemanlarýn mükemmel sayýsý olup olmadýðýna bakýyor. Mükemmel sayýsý ise miktarý bir arttýrýyor.
		{
			MukemmelSayilar[MukemmelSayiSize]=arr[i];
			MukemmelSayiSize++;
		}
		else //Mükemmel sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naMukemmelSayilar[naMukemmelSayiSize]=arr[i];
			naMukemmelSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<MukemmelSayiSize;i++)
	{
		cout<< MukemmelSayilar[i] << " ";
	}
	
	if(MukemmelSayiSize!=0) //Eðer hiç mükemmel sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Mukemmel sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelSayiSize;i++)
	{
		cout<< naMukemmelSayilar[i] << " ";
	}
	
	if(naMukemmelSayiSize!=0)//Eðer bütün sayýlar mükemmel sayýsý ise yazý yazýlmasýn diye.
	    cout<<"Mukemmel sayi(lar) degildir.\n";
	
}

//Burada tau sayýsý ve ayný zamanda mükemmel sayý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void MukemmelveTauBul(int arr[], int size)
{
	int MukemmelTauSayilar[size];//Mükemmel ve tau sayýsý olan sayýlar.
	int naMukemmelTauSayilar[size];//Mükemmel ve tau sayýsý olmayan sayýlar.
	
	int MukemmelTauSayiSize=0;
	int naMukemmelTauSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&TauSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem tau hem de mükemmel sayý olup olmadýðýna bakýyor. Hem tau hem de mükemmel sayý ise miktarý bir arttýrýyor.
		{
			MukemmelTauSayilar[MukemmelTauSayiSize]=arr[i];
			MukemmelTauSayiSize++;
		}
		else //Mükemmel ve/veya tau sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naMukemmelTauSayilar[naMukemmelTauSayiSize]=arr[i];
			naMukemmelTauSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<MukemmelTauSayiSize;i++)
	{
		cout<< MukemmelTauSayilar[i] << " ";
	}
	
	if(MukemmelTauSayiSize!=0) //Eðer hiç mükemmel sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve tau sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelTauSayiSize;i++)
	{
		cout<< naMukemmelTauSayilar[i] << " ";
	}
	
	if(naMukemmelTauSayiSize!=0)//Eðer bütün sayýlar hem tau hem de mükemmel sayý ise yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve tau sayi(lar) degildir.\n";
	
}

//Burada fermat sayýsý ve ayný zamanda mükemmel sayý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void MukemmelveFermatBul(int arr[], int size)
{
	int MukemmelFermatSayilar[size];//Mükemmel ve fermat sayý olan sayýlar.
	int naMukemmelFermatSayilar[size];//Mükemmel ve fermat sayýsý olmayan sayýlar.
	
	int MukemmelFermatSayiSize=0;
	int naMukemmelFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&FermatSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem fermat hem de mükemmel sayý olup olmadýðýna bakýyor. Hem fermat hem de mükemmel sayý ise miktarý bir arttýrýyor.
		{
			MukemmelFermatSayilar[MukemmelFermatSayiSize]=arr[i];
			MukemmelFermatSayiSize++;
		}
		else //Mükemmel ve/veya fermat sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naMukemmelFermatSayilar[naMukemmelFermatSayiSize]=arr[i];
			naMukemmelFermatSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<MukemmelFermatSayiSize;i++)
	{
		cout<< MukemmelFermatSayilar[i] << " ";
	}
	
	if(MukemmelFermatSayiSize!=0) //Eðer hiç mükemmel ve fermat özelliðini saðlayan sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelFermatSayiSize;i++)
	{
		cout<< naMukemmelFermatSayilar[i] << " ";
	}
	
	if(naMukemmelFermatSayiSize!=0)//Eðer bütün sayýlar hem fermat hem de mükemmel sayý ise yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve Fermat sayi(lar) degildir.\n";

}


//Burada wooddall sayýsý ve ayný zamanda mükemmel sayý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void MukemmelveWooddallBul(int arr[], int size)
{
	int MukemmelWooddallSayilar[size];//Mükemmel ve wooddall sayýsý olan sayýlar.
	int naMukemmelWooddallSayilar[size];//Mükemmel ve wooddall sayýsý olmayan sayýlar.
	
	int MukemmelWooddallSayiSize=0;
	int naMukemmelWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem wooddall hem de mükemmel sayý olup olmadýðýna bakýyor. Hem wooddall hem de mükemmel sayý ise miktarý bir arttýrýyor.
		
		{
			MukemmelWooddallSayilar[MukemmelWooddallSayiSize]=arr[i];
			MukemmelWooddallSayiSize++;
		}
		else//Mükemmel ve/veya wooddall sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naMukemmelWooddallSayilar[naMukemmelWooddallSayiSize]=arr[i];
			naMukemmelWooddallSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<MukemmelWooddallSayiSize;i++)
	{
		cout<< MukemmelWooddallSayilar[i] << " ";
	}
	
	if(MukemmelWooddallSayiSize!=0) //Eðer hiç mükemmel ve wooddall özelliðini saðlayan sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelWooddallSayiSize;i++)
	{
		cout<< naMukemmelWooddallSayilar[i] << " ";
	}
	
	if(naMukemmelWooddallSayiSize!=0)//Eðer bütün sayýlar hem wooddall hem de mükemmel sayý ise yazý yazýlmasýn diye.
	    cout<<"Mukemmel ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada fermat sayýsý ve ayný zamanda wooddall sayýsý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void FermatveWooddallBul(int arr[], int size)
{
	int FermatWooddallSayilar[size];//Fermat ve wooddall sayýsý olan sayýlar.
	int naFermatWooddallSayilar[size];//Fermat ve wooddall sayýsý olmayan sayýlar.
	
	int FermatWooddallSayiSize=0;
	int naFermatWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(FermatSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem fermat hem de wooddall sayý olup olmadýðýna bakýyor. Hem fermat hem de wooddall sayý ise miktarý bir arttýrýyor.
		
		{
	    	FermatWooddallSayilar[FermatWooddallSayiSize]=arr[i];
			FermatWooddallSayiSize++;
		}
		else//Mükemmel ve/veya fermat sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naFermatWooddallSayilar[naFermatWooddallSayiSize]=arr[i];
			naFermatWooddallSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<FermatWooddallSayiSize;i++)
	{
		cout<< FermatWooddallSayilar[i] << " ";
	}
	
	if(FermatWooddallSayiSize!=0) //Eðer hiç fermat ve wooddall özelliðini saðlayan sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Fermat ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naFermatWooddallSayiSize;i++)
	{
		cout<< naFermatWooddallSayilar[i] << " ";
	}
	
	if(naFermatWooddallSayiSize!=0) //Eðer bütün sayýlar hem fermat hem de wooddall sayý ise yazý yazýlmasýn diye.
	    cout<<"Fermat ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada tau sayýsý ve ayný zamanda wooddall sayý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void TauveWooddallBul(int arr[], int size)
{
	int TauWooddallSayilar[size];//Tau ve wooddall sayýsý olan sayýlar.
	int naTauWooddallSayilar[size];//Tau ve wooddall sayýsý olmayan sayýlar.
	
	int TauWooddallSayiSize=0;
	int naTauWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem tau hem de wooddall sayý olup olmadýðýna bakýyor. Hem tau hem de wooddall sayý ise miktarý bir arttýrýyor.
		
		{
	    	TauWooddallSayilar[TauWooddallSayiSize]=arr[i];
			TauWooddallSayiSize++;
		}
		else//Woodddall ve/veya tau sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naTauWooddallSayilar[naTauWooddallSayiSize]=arr[i];
			naTauWooddallSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<TauWooddallSayiSize;i++)
	{
		cout<< TauWooddallSayilar[i] << " ";
	}
	
	if(TauWooddallSayiSize!=0) //Eðer hiç wooddall ve tau özelliðini saðlayan sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Tau ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauWooddallSayiSize;i++)
	{
		cout<< naTauWooddallSayilar[i] << " ";
	}
	
	if(naTauWooddallSayiSize!=0)//Eðer bütün sayýlar hem tau hem de wooddall sayý ise yazý yazýlmasýn diye.
	    cout<<"Tau ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada tau sayýsý ve ayný zamanda fermat sayý olan sayýlarý yazdýrýyoruz.Eðer herhangi bir veya iki özelliðide saðlamýyorsa ekrana olmayan sayýlarý yazdýrýyoruz.
void TauveFermatBul(int arr[], int size)
{
	int TauFermatSayilar[size];//Tau ve fermat sayýsý olan sayýlar.
	int naTauFermatSayilar[size];//Tau ve fermat sayýsý olmayan sayýlar.
	
	int TauFermatSayiSize=0;
	int naTauFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])&&FermatSayiMi(arr[i]))//Girilen dizideki elemanlarýn hem tau hem de fermat sayý olup olmadýðýna bakýyor. Hem tau hem de fermat sayý ise miktarý bir arttýrýyor.
		
		{
	    	TauFermatSayilar[TauFermatSayiSize]=arr[i];
			TauFermatSayiSize++;
		}
		else//Fermat ve/veya tau sayýsý deðil ise miktarý bir arttýrýyor.
		{
			naTauFermatSayilar[naTauFermatSayiSize]=arr[i];
			naTauFermatSayiSize++;
		}
	}
	
	
	cout<<"\n";
	for(int i=0;i<TauFermatSayiSize;i++)
	{
		cout<< TauFermatSayilar[i] << " ";
	}
	
	if(TauFermatSayiSize!=0) //Eðer hiç tau ve fermat özelliðini saðlayan sayý yoksa yazý yazýlmasýn diye.
	    cout<<"Tau ve Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauFermatSayiSize;i++)
	{
		cout<< naTauFermatSayilar[i] << " ";
	}
	
	if(naTauFermatSayiSize!=0)//Eðer bütün sayýlar hem tau hem de fermat sayý ise yazý yazýlmasýn diye.
	    cout<<"Tau ve Fermat sayi(lar) degildir.\n";
	
}


int main(int argc, char** argv) {
	
	
	int secim;
	
	do{
		cout<<endl;
		cout<<"Bir dizi girmek icin 1'e basiniz..:"<<endl;
		cout<<"Bir aralik girmek icin 2'e basiniz..:"<<endl;
		cout<<"Cikis yapmak icin 3'e basiniz..:"<<endl;
		
		cin>>secim;
		
		if(secim==3)
		{
			break;
		}
		
		if(secim==1)
		{
		
	    	
	int elemansayisi;
	
	cout<<"Dizinin eleman sayisini giriniz..:";
	cin>>elemansayisi;
	
    
     	int dizi[elemansayisi];
	
     for(int i=0;i<elemansayisi;i++) //Dizinin elemanlarýný girdirdik.
     {
     	cout<<"dizi["<<i<<"]= ";
     	cin>>dizi[i];
	 }
	 
	 system("CLS");
	 
	 int secim;
	 
	 cout<<"Girilen dizideki Mukemmel Sayilari bulmak icin 1'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Wooddall Sayilari bulmak icin 2'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Fermat Sayilari bulmak icin 3'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Tau Sayilari bulmak icin 4'e basiniz.'"<<endl;
	 cout<<"Bir onceki menuye donmek icin 5'e basiniz."<<endl;
	 cin>>secim;
	 
	 
	 
	 if (secim==4)
	 {
	 TauSayilariBul(dizi,elemansayisi);
	 }
	
	 if(secim==2)
	 {
	 	WooddallSayilariBul(dizi,elemansayisi);
	 }
		    
	 if(secim==3)
	 {
		FermatSayilariBul(dizi,elemansayisi);
	 }    
		    
	 if(secim==1)
	 {
	 	MukemmelSayilariBul(dizi, elemansayisi);
	 }
	 
	 if(secim==5)
	 {
	 	system("CLS");
	 	
	 }
     
     if(secim==14)
     {
     	 MukemmelveTauBul(dizi,elemansayisi);
	 
     }
	 
	 if(secim==12)
     {
     	MukemmelveWooddallBul(dizi,elemansayisi);
	 
     }
	 
	 if(secim==13)
     {
     	MukemmelveFermatBul(dizi,elemansayisi);
	 
     }
	 
	  if(secim==23)
     {
        FermatveWooddallBul(dizi,elemansayisi);
	 
     }
     
     if(secim==24)
     {
        TauveWooddallBul(dizi,elemansayisi);
	 
     }
     
     if(secim==34)
     {
     	TauveFermatBul(dizi,elemansayisi);
     }
     
    }
	
			
		else if(secim==2)
		{
			int ilksayi, ikincisayi, maxVal, minVal;
			
			cout<<"Aralik icin ilk sayiyi giriniz : ";
			cin>>ilksayi;
			
			cout<<"Aralik icin ikinci sayiyi giriniz : ";
			cin>>ikincisayi;
			
			system("CLS");
			 
			 if(ilksayi>ikincisayi)
			 {
			 	maxVal=ilksayi;
			 	minVal=ikincisayi;
			 }
			 
			 else 
			 {
			 	maxVal=ikincisayi;
			 	minVal=ilksayi;
			 }
			
			int elemansayisi;
			elemansayisi=maxVal-minVal+1;
			
			int dizi[elemansayisi];
	
            for(int i=0;i<elemansayisi;i++) //En büyük sayýyý elde edene kadar dizideki en küçük elemaný bir artýrýp yazdýk. 
            {
              	dizi[i]=i+minVal;	            
	        }
	 				 			 
	 int secim;
	 
	 cout<<"Girilen dizideki Mukemmel Sayilari bulmak icin 1'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Wooddall Sayilari bulmak icin 2'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Fermat Sayilari bulmak icin 3'e basiniz.'"<<endl;
	 cout<<"Girilen dizideki Tau Sayilari bulmak icin 4'e basiniz.'"<<endl;
	 cout<<"Bir onceki menuye donmek icin 5'e basiniz."<<endl;
	 cin>>secim;
	 
	 system("CLS");
			 
	if (secim==4)
	 {
	    TauSayilariBul(dizi,elemansayisi);
	 }
	 
	 if(secim==2)
	 {
	 	WooddallSayilariBul(dizi,elemansayisi);
	 }
		    
	 if(secim==3)
	 {
		FermatSayilariBul(dizi,elemansayisi);
	 }    
		    
	 if(secim==1)
	 {
	 	MukemmelSayilariBul(dizi, elemansayisi);
	 }
	 
	 if(secim==5)
	 {
	 	system("CLS");
	 	
	 }
	 
	 if(secim==14)
     {
     	 MukemmelveTauBul(dizi,elemansayisi);
	 
     }
	 
	 if(secim==12)
     {
     	MukemmelveWooddallBul(dizi,elemansayisi);
	 
     }
	 
	 if(secim==13)
     {
     	MukemmelveFermatBul(dizi,elemansayisi);
	 
     }
	 
	  if(secim==23)
     {
        FermatveWooddallBul(dizi,elemansayisi);
	 
     }
     
     if(secim==24)
     {
        TauveWooddallBul(dizi,elemansayisi);
	 
     }
     
     if(secim==34)
     {
     	TauveFermatBul(dizi,elemansayisi);
     }
     
	 
     }
     
     else
     {
     	cout<<"Gecersiz islem yaptiniz. Lutfen tekrar deneyiniz..."<<endl;
     
	 }
	 				 			
	}while(1==1);
	
							
	system("PAUSE");
	return 0;
}





