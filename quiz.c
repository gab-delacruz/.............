#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][500] = {"Who is a hedgehog? AHJHAJDSAJDSFDHJFDFHK",
                        "How many legs does Play have?", 
                        "What is the strongest form of Alrou?", 
                        "What is the name of Spidee-Man's best duo?", 
                        "What is the name of Mango's father?"};
    
    char choices[][5][500] = {{"A. Soap", "B. James", "C. Alrou", "D. Gingging"},
                         {"A. 10", "B. 20", "C. 15", "D. 5"}, 
                         {"A. Legendary Phoenix", "B. Cosmic Form", "C. Chosen One", "D. Dark Form"}, 
                         {"A. Play", "B. OmniKing", "C. Spoodee-Man", "D. Spider-Moan"}, 
                         {"A. Mango Man", "B. Electric-Fan", "C. X-Althee", "D. Casioh Supra Desmpenar"}};

    int question_num = 0;
    int answers[] = {1,3,0,2,0};
    char guess;
    int score = 0;
    int guess2;

    for(int i = 0; i < sizeof(questions) / sizeof(questions[0]); i++){
        printf("%s\n", questions[i]);
        for(int j = 0; j < sizeof(choices[0]) / sizeof(choices[0][0]); j++){
            printf("%s\n", choices[i][j]);
        }

        printf("Choose your answer: ");
        scanf(" %c", &guess);
        guess = toupper(guess);
        guess2 = guess - 'A';

        if(guess2 == answers[i]){
            printf("CORRECT!\n");
            score += 1;
        }else{
            printf("WRONG!\n");
        }


    }

    printf("DONE! Your score is %d/5", score);

    return 0;
}