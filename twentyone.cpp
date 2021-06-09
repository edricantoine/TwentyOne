/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int y = 0;
int o = 0;



void init_step(int yScore, int oScore) {
    srand(time(0));  // Initialize random number generator.
     
    int ran2y;
    int ran2o;
   
    
        
    ran2y = (rand() % 11) + 1;
    ran2o = (rand() % 11) + 1;
  
    
    std::string HorS;
    std::string oHorS;
    bool YC;
    bool OC;
    
    std::cout << "Player 1's score is " << yScore << "\n";
    std::cout << "Player 2's score is " << oScore << "\n";
    std::cout << "Player 1: Will you hit (h) or stay (s)?\n";
    std::cin >> HorS;
    std::cout << "Player 2: Will you hit (h) or stay (s)?\n";
    std::cin >> oHorS;
    
    if (HorS == "h") {
        YC = true;
    } else {
        YC = false;
    }
    if (oHorS == "h") {
        OC = true;
    } else {
        OC = false;
    }
    
    
    if (YC && OC) {
        yScore += ran2y;
        oScore += ran2o;
        
    } else if (YC && !OC) {
        yScore += ran2y;
        
    } else if (!YC && OC) {
        oScore += ran2o;
        
    } else {
        yScore = yScore;
        oScore = oScore;
        
    }
    
    if (yScore == 21 && oScore == 21) {
        std::cout << "Both players win!\n";
    } else if (yScore == 21 & oScore != 21) {
       std::cout << "Player 1, your score was " << yScore << "! You win!\n";
       std::cout << "Player 2, your score was " << oScore << "!\n";
    } else if (oScore ==  21 & yScore != 21) {
        std::cout << "Player 2, your score was " << oScore << "! You win!\n";
        std::cout << "Player 1, your score was " << yScore << "!\n";

        
    } else if (yScore > 21 && oScore > 21) {
        std::cout << "Both players lose.\n";
    } else if (yScore > 21) {
        std::cout << "Player 2, your score was " << oScore << "!\n";
        std::cout << "Player 1, your score was " << yScore << "! You went over 21! Player 2 wins!.\n";
    } else if (oScore > 21) {
        std::cout << "Player 1, your score was " << yScore << "!\n";
        std::cout << "Player 2, your score was " << oScore << "! You went over 21! Player 1 wins!\n";
    } else {
        init_step(yScore, oScore);
    }
    
    
    
    
    
}



int main()
{
    init_step(y, o);
    return 0;
    
}

