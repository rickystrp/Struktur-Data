#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main()

{
			system("color F0");
			std::cout<<"\n\n\t---------------------------------------------------------";
			std::cout<<"\n\t|		Ricky Satrio Pamungkas \t\t\t|";
			std::cout<<"\n\t|			20170801202\t\t\t|";
			std::cout<<"\n\n\t---------------------------------------------------------";
			std::cout<<"\n\t|		PROGRAM UTS GENAP\t\t\t|";
			std::cout<<"\n\t|		Mata kuliah Struktur Data\t\t|";
			cout<<"\n\n\t---------------------------------------------------------";
	
	int A[100],i,j,k,tampung,jmlData;
	std::cout<<"\nMasukkan jumlah data : ";
	std::cin>>jmlData;
	std::cout<<"\n";
	for(i=0;i<jmlData;i++)
	
		{
			
			std::cout<<"Masukkan data ke- "<<i+1<<" : ";
			std::cin>>A[i];
		}
	std::cout << "Sebelum sorting\n";
	for(i=0;i<jmlData;i++)
	{
		std::cout<<A[i];//print data sblm sorting
	}
	std::cout<<"\n\n";
//ascending
	std::cout<<"\nProses pengurutan ascending\n";
	for (i=1; i<jmlData; i++)
	{
		for (j=0; j<i; j++)
		{	
			if (A[j]>A[i])//membandingkan indeks j dengan i
			{
				tampung=A[i];
				A[i]=A[j];
				A[j]=tampung;
			}
		}
		std::cout<<"Pengurutan tahap ke- "<<i<<" : \n";
		for(k=0;k<jmlData;k++)//tahpan sorting
		{
			std::cout<<A[k]<<" ";//untuk print hasil proses
		}
	std::cout<<"\n";
	}	
	std::cout<<"\nSetelah sorting (Ascending) : \n";
	{
		for(i=0;i<jmlData;i++)
		{
		std::cout<<"["<<i<<"]"<<A[i]<<" ";//untuk print hasil ascending beserta indeksnya
		}
	}
	std::cout<<"\n\n";
//descending
	std::cout<<"\nProses pengurutan descending\n";
	for (i=1; i<jmlData; i++)
	{
		for (j=jmlData-1; j>=i; j--)
		{
			if (A[j]>A[j-1])//proses perbandingan j dengan j-1
			{
				tampung=A[j];
				A[j]=A[j-1];
				A[j-1]=tampung;
			}
		}
		std::cout<<"Pengurutan tahap ke- "<<i<<" : \n";
		for(k=0;k<jmlData;k++)
		{
			std::cout<<A[k]<<" ";//print proses pengurutan atau proses secara bertahap
		}
		std::cout<<"\n";
	}
	std::cout<<"\nSetelah sorting (Descending) : \n";
	{
		for(i=0;i<jmlData;i++)
		{
			std::cout<<"["<<i<<"]"<<A[i]<<" ";////untuk print hasil descending beserta indeksnya
		}
	}
	getch();
}
