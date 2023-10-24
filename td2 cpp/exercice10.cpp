#include <iostream>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    int dn; // date de naissance

public:
    Personne() {
        nom = "";
        prenom = "";
        dn = 0; //initialisation par defaut
    }

    Personne(string n, string p, int d) {
        nom = n;
        prenom = p;
        dn = d;
    }

    void afficher() {
        cout << "Le nom et prenom sont : " << nom << " " << prenom << ". Il est nee en " << dn << endl;
    }
};

class Employe : public Personne {
private:
    int salaire;

public:
    Employe() {
        salaire = 0;
    }

    Employe(string n, string p, int d, int sal) : Personne(n, p, d) {
        salaire = sal;
    }

    void afficher() {
        Personne::afficher();
        cout << "Son salaire est de : " << salaire << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef() {
        service = "";
    }

    Chef(string n, string p, int d, string ser, int sal) : Employe(n, p, d, sal) {
        service = ser;
    }

    void afficher() {
        Employe::afficher();
        cout << "Service occupe : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(string n, string p, int d, string ser, int sal, string soc) : Chef(n, p, d, ser, sal) {
        societe = soc;
    }

    void afficher() {
        Chef::afficher();
        cout << "Il appartient a la societe : " << societe << endl;
    }
};

int main() {
    Personne pers("ayoub", "aitsid", 2002);
    pers.afficher();
    Employe emp("salah", "aslan", 2002, 1000);
    emp.afficher();
    Chef chef("mustapha", "bounani", 2001, "Developpement", 100000);
    Directeur dir("Aymane", "Rihane", 2003, "marketing", 10000000, "Microsoft");
    dir.afficher();
    return 0;
}
