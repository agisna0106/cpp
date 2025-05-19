#include <iostream>
#define MAX 3
using namespace std;

struct Stack{
	int top;
	int value[MAX];
};

void initStack(Stack *stack) {
	stack->top = -1;
}

bool isEmpty(Stack *stack) {
	return stack->top == -1;
}

bool isFull(Stack *stack) {
	return stack->top == MAX-1;
}

void push(Stack *stack, int data) {
	if(isFull(stack)) {
		cout << "Tumpukan penuh!\n";
	} else {
		stack->value[++(stack->top)] = data;
		cout << "Data berhasil disimpan\n";
	}
}

void pop(Stack *s) {
	if(isEmpty(s)) {
        cout << "Data kosong!\n" << endl;
    } else {
        cout << s->value[s->top--] << " berhasil dikeluarkan" << endl;
    }
} 

void display(Stack* s) {
    if(isEmpty(s)) {
        cout << "Data kosong!" << endl;
    } else {
        cout << "Isi Data:" << endl;
        for(int i = s->top; i >= 0; i--) {
            cout << "- " << s->value[i] << endl;
        }
    }
}

int main() {
	Stack *tumpukan1 = new Stack;
	initStack(tumpukan1);
	push(tumpukan1, 1);
	push(tumpukan1, 2);
	push(tumpukan1, 3);
	pop(tumpukan1);
	display(tumpukan1);
	
	return 0;
}
