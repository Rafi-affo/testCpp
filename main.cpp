#include <iostream>

using namespace std;

int main()
{
    double a, b,c,resultat;

    //Demander à l'utilisateur d'entrer a
    //Afficher un message a l'utilisateur
    cout << "Entrer la valeur de a : " << endl;
    //Lire la valeur saisi par l'utilisateur et l'enregistrer dans la variable a
    cin >> a;
    while(a == 0){
        cout << "Erreur a ne doit pas etre nul. Reessayez" << endl;
        cin >> a;
}


    //Demander à l'utilisateur d'entrer b
    //Afficher un message a l'utilisateur
    cout << "Entrer la valeur de b : " << endl;
    //Lire la valeur saisi par l'utilisateur et l'enregistrer dans la variable b
    cin >> b;
    //Demander à l'utilisateur d'entrer c
    //afficher un message a l'ulisateur
    cout <<"Entrer la valeur de c: " <<endl;
    cin>>c;

    resultat = (c-b)/a;

    //Afficher (renvoyez) le résultat
    cout << "La solution de l'équation " << a <<"x + "<< b <<" = c est : x = "<< resultat <<endl;
    return 0;
}

/*
 Étapes :
 1- créer les variables a, b et resultats;
 2- Demander à l'utilisateur d'entrer a et b
 3- S'assurer que a est différent de 0
 4- Calculer le résultat : resultat = -b/a
 5- Renvoyer
*/

