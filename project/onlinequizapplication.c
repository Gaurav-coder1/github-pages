//Online quiz application

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to ask a question and get the answer
int askQuestion(const char *question, const char *options[], const char *correctAnswer) {
    char answer[10];
    time_t startTime, endTime;

    printf("%s\n", question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", options[i]);
    }
    printf("You have 60 seconds to answer. Enter your choice (A/B/C/D): ");

    startTime = time(NULL); // Start the timer
    scanf("%s", answer);
    endTime = time(NULL); // End the timer

    // Check the time limit
    if (difftime(endTime, startTime) > 60) {
        printf("Time's up! You didn't answer in time.\n");
        return 0;
    }

    // Check the answer
    if (answer[0] == correctAnswer[0]) {
        printf("Correct!\n");
        return 1;
    } else {
        printf("Wrong answer.\n");
        return 0;
    }
}

int main() {
    const char *questions[] = {
        "What is the capital of India?",
        "Which programming language is this quiz written in?",
        "Who developed the theory of relativity?"
    };

    const char *options[][4] = {
        {"A. London", "B. Delhi", "C. Rome", "D. Berlin"},
        {"A. Python", "B. Java", "C. C", "D. Ruby"},
        {"A. Isaac Newton", "B. Albert Einstein", "C. Galileo Galilei", "D. Nikola Tesla"}
    };

    const char *correctAnswers[] = {"B", "C", "B"};

    int score = 0;

    printf("Welcome to the Quiz!\n");

    for (int i = 0; i < 3; i++) {
        score += askQuestion(questions[i], options[i], correctAnswers[i]);
    }

    printf("Your final score is: %d out of 3\n", score);
    printf("Thank you for playing!\n");

    return 0;
} 