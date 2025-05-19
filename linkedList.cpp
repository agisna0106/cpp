#include <iostream>
using namespace std;

struct Node{
	char data;
	Node *next = NULL;
};

Node *head = NULL;
Node *tail = NULL;

int count_list() {
	int count = 0;
	Node *bantu = head;
	while(bantu != NULL) {
		count++;
		bantu = bantu->next;
	}
	return count;
}

void show_list() {
	Node *bantu = head;
	if(head == NULL) {
		cout << "Tidak ada data\n";
	} else {
		while(bantu!=NULL) {
			cout << bantu->data << "->";
			bantu = bantu->next;
		}
		cout << "NULL\n";
	}
}

void push_head(char data) {
	Node *node = new Node;
	node->data = data;
	if(head == NULL) {
		head = tail = node;
	} else {
		node->next = head;
		head = node;
	}
}

void push_tail(char data) {
	Node *node = new Node;
	node->data = data;
	if(head == NULL) {
		head = tail = node;
	} else {
		Node *bantu = head;
		while(bantu->next != NULL) {
			bantu = bantu->next;
		}
		bantu->next = node;
		tail = node;
	}
}

void push_mid(int index, char data) {
	int length = count_list(); 
	
	if(index <= 0) {
		push_head(data);
	} else if(index >= length){
		push_tail(data);
	} else {
		Node *node = new Node;
		node->data = data;
		
		Node *bantu = head;
		for(int i=0; i<index-1; i++) {
			bantu = bantu->next;
		}
		node->next = bantu->next;
		bantu->next = node;
	}
}

void pop_head() {
	if (head == NULL) {
        cout << "Data kosong\n";
    } else {
        Node *hapus = head;
        head = head->next;
        if (head == NULL) { // Jika hanya 1 elemen
            tail = NULL;
        }
        delete hapus;
    }
}

void pop_tail() {
    if (head == NULL) {
        cout << "Data Kosong\n";
    } else if (head == tail) { // Hanya satu node
        delete head;
        head = tail = NULL;
    } else {
        Node *bantu = head;
        while (bantu->next != tail) {
            bantu = bantu->next;
        }
        delete tail;
        tail = bantu;
        tail->next = NULL;
    }
}

void pop_mid(int index) {
	int length = count_list(); 
	
	if(head == NULL) {
		cout << "Tidak bisa pop, tidak ada data!\n";
	} else if(index <=0) {
		pop_head();
	} else if(index >= length-1){
		pop_tail();
	} else {
		Node *bantu = head;
		for(int i=0; i<index-1; i++){
			bantu = bantu->next;
		}
		Node *hapus = bantu->next;
		bantu->next = hapus->next;
		
		if(hapus == tail) {
			tail = bantu;
		}
		
		delete hapus;
	}
}

void clear() {
	Node *bantu = head;
	while(bantu != NULL){
		Node *hapus = bantu;
		bantu = bantu->next;
		delete hapus;
	}
	head = tail = NULL;
	cout << "Semua data telah terhapus!\n";
}

int main () {
	push_head('A');
	push_tail('B');
	push_tail('C');
	push_tail('D');
	push_mid(3,'E');
	pop_head();
	pop_tail();
	pop_mid(2);
	show_list();
	
	return 0;
}
