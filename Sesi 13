#include <iostream>

using namespace std;

struct node
{
char nama[20];
int umur;
float tinggi;
int id;
node *next;
};
node *awal_ptr=NULL;
node *posisi;
int pilih;
void tambah_simpul_akhir()
{
node *temp, *temp2, *bantu; //simpul sementara
node id;
//isi data
temp=new node;
cout<<"Nama : ";cin>>temp->nama;
cout<<"Umur : ";cin>>temp->umur;
cout<<"Tinggi : ";cin>>temp->tinggi;
cout<<"id : ";cin>>temp->id;
temp->next=NULL;
//inisialisasi pointer ketika kosong
if(awal_ptr==NULL || awal_ptr->id > temp->id)
{
awal_ptr=temp;
posisi=awal_ptr;
}
temp2=awal_ptr;
while(temp2->id < temp->id && temp2->next==NULL)
	{
	temp2->next=temp;
	}
while(temp2->id < temp->id && temp2->next!=NULL)
	{
	temp2=temp2->next;
	}

	bantu=temp2;
	temp2=temp;
    temp=bantu;
	temp2->next=bantu->next;
	posisi=temp2->next;

}

void tampil_senarai()
{
node *temp;
temp = awal_ptr;
if(temp == NULL)
cout<<"List kosong"<<endl;
else
{
cout<<endl<<endl;
while(temp != NULL)
{
cout<<"Nama : "<<temp->nama<<" ";
cout<<"Umur : "<<temp->umur<<" ";
cout<<"Tinggi : "<<temp->tinggi<<" ";
cout<<"id : "<<temp->id;
if (temp == posisi)
cout<<" << posisi simpul";
cout<<endl;
temp=temp->next;
}
cout<<"Akhir list"<<endl;
}
}
void hapus_simpul_akhir()
{
node *temp1, *temp2;
if (awal_ptr == NULL)
cout << "List kosong!" << endl;
else
{
temp1 = awal_ptr;
if (temp1->next == NULL)
{
delete temp1;
awal_ptr = NULL;
}
else
{
while (temp1->next != NULL)
{
temp2 = temp1;
temp1 = temp1->next;
}
delete temp1;
temp2->next = NULL;
}
}
}
void hapus_simpul_awal()
{
node *temp;
temp = awal_ptr;
awal_ptr = awal_ptr->next;
delete temp;
}

int main()
{
awal_ptr=NULL;
do           
{
tampil_senarai();
cout<<"Menu Pilihan"<<endl;
cout<<"0. Keluar program"<<endl;
cout<<"1. Tambah simpul akhir"<<endl;
cout<<"2. Hapus simpul akhir"<<endl;
cout<<"3. Hapus simpul awal"<<endl;
cout<<"Pilihan >> ";cin>>pilih;
switch(pilih)
{
case 1: tambah_simpul_akhir();break;
case 2: hapus_simpul_akhir();break;
case 3: hapus_simpul_awal();break;
}
}while(pilih !=0);
}
