#include <stdio.h>
#include <stdlib.h>

// Struktur untuk merepresentasikan elemen dalam queue
struct QueueNode {
    int data;
    struct QueueNode* next;
};

// Struktur untuk merepresentasikan queue itu sendiri
struct Queue {
    struct QueueNode* front; // Pointer ke elemen depan queue
    struct QueueNode* rear;  // Pointer ke elemen belakang queue
};

// Fungsi untuk membuat node baru dalam queue
struct QueueNode* createQueueNode(int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk membuat queue baru
struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

// Fungsi untuk menambahkan elemen ke dalam queue
void enqueue(struct Queue* queue, int data) {
    struct QueueNode* newNode = createQueueNode(data);
    
    // Jika queue kosong, elemen baru menjadi elemen pertama
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }

    // Menambahkan elemen baru ke belakang queue
    queue->rear->next = newNode;
    queue->rear = newNode;
}

// Fungsi untuk menghapus elemen dari depan queue
void dequeue(struct Queue* queue) {
    // Jika queue kosong, tidak ada yang dihapus
    if (queue->front == NULL)
        return;

    struct QueueNode* temp = queue->front;

    // Memindahkan pointer front ke elemen berikutnya
    queue->front = queue->front->next;

    // Jika front menjadi NULL, artinya queue kosong, rear juga diatur NULL
    if (queue->front == NULL)
        queue->rear = NULL;

    // Membebaskan memori dari elemen yang dihapus
    free(temp);
}

// Fungsi untuk menampilkan isi dari queue
void displayQueue(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    struct QueueNode* current = queue->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Fungsi utama (main)
int main() {
    // Membuat queue baru
    struct Queue* myQueue = createQueue();

    // Menambahkan elemen ke dalam queue
    enqueue(myQueue, 10);
    enqueue(myQueue, 20);
    enqueue(myQueue, 30);

    // Menampilkan isi queue
    printf("Queue elements: ");
    displayQueue(myQueue);

    // Menghapus elemen dari depan queue
    dequeue(myQueue);

    // Menampilkan isi queue setelah penghapusan
    printf("Queue elements after dequeue: ");
    displayQueue(myQueue);

    return 0;
}
