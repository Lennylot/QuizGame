#include <stdio.h>
#include <string.h>
#include <ctype.h>


char questions[][100] = {"What company produced the NES and SNES?",
                "What was Marios original name in Japan?",
                "Which actor promoted the original Xbox alongside Bill Gates?", 
                "What is the highest selling console ever?",
                "What was the first video game to release?" };

char user_answer[50];
char correct_answers[][50] = {"nintendo", "jumpman", "the_rock", 
"ps2", "tennis_for_two"}; 
int correct_counter = 0;
int total_questions = 5;

void questions_func(){
    
   for (int i = 0; i < 5; i++)
   {
      printf("%s\n",questions[i]);
      printf("Enter your answer: ");
      scanf("%s", &user_answer);
      
      for (int i = 0; user_answer[i] != '\0'; i++) {
      user_answer[i] = tolower(user_answer[i]);
}
      printf("%s\n", user_answer);   


      
      
    if (strcmp(user_answer, correct_answers[i]) ==0){
        printf("Correct!\n"); 
        correct_counter++;
    }
   }
    if (correct_counter == 5){
        printf("Good Job! You got every question correct.");
    }
    else if (correct_counter < 5) {
        printf("Nice Try! You got some questions wrong.");
        printf("Number of questions correct %d/%d\n ", correct_counter, total_questions);
    }
   
   
       
 
}

int main(){
    questions_func();
    return 0;
}                                                               

