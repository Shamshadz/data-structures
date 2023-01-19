// Nitin and Sobhagya were playing a game with coins.If Sobhagya has more coins then he is winning, 
// otherwise Nitin is winning.Note that this means if both Nitin and Sobhagya have the same number
// of coins, then Nitin is winning.Initially Nitin has A coins while Sobhagya has B coins.Then 
// Ritik came and gave his C coins to the player who is not winning currently, after which 
// Satyarth came and repeated the same process(gave his D coins to the player who is not
// winning currently).Find the final winner of the game.

#include <iostream>
using namespace std;


// main() is where program execution begins.
int main() {
    int t;
    cin>>t;

    while(t--){
        int N, S, R, St;
        cin>>N>>S>>R>>St;

        if(N>S){
            S = S+R;
            if(N>S){
                S = S+R;
            }
            else{
                N = N+R;
            }
        }
        else{
            N = N+R;
        }
    }

   return 0;
}