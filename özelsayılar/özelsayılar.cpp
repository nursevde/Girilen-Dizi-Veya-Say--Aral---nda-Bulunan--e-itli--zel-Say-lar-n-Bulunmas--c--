/*****************************************************************************
**
**                         SAKARYA �N�VERS�TES�
**                        FEN EDEB�YAT FAK�LTES�
**                           MATEMAT�K B�L�M�
**                      PROGRAMLAMAYA G�R�� DERS�
**                   
**                    �DEV NUMARASI....: 2
**                    ��RENC� ADI......: Sevdenur AK
**                    ��RENC� NUMARASI.: B180200034
**                    DERS GRUBU.......: 1
**
*******************************************************************************/


#include <iostream>
#include <cmath>
#include <cstdlib>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

//Burada diziyi al�p her bir eleman�n tau say�s� olup olmad���n� kontrol ediyoruz.
bool TauSayiMi(int sayi)
{
	int bolen=1; //Her zaman girilen say�lar 1'e b�l�nebilir.
	int miktar=0; //B�len say�s�n�n miktar�.
	
	do
    {
		if(sayi%bolen==0) //Say�y� b�lene b�ld���m�zde kalan s�f�r ise miktar� ve b�leni bir artt�r�yoruz.
	    	miktar++;
	    bolen++;	
	    	
	}while(bolen != sayi+1); 
	
	if(sayi%miktar==0) //Girilen say� b�len miktar�na b�l�nd���nde kalan s�f�r oluyorsa tau say�s� oluyor.
     	return sayi;
     	
	        else 
	          return 0;
}

//Burada tau say�s� olan ve olmayan say�lar� ekrana yazd�r�yoruz.
void TauSayilariBul(int arr[], int size)
{
	int TauSayilar[size]; //Tau say�s� olan say�lar.
	int naTauSayilar[size]; //Tau say�s� olmayan say�lar.
	
	int TauSayiSize=0;
	int naTauSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])) //Girilen dizideki elemanlar�n tau say�s� olup olmad���na bak�yor. Tau say�s� ise miktar� bir artt�r�yor.
		{
			TauSayilar[TauSayiSize]=arr[i];
			TauSayiSize++;
		}
		else   //Tau say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(TauSayiSize!=0)//E�er hi� tau say�s� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Tau sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauSayiSize;i++)
	{
		cout<< naTauSayilar[i] << " ";
	}
	
	if(naTauSayiSize!=0) //E�er b�t�n say�lar tau say�s� ise yaz� yaz�lmas�n diye.
	    cout<<"Tau sayi(lar) degildir.\n";
	
}

//Burada diziyi al�p her bir eleman�n wooddall say�s� olup olmad���n� kontrol ediyoruz.
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

//Burada wooddall say�s� olan ve olmayan say�lar� ekrana yazd�r�yoruz.
void WooddallSayilariBul(int arr[], int size)
{
	int WooddallSayilar[size]; //Wooddall say�s� olan say�lar.
	int naWooddallSayilar[size]; //Wooddall say�s� olmayan say�lar.
	
	int WooddallSayiSize=0;
	int naWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(WooddallSayiMi(arr[i]))//Girilen dizideki elemanlar�n wooddall say�s� olup olmad���na bak�yor. Wooddall say�s� ise miktar� bir artt�r�yor.
		{
			WooddallSayilar[WooddallSayiSize]=arr[i];
			WooddallSayiSize++;
		}
		else //Wooddall say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(WooddallSayiSize!=0)//E�er hi� wooddall say�s� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naWooddallSayiSize;i++)
	{
		cout<< naWooddallSayilar[i] << " ";
	}
	
	if(naWooddallSayiSize!=0)//E�er b�t�n say�lar wooddall say�s� ise yaz� yaz�lmas�n diye.
	    cout<<"Wooddall sayi(lar) degildir.\n";
	
}

//Burada diziyi al�p her bir eleman�n fermat say�s� olup olmad���n� kontrol ediyoruz.
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
				
            if(sayi==pow(2,pow(2,n))) //�ki �zeri iki �zeri n ifadesi say�ya e�it ise fermat say�s� olur.
            {
                return true;
            }
    		
        }
        n++;
		
    }
    
    return false;

}

//Burada fermat say�s� olan ve olmayan say�lar� ekrana yazd�r�yoruz.
void FermatSayilariBul(int arr[], int size)
{
	int FermatSayilar[size];//Fermat say�s� olan say�lar.
	int naFermatSayilar[size];//Fermat say�s� olmayan say�lar.
	
	int FermatSayiSize=0;
	int naFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(FermatSayiMi(arr[i]))//Girilen dizideki elemanlar�n fermat say�s� olup olmad���na bak�yor. Fermat say�s� ise miktar� bir artt�r�yor.
		{
			FermatSayilar[FermatSayiSize]=arr[i];
			FermatSayiSize++;
		}
		else //Fermat say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(FermatSayiSize!=0)//E�er hi� fermat say�s� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naFermatSayiSize;i++)
	{
		cout<< naFermatSayilar[i] << " ";
	}
	
	if(naFermatSayiSize!=0)//E�er b�t�n say�lar fermat say�s� ise yaz� yaz�lmas�n diye.
	    cout<<"Fermat sayi(lar) degildir.\n";
	
}

