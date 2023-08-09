#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int cards;
        cin >> cards;

        int jokers;
        cin >> jokers;

        int players;
        cin >> players;
        
        int cardsForEachPlayer;
        
        cardsForEachPlayer = cards/players;

        if(jokers <= cardsForEachPlayer){

            cout << jokers << endl;

        }
        else{

            int jokersRemaining = jokers - cardsForEachPlayer;
            vector<int> p(players - 1, 0);
            int j = 0;
            for (int i = 0; i < jokersRemaining; i++)
            {
                p[j]++;
                j++;
                if(j >= players - 1){
                    j = 0;
                }
            }
            int highest = 0;
            for(int i : p){
                if(i > highest){
                    highest = i;
                }
            }
            if(highest == cardsForEachPlayer){
                cout << 0 << endl;
            }
            else{
                cout << cardsForEachPlayer - highest << endl;
            }
        }
    }
}