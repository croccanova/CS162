

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "RPSGame.hpp"
#include "iVal.hpp"
#include "inputValidation.hpp"
#include "menuFunctions.hpp"

using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    

    char strengthChoice; // holds y/n to set custom tool strengths
    char toolChoice; // hold r/p/s for users tool choice
    bool useCustomStrength = false; // use custom strengths
    int mainChoice;
    
    // custom tool strengths
    int rockStrength = 1;
    int paperStrength = 1;
    int scissorsStrength = 1;
    
    
    // Welcome user and get y/n for whether to set custom tool strengths
    cout << "Welcome to Rock, Paper, Scissors!" ;
    
    // loop to validate y/n input
    do {
        //prompt user to enter y/n
        cout << " Do you want to choose different strengths for the tools? (y-yes, n-no): " << endl;

        std::string menuName = "Rock Paper Scissors: Main Menu";
        std::string options[3] = {"Play new game with custom tool strengths",
                                  "Play new game with default tool strengths",
                                  "Quit Program"};
        displayMenu(menuName, options, 3);
        std::cout << "Enter your choice: ";
        mainChoice = getValidInt(1,3);

        RPSGame game; // create the game object
        useCustomStrength = false; // resets useCustomStrength to false
        switch (mainChoice) {
            case 1: // use custom strengths
            {
                //get tool strengths from user
                cout << "Please enter a strength value for rock (1-10): " << endl;
                rockStrength = getValidInt(1, 10);
                cout << "Please enter a strength value for paper (1-10): " << endl;
                paperStrength = getValidInt(1, 10);
                cout << "Please enter a strength value for scissors (1-10): " << endl;
                scissorsStrength = getValidInt(1, 10);
                useCustomStrength = true; // allows access to following if block
            }

            case 2: // use standard tool strengths or custom strengths are set
            {
                do {
                    // prompt user to enter tool selection
                    cout << "Choose your tool (r-rock, p-paper, s-scissor, e-exit to main menu): " << endl;

                    // get character for tool choice
                    toolChoice = cin.get();
                    cin.ignore(1024, '\n');
                    cin.clear();

                    toolChoice = tolower(toolChoice); //convert to lowercase


                    if (toolChoice == 'r' || toolChoice == 'p' || toolChoice == 's') // valid input
                    {
                        if (useCustomStrength) {
                            // initiate round passing custom tool strength arguments
                            // all three tool strengths are passed for computers tool selection
                            game.playRound(toolChoice, useCustomStrength, rockStrength, paperStrength, scissorsStrength);
                        }
                        else {
                            // initiate round with standard tool strengths
                            game.playRound(toolChoice);
                        }

                    }
                    else if (toolChoice == 'e') // exit program
                    {
                        cout << "Let's play again soon!" << endl;
                    }
                    else // invalid input
                    {
                        // prompt user to enter a valid input value
                        cout << "Please enter 'r' for rock, 'p' for paper, or 's' for scissors." << endl;
                    }


                } while (toolChoice != 'e'); // loop until user chooses to exit

                break;
            }
            case 3: //exit program
            {
                cout << "thanks for playing!" << endl;
            }
        }

    } while (mainChoice != 3); // loop until user exits

    return 0;
}
