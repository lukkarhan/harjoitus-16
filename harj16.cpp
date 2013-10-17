/*
Teht„v„: Harjoitus 16
Tekij„: Hanna Lukkarinen
Pvm: 17.10.2013

Kuvaus:
Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
Tietueeseen talletetaan seuraavat tiedot:
etunimi (merkkijono; C:n merkkitaulukko)
sukunimi (merkkijono; C:n merkkitaulukko)
koulumatka (reaaliluku)
osoite (merkkijono; C:n merkkitaulukko)
postinumero (merkkijono; C:n merkkitaulukko)
kengannumero (kokonaisluku)

Ohjelma tulostaa lopuksi tietueen tiedot nayt”lle.

*/

#include <iostream>
using namespace std;

struct HENKILOTIEDOT
{
	char etunimi[15];
	char sukunimi[20];
	float koulumatka;
	char osoite[30];
	char postinumero[20];
	int kengannumero;
};

void main()
{
	HENKILOTIEDOT henk;
	cout<<"Anna etunimesi: ";
	cin>>ws>>henk.etunimi;
	cout<<"Anna sukunimesi: ";
	cin>>ws>>henk.sukunimi;
	cout<<"Anna koulumatkasi pituus kilometrein„: ";
	cin>>ws>>henk.koulumatka;
	cout<<"Anna osoitteesi: ";
	cin>>ws;
	cin.get(henk.osoite, 30);
	cout<<"Anna postinumerosi ja postitoimipaikkasi: ";
	cin>>ws;
	cin.get(henk.postinumero, 20);
	cout<<"Anna keng„nnumerosi: ";
	cin>>ws>>henk.kengannumero;

	cout<<"\nNimesi on "<<henk.etunimi<<' '<<henk.sukunimi<<endl;
	cout<<"Osoitteesi on "<<henk.osoite<<endl;
	cout<<"Postinumerosi ja -toimipaikkasi on "<<henk.postinumero<<endl;
	cout<<"Koulumatkasi pituus on "<<henk.koulumatka<<" km\n";
	cout<<"Keng„nnumerosi on "<<henk.kengannumero<<endl;

}