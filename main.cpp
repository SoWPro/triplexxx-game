#include <iostream>

void PlayGame()
{
   std::cout << "You're a secret agent breaking into a secure server room \n";
       std::cout << "You need to enter the correct code to continue...\n";

        const int CodeA = 4;
        const int CodeB = 3;
        const int CodeC = 2;


        const int CodeSum = CodeA + CodeB + CodeC;
        const int CodePoduct = CodeA * CodeB * CodeC;
    
        // Prints out CodeSum and CodeProduct to the terminal
        std::cout << std::endl;
        std::cout << "There are 3 numbers in the code\n";
        std::cout << "The code adds up to: " << CodeSum << std::endl;
        std::cout << "The code multiplies to give: " << CodePoduct << std::endl;
        
        // Prints outs and stores player guess
        int GuessA, GuessB, GuessC;
        std::cout << "Please input your first guess.\n";
        std::cin >> GuessA;
        std::cout << "Please input your second guess.\n";
        std::cin >> GuessB;
        std::cout << "Please input your third guess.\n";
        std::cin >> GuessC;
        std::cout << "You inputed: "<< GuessA << " " << GuessB << " "  << GuessC << std::endl;

        //computes what the player guesssum and product are
        int GuessSum = GuessA + GuessB + GuessC;
        int GuessProduct = GuessA * GuessB * GuessC; 
        std::cout << "GuessProduct: " << GuessProduct << " GuessSum: " << GuessSum << std::endl;

        //checks if the Player's Guess and computers Number are the same
        if(GuessSum == CodeSum && GuessProduct == CodePoduct)
        {
            std::cout << "Congrats you have access to the server. " << std::endl;
        }
        else
        {
            std:: cout << "Unfortunately the code you entered has set off the alarms. Better make your escape!" << std::endl;
        }
        


}



void PrintIntroduction()
{
const char compTB = 205;
const char compoutsides = 186;
const char compTRCorn = 187;
const char compTLCorn = 201;
const char compBLCorn = 200;
const char compBRCorn = 188;

std::cout << compTLCorn<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB;
std::cout << compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTRCorn<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*********XXXXXXXXXXXXXXXXXXXX*****XXXXXXXXXXX*********XXXXXXXXXXXXXXXXXX*****XXXXXXXXXX******XXXXX****************XXXXXXXXXXXXXXXXX*****"<< compoutsides<<std::endl;
std::cout << compoutsides << "*********XXXXXXXXXXXXXXXXXXXX*****XXXXXX****XXX*******XXXXXXXXXXXXXXXXXX*****XXXXX***XXX*****XXXXX****************XXXXXXXXXXXXXXXXX*****"<< compoutsides<<std::endl;
std::cout << compoutsides << "*********XXXXXXXXXXXXXXXXXXXX*****XXXXXX*****XXX*************XXXXX***********XXXXX****XXX****XXXXX****************XXXXX*****************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXX****XXX**************XXXXX***********XXXXX***XXX*****XXXXX****************XXXXXXXXXX************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXXXXXXX****************XXXXX***********XXXXXXXXXX******XXXXX****************XXXXXXXXXX************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXXXXXXXX***************XXXXX***********XXXXX***********XXXXX****************XXXXXXXXXX************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXX**XXXXX**************XXXXX***********XXXXX***********XXXXX****************XXXXX*****************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXX***XXXXX******XXXXXXXXXXXXXXXXXX*****XXXXX***********XXXXXXXXXXXXXXXX*****XXXXXXXXXXXXXXXXX*****"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXX************XXXXXX****XXXXX*****XXXXXXXXXXXXXXXXXX*****XXXXX***********XXXXXXXXXXXXXXXX*****XXXXXXXXXXXXXXXXX*****"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*********XXX****************XXX************XXXXXXXXXX***********************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "**********XXX**************XXX************XXXXX*****************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "***********XXX************XXX***********************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "************XXX**********XXX************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*************XXX********XXX*************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "**************XXX******XXX**************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "***************XXX****XXX***************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************XXX**XXX****************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXXX*****************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "******************XXXX******************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "******************XXXX******************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*****************XXXXXX*****************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************XXX**XXX****************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "***************XXX****XXX***************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "**************XXX******XXX**************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*************XXX********XXX*************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "************XXX**********XXX************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "***********XXX************XXX***********************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "**********XXX**************XXX**********************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "*********XXX****************XXX*********************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compoutsides << "****************************************************************************************************************************************"<< compoutsides<<std::endl;
std::cout << compBLCorn<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compTB<<compBRCorn<<std::endl;
//std::cout.flush();

}

//std::cout << ""<<std::endl;

int main()
{ 
    //Introdcution of game
    PrintIntroduction();
    PlayGame();

       return 0;
}
