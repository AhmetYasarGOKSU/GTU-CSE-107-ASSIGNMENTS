#include <stdio.h>
#include <stdlib.h>

// Bir düğüm yapısını tanımlama
struct Node {
    int data;
    struct Node* next;
};

// Listeyi düz sırada yazdırma fonksiyonu
void displayList(struct Node* head) {
    struct Node* temp = head;
    printf("\nData entered in the list are:\n");
    while (temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

// Listeyi ters sırada yazdırma fonksiyonu (geri dönüşümlü)
void displayReverse(struct Node* head) {
    if (head == NULL) {
        return;
    }
    displayReverse(head->next);
    printf("Data = %d\n", head->data);
}

int main() {
    int n, i, data;
    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Yeni bir düğüm oluştur
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Input data for node %d: ", i);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode; // İlk düğüm baş düğüm olur
        } else {
            temp->next = newNode; // Son düğümün next'i yeni düğümü gösterir
        }
        temp = newNode; // Son düğümü güncelle
    }

    // Listeyi düz sırada yazdır
    displayList(head);

    // Toplam düğüm sayısını yazdır
    printf("\nTotal number of nodes = %d\n", n);

    // Listeyi ters sırada yazdır
    printf("\nThe list in reverse are:\n");
    displayReverse(head);

    return 0;
}

