#include <iostream>
#define MAX 5
using namespace std;

struct Node {
	char label = ' ';
	bool connected[MAX];
} vertex[MAX];

void add_vertex(char label, int index) {
	vertex[index].label = label;
	for(int i=0; i<MAX; i++) {
		vertex[index].connected[i] = false;
	}
}

void connect(int src, int dest) {
	vertex[src].connected[dest] = true;
	vertex[dest].connected[src] = true;
}

void display_vertex() {
	cout << "Data vertex: \n";
	for(int i=0; i<MAX; i++) {
		cout << "- " << vertex[i].label << endl;
	}
}

void display_connectivity() {
	cout << "\nKonektivitas antar vertex : \n";
	for(int i=0; i<MAX; i++) {
		cout << vertex[i].label << " : ";
		for(int j=0; j<MAX; j++) {
			if(vertex[i].connected[j]) {
				cout << vertex[j].label << " ";
			}
		}
		cout << endl;
	}

}

void display_matrix() {
	cout << "\nMatrix Adjency:\n";
	cout << " ";
	for(int i=0; i<MAX; i++) {
		cout << " " << vertex[i].label ;
	}
	cout << endl;
	for(int i=0; i<MAX; i++) {
		cout << vertex[i].label << " ";
		for(int j=0; j<MAX; j++) {
			if (vertex[i].connected[j]) {
                cout << 1 << " ";
            } else {
            	cout << 0 << " ";
			}
//			cout << (vertex[i].connected[j] ? 1 : 0) << " ";
		}
		cout << endl;
	}
}

int main() {
	for (char i = 'A'; i <= 'E'; i++) {
        add_vertex(i, i - 'A');
    }
    
    display_vertex();
    
    connect(0, 4);
    connect(1, 3);
    connect(3, 4);
    
    display_connectivity();
    display_matrix();
    
    return 0;
}
