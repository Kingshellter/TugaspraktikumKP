#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Enum untuk dificult
enum Difficulty {
    EASY,
    MEDIUM,
    HARD
};

// Struct untuk menyimpan data pertanyaan
struct Question {
    int randomangka1;
    int randomangka2;
    int jawabanbenar;
};

// Fungsi untuk membuat dan menyimpan pertanyaan ke dalam file
void buatpertanyaan(enum Difficulty difficulty) {
    FILE *file = fopen("questions.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file untuk penulisan pertanyaan.\n");
        exit(1);
    }

    struct Question questions[5];

    for (int i = 0; i < 5; i++) {
        switch (difficulty) {
            case EASY:
                questions[i].randomangka1 = rand() % 10 + 1;
                questions[i].randomangka2 = rand() % 10 + 1;
                break;
            case MEDIUM:
                questions[i].randomangka1 = rand() % 100 + 11;
                questions[i].randomangka2 = rand() % 100 + 11;
                break;
            case HARD:
                questions[i].randomangka1 = rand() % 1000 + 101;
                questions[i].randomangka2 = rand() % 1000 + 101;
                break;
        }

        questions[i].jawabanbenar = questions[i].randomangka1 + questions[i].randomangka2;

        // Menyimpan pertanyaan ke dalam file
        fprintf(file, "%d + %d = ?\n%d\n", questions[i].randomangka1, questions[i].randomangka2, questions[i].jawabanbenar);
    }

    fclose(file);
}

// Fungsi untuk memainkan permainan
void playGame() {
    FILE *file = fopen("questions.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file pertanyaan.\n");
        exit(1);
    }

    struct Question currentQuestion;
    int jawaban, score = 0;

    // Membaca pertanyaan dan menjawabnya
    while (fscanf(file, "%d + %d = ?\n%d\n", &currentQuestion.randomangka1, &currentQuestion.randomangka2, &currentQuestion.jawabanbenar) == 3) {
        printf("\nBerapa hasil dari %d + %d?\n", currentQuestion.randomangka1, currentQuestion.randomangka2);
        printf("Jawaban Anda: ");
        scanf("%d", &jawaban);

        if (jawaban == currentQuestion.jawabanbenar) {
            printf("Jawaban benar!\n");
            score++;
        } else {
            printf("Jawaban salah. Jawaban yang benar adalah %d.\n", currentQuestion.jawabanbenar);
        }
    }

    printf("\nPermainan selesai. Skor Anda: %d/5\n", score);

    fclose(file);
}

int main() {
    enum Difficulty chosenDifficulty;
    printf("Pilih tingkat kesulitan:\n");
    printf("1. Mudah\n");
    printf("2. Sedang\n");
    printf("3. Sulit\n");
    printf("Pilihan Anda: ");
    scanf("%d", (int *)&chosenDifficulty);
    buatpertanyaan(chosenDifficulty);
    playGame();
    return 0;
}
