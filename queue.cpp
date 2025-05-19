#include <iostream>
#define MAX 3
using namespace std;

struct Queue {
    int data[MAX];
    int front;
    int rear;
};

void init(Queue* q) {
    q->front = 0;
    q->rear = 0;
}

bool isEmpty(Queue* q) {
    return q->front == q->rear;
}

bool isFull(Queue* q) {
    return q->rear == MAX;
}

void enqueue(Queue* q, int value) {
    if (isFull(q)) {
        cout << "Queue penuh!\n";
    } else {
        q->data[q->rear++] = value;
        cout << value << " berhasil ditambahkan.\n";
    }
}

void dequeue(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Elemen " << q->data[q->front++] << " dihapus.\n";
    }
}

void retrieve(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Elemen terdepan adalah: " << q->data[q->front] << endl;
    }
}

void clear(Queue* q) {
    q->front = 0;
    q->rear = 0;
    cout << "Semua elemen queue telah dihapus.\n";
}

void display(Queue* q) {
    if (isEmpty(q)) {
        cout << "Queue kosong!\n";
    } else {
        for (int i = q->front; i < q->rear; i++) {
            cout << q->data[i] << " ";
        }
        cout << endl;
    }
}

int main() {
	Queue* q1 = new Queue;
    init(q1);
    enqueue(q1, 10);
    enqueue(q1, 20);
    enqueue(q1, 30);
    dequeue(q1);
    display(q1);
    retrieve(q1);
    clear(q1);
    display(q1);
	
	return 0;
}
