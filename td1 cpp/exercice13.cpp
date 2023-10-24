
#include <cstdlib> 
#include <iostream> 
#include <time.h>
using namespace std; 


int throwDice(int dicenbr){
    int result,res;
    /*result est le score de premier dee et res et le score de deuxieme dee*/
    srand(time(0)); 
    switch(dicenbr){
        case 1 :
		    result = rand() % 6 + 1; 
            cout << "dice: " << result << "\n";  /*resultat de dee*/
            break;
        case 2 : 
            
		    res = rand() % 6 + 1; 
		    result = rand() % 6 + 1; 
            cout << "dice1: " << result << "\n";   /*resultat de dee 1*/
            cout << "dice2: " << res << "\n";   /*resultat de dee 2*/
            if (result == res){    /*si les resultat des dees sont somblable*/
                result=(-res-result);    /*dimunuer le score par la somme des resultat des dees*/
            }else{
            result += res;  /*si les resultat des dees ne sont pas somblable*/
            }
            break;
    }
    return result;
}
int PlayerTurn(int turn){
    int result,score=0,nbrDice; /*nbrDice: est le nombre de dee choisie*/
    
    if(turn % 2 == 0){
        cout << "tour de player1\n";
        do{
        cout << "voulez-vous lancez 1 ou 2 dee ? \n";
        cin >> nbrDice;
        if(nbrDice != 1 || nbrDice != 2){
            cout << "le nombre que vous avez entrer n'est pas valable , merci d'entrer le nombre 1 ou le nombre 2 \n";
        }
        }while(nbrDice != 1 && nbrDice != 2);
        score=throwDice(nbrDice);
            
    }else{
        cout << "tour de player2 \n";
        cout << "voulez-vous lancez 1 ou 2 dee ? \n";
        cin >> nbrDice;
        score=throwDice(nbrDice);
    }
    cout << "\n";
    return score;
    
}


int main() 
{ 
    int turn=0,score1=0,score2=0, parti=1;
    do{
        
        if(turn % 2 == 0){
            cout << "partie " << parti << "\n" ;
	        score1+=PlayerTurn(turn);
            cout << "le score de player1 est :" << score1 << "\n \n";
        }   
        else{
            score2+=PlayerTurn(turn);
            cout << "le score de player2 est :" << score2 << "\n \n";
            parti++;
            system("pause");
            system("cls");
        }
        turn++;
        /*pour donner au player2 la chance de jouer sans tour memme si le score de player1 a depasser 30*/
        if(score1 >=30){

            if(turn % 2 != 0){
                score2+=PlayerTurn(turn);
                cout << "le score de player2 est :" << score2 << "\n \n";
            
            }
            
            
        }
        
            
    }while(score1 < 30 && score2 < 30); 
    
    if(score1 >=30 && score2 >= 30){
        cout << "MATCH NULL \n";
    }else if(score1 >= 30){
        cout << "player 1 win , player 2 lose \n";
        
    }else if (score2 >= 30){
        cout << "player 2 win , player 1 lose \n";
        
    }
	return 0; 
} 


