#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur untuk merepresentasikan skill
struct listskill {
    char name[50];
    int damage;
    int mana;
    struct listskill* next;
};

// Fungsi untuk membuat node baru (skill dalam listskill) 
struct listskill* createskill(const char* name, int damage, int mana) {
    struct listskill* newItem = (struct listskill*)malloc(sizeof(struct listskill));
    if (newItem == NULL) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(newItem->name, name);
    newItem->damage = damage;
    newItem->mana = mana;
    newItem->next = NULL;
    return newItem;
}

// Fungsi untuk menambahkan skill ke listskill (linked list)
void addskill(struct listskill** head, const char* name, int damage, int mana) {
    struct listskill* newItem = createskill(name, damage, mana);
    newItem->next = *head;
    *head = newItem;
}

// Fungsi untuk menampilkan isi skill (linked list)
void displayskill(struct listskill* head) {
    struct listskill* current = head;
    printf("Skill:\n");
    while (current != NULL) {
        printf("%-20s damage: %-5d mana: %-7.2d\n", current->name, current->damage, current->mana);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Inisialisasi listskill (linked list) kosong
    struct listskill* skill = NULL;

    // Menambahkan beberapa skill ke dalam listskill
    addskill(&skill, "bomb", 50, 20);
    addskill(&skill, "slash", 30, 20);
    addskill(&skill, "serious punch", 99, 70);

    // Menampilkan isi listskill
    displayskill(skill);

    return 0;
}
