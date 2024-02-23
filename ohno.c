#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* Name: Ket-Hwa Cheng
   Date 1/24/2024
   Class: cs 449
   Goal: try to make mastermind program
   ****************************************************

   ****************************************************
   */

//prototype for getting random pegs 1,2,3,4
char random_pegs();
int string_check(char array[], char win[]);
int char_position(char array[]);

int main(){
        srand(time(NULL));
        // this is for the variables used in program
        char clean;
        int i; //play loop
        int first; // for the first number matching
        char play_game; // character entered to play game
        char pegs_defined[5]; // peg array
        int num_correct_position; // correct color, corre
	int tries; //num of tries
        char guesses[5];// guess input char
        char *guess_ptr; // check null pointer
        char buffer[100];
        //introduction to the game
        printf("Welcome to Mastermind\n");
        printf("Would you like to play? please type in the ch>        fgets(buffer, sizeof(buffer),stdin);
        play_game = buffer[0];
        //loop for if you don't type y or n
        while(play_game != 'y')
        {
            if(play_game == 'n')
            {
                return 0;
            }
            printf("it appears that you have entered a %c \n">            printf("please try again with a y or n: \n");
        }

        // loop for game
        do{
        play_game = 'y';
        buffer[0]='\0';
        //set random pegs into place
        pegs_defined[0] = random_pegs();
        pegs_defined[1] = random_pegs();
        pegs_defined[2] = random_pegs();
        pegs_defined[3] = random_pegs();
        pegs_defined[4] = '\0';

        //testing the result
        //printf("%c %c %c %c \n",pegs_defined[0],pegs_define>

        // guesses for player
        for (tries = 1; tries <= 10;tries++)
        {
                //empty array just in case
            printf("Guess number %d: ", tries);
            fgets(guesses, sizeof(guesses),stdin);
            //fread(guesses,sizeof(char),4,stdin); doesn't wo>            //needs a check to see if guesses is equal to the>
            //remove the /n from line
            if(strlen(guesses) >0 && guesses[strlen(guesses)->                guesses[strlen(guesses)-1] = '\0';
            }
	 if(strncmp(guesses,pegs_defined,4) == 0)
            {
                printf("You Win\n");
                break;
            }
            else
        //counts number of correct color wrong placement
            num_wrong_position =0;
            for (i=0;i<=3;i++)
            {
                guess_ptr = strchr(guesses,pegs_defined[i]);
            if(guess_ptr != NULL && guesses[i] != pegs_define>                num_wrong_position+=1;
            }
            }
        //compare indexes of arrays if they match and counts >        first = 0;
        if(guesses[0] == pegs_defined[0])
        {
            first+=1;
        }
        if(guesses[1] == pegs_defined[1])
        {
            first+=1;
        }
        if(guesses[2] == pegs_defined[2])
if(guesses[2] == pegs_defined[2])
        {
            first+=1;
        }
        if (guesses[3] == pegs_defined[3])
        {
            first+=1;
        }
        num_correct_position = first; //count num of correct >            printf("Colors in the correct place: %d \n", num_>            printf("Colors correct but in wrong position: %d >                //this cleans the file through getting all ch>
                do{
            clean = getchar();
            }while(clean!= '\n');
        }

            printf("the code was: %c%c%c%c \n",pegs_defined[0>            printf("would you like to play again? (y) to play>
                // emptying array
            if(buffer[0] != '\0'){
                buffer[0] = '\0';
                printf("empting array\n");
                }
                //cleans
                 do{
            clean = getchar();

}while(clean!= '\n');
            fgets(buffer,sizeof(buffer), stdin);
            //remove the /n from line
            if(strlen(buffer) >0 && buffer[strlen(buffer)-1 =>                guesses[strlen(buffer)-1] = '\0';
            }
            play_game = buffer[0];
            if(play_game == 'n')
            {
                return 0;
            }
        }while(play_game == 'y');
        printf("thank you for playing");
}
char random_pegs(void)
{
        char color; // color for return
        int color_num; //number to get color
        color_num = rand()%(6)+1;
        //switches for color depending on number
        switch(color_num)
        {
            case 1:
            color = 'r';
            break;

            case 2:
 color = 'b';
            break;

            case 3:
            color = 'y';
            break;

            case 4:
            color = 'g';
            break;

            case 5:
            color = 'o';
            break;

            case 6:
            color = 'p';
            break;
        }
        return color;
}