//Burada diziyi al�p her bir eleman�n m�kemmel say� olup olmad���n� kontrol ediyoruz.
bool MukemmelSayiMi(int sayi)
{
	int toplam=1; //1 her zaman b�lendir.
	
	//Bir say�n�n b�lenleri karek�k�nden yukar� ��kmaz bu y�zden b�len karesine kadar kontrol ediyoruz.
	
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
	
	if(toplam == sayi&&sayi != 1) // 1 m�kemmel sayi de�ildir.
	   return true;
	
	return false;
}

//Burada m�kemmel say� olan ve olmayan say�lar� ekrana yazd�r�yoruz.
void MukemmelSayilariBul(int arr[], int size)
{
	int MukemmelSayilar[size];//M�kemmel say� olan say�lar.
	int naMukemmelSayilar[size];//M�kemmel say� olmayan say�lar.
	
	int MukemmelSayiSize=0;
	int naMukemmelSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i]))//Girilen dizideki elemanlar�n m�kemmel say�s� olup olmad���na bak�yor. M�kemmel say�s� ise miktar� bir artt�r�yor.
		{
			MukemmelSayilar[MukemmelSayiSize]=arr[i];
			MukemmelSayiSize++;
		}
		else //M�kemmel say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(MukemmelSayiSize!=0) //E�er hi� m�kemmel say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelSayiSize;i++)
	{
		cout<< naMukemmelSayilar[i] << " ";
	}
	
	if(naMukemmelSayiSize!=0)//E�er b�t�n say�lar m�kemmel say�s� ise yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel sayi(lar) degildir.\n";
	
}

//Burada tau say�s� ve ayn� zamanda m�kemmel say� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void MukemmelveTauBul(int arr[], int size)
{
	int MukemmelTauSayilar[size];//M�kemmel ve tau say�s� olan say�lar.
	int naMukemmelTauSayilar[size];//M�kemmel ve tau say�s� olmayan say�lar.
	
	int MukemmelTauSayiSize=0;
	int naMukemmelTauSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&TauSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem tau hem de m�kemmel say� olup olmad���na bak�yor. Hem tau hem de m�kemmel say� ise miktar� bir artt�r�yor.
		{
			MukemmelTauSayilar[MukemmelTauSayiSize]=arr[i];
			MukemmelTauSayiSize++;
		}
		else //M�kemmel ve/veya tau say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(MukemmelTauSayiSize!=0) //E�er hi� m�kemmel say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve tau sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelTauSayiSize;i++)
	{
		cout<< naMukemmelTauSayilar[i] << " ";
	}
	
	if(naMukemmelTauSayiSize!=0)//E�er b�t�n say�lar hem tau hem de m�kemmel say� ise yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve tau sayi(lar) degildir.\n";
	
}

//Burada fermat say�s� ve ayn� zamanda m�kemmel say� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void MukemmelveFermatBul(int arr[], int size)
{
	int MukemmelFermatSayilar[size];//M�kemmel ve fermat say� olan say�lar.
	int naMukemmelFermatSayilar[size];//M�kemmel ve fermat say�s� olmayan say�lar.
	
	int MukemmelFermatSayiSize=0;
	int naMukemmelFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&FermatSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem fermat hem de m�kemmel say� olup olmad���na bak�yor. Hem fermat hem de m�kemmel say� ise miktar� bir artt�r�yor.
		{
			MukemmelFermatSayilar[MukemmelFermatSayiSize]=arr[i];
			MukemmelFermatSayiSize++;
		}
		else //M�kemmel ve/veya fermat say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(MukemmelFermatSayiSize!=0) //E�er hi� m�kemmel ve fermat �zelli�ini sa�layan say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelFermatSayiSize;i++)
	{
		cout<< naMukemmelFermatSayilar[i] << " ";
	}
	
	if(naMukemmelFermatSayiSize!=0)//E�er b�t�n say�lar hem fermat hem de m�kemmel say� ise yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve Fermat sayi(lar) degildir.\n";

}


