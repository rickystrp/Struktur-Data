#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
      int i=0;
      int vk=0;
      int ks=0;
      int x;
      char kalimat[20];

   cout <<"\t\t\t\tKURSUS BAHASA\n";
      cout <<"\t\tPROGRAM MENGHITUNG HURUF KONSONAN dan VOKAL\n ";
   cout <<"\t\t===========================================\n ";
   cout <<"\t\t===========================================\n\n ";
   cout <<" ::silahkan masukkan kalimat:: \n";

      cin.getline(kalimat,20);
      x=strlen(kalimat);
      for(i=0;i<x;i++)
            {
              if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o')
            vk++;
            else
            ks++;
      }
      cout<<"Jumlah Huruf Vokal\t: "<<vk<<" huruf"<<endl;
      cout<<"Jumlah Huruf Konsonan\t: "<<ks<<" huruf"<<endl;
      getch();
}