//Burada wooddall say�s� ve ayn� zamanda m�kemmel say� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void MukemmelveWooddallBul(int arr[], int size)
{
	int MukemmelWooddallSayilar[size];//M�kemmel ve wooddall say�s� olan say�lar.
	int naMukemmelWooddallSayilar[size];//M�kemmel ve wooddall say�s� olmayan say�lar.
	
	int MukemmelWooddallSayiSize=0;
	int naMukemmelWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(MukemmelSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem wooddall hem de m�kemmel say� olup olmad���na bak�yor. Hem wooddall hem de m�kemmel say� ise miktar� bir artt�r�yor.
		
		{
			MukemmelWooddallSayilar[MukemmelWooddallSayiSize]=arr[i];
			MukemmelWooddallSayiSize++;
		}
		else//M�kemmel ve/veya wooddall say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(MukemmelWooddallSayiSize!=0) //E�er hi� m�kemmel ve wooddall �zelli�ini sa�layan say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naMukemmelWooddallSayiSize;i++)
	{
		cout<< naMukemmelWooddallSayilar[i] << " ";
	}
	
	if(naMukemmelWooddallSayiSize!=0)//E�er b�t�n say�lar hem wooddall hem de m�kemmel say� ise yaz� yaz�lmas�n diye.
	    cout<<"Mukemmel ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada fermat say�s� ve ayn� zamanda wooddall say�s� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void FermatveWooddallBul(int arr[], int size)
{
	int FermatWooddallSayilar[size];//Fermat ve wooddall say�s� olan say�lar.
	int naFermatWooddallSayilar[size];//Fermat ve wooddall say�s� olmayan say�lar.
	
	int FermatWooddallSayiSize=0;
	int naFermatWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(FermatSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem fermat hem de wooddall say� olup olmad���na bak�yor. Hem fermat hem de wooddall say� ise miktar� bir artt�r�yor.
		
		{
	    	FermatWooddallSayilar[FermatWooddallSayiSize]=arr[i];
			FermatWooddallSayiSize++;
		}
		else//M�kemmel ve/veya fermat say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(FermatWooddallSayiSize!=0) //E�er hi� fermat ve wooddall �zelli�ini sa�layan say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Fermat ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naFermatWooddallSayiSize;i++)
	{
		cout<< naFermatWooddallSayilar[i] << " ";
	}
	
	if(naFermatWooddallSayiSize!=0) //E�er b�t�n say�lar hem fermat hem de wooddall say� ise yaz� yaz�lmas�n diye.
	    cout<<"Fermat ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada tau say�s� ve ayn� zamanda wooddall say� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void TauveWooddallBul(int arr[], int size)
{
	int TauWooddallSayilar[size];//Tau ve wooddall say�s� olan say�lar.
	int naTauWooddallSayilar[size];//Tau ve wooddall say�s� olmayan say�lar.
	
	int TauWooddallSayiSize=0;
	int naTauWooddallSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])&&WooddallSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem tau hem de wooddall say� olup olmad���na bak�yor. Hem tau hem de wooddall say� ise miktar� bir artt�r�yor.
		
		{
	    	TauWooddallSayilar[TauWooddallSayiSize]=arr[i];
			TauWooddallSayiSize++;
		}
		else//Woodddall ve/veya tau say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(TauWooddallSayiSize!=0) //E�er hi� wooddall ve tau �zelli�ini sa�layan say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Tau ve Wooddall sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauWooddallSayiSize;i++)
	{
		cout<< naTauWooddallSayilar[i] << " ";
	}
	
	if(naTauWooddallSayiSize!=0)//E�er b�t�n say�lar hem tau hem de wooddall say� ise yaz� yaz�lmas�n diye.
	    cout<<"Tau ve Wooddall sayi(lar) degildir.\n";
	
}

//Burada tau say�s� ve ayn� zamanda fermat say� olan say�lar� yazd�r�yoruz.E�er herhangi bir veya iki �zelli�ide sa�lam�yorsa ekrana olmayan say�lar� yazd�r�yoruz.
void TauveFermatBul(int arr[], int size)
{
	int TauFermatSayilar[size];//Tau ve fermat say�s� olan say�lar.
	int naTauFermatSayilar[size];//Tau ve fermat say�s� olmayan say�lar.
	
	int TauFermatSayiSize=0;
	int naTauFermatSayiSize=0;
	
	for(int i=0;i<size;i++)
	{
		if(TauSayiMi(arr[i])&&FermatSayiMi(arr[i]))//Girilen dizideki elemanlar�n hem tau hem de fermat say� olup olmad���na bak�yor. Hem tau hem de fermat say� ise miktar� bir artt�r�yor.
		
		{
	    	TauFermatSayilar[TauFermatSayiSize]=arr[i];
			TauFermatSayiSize++;
		}
		else//Fermat ve/veya tau say�s� de�il ise miktar� bir artt�r�yor.
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
	
	if(TauFermatSayiSize!=0) //E�er hi� tau ve fermat �zelli�ini sa�layan say� yoksa yaz� yaz�lmas�n diye.
	    cout<<"Tau ve Fermat sayi(lar)dir.\n";
	    
	for(int i=0;i<naTauFermatSayiSize;i++)
	{
		cout<< naTauFermatSayilar[i] << " ";
	}
	
	if(naTauFermatSayiSize!=0)//E�er b�t�n say�lar hem tau hem de fermat say� ise yaz� yaz�lmas�n diye.
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
	
     for(int i=0;i<elemansayisi;i++) //Dizinin elemanlar�n� girdirdik.
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
	
            for(int i=0;i<elemansayisi;i++) //En b�y�k say�y� elde edene kadar dizideki en k���k eleman� bir art�r�p yazd�k. 
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





