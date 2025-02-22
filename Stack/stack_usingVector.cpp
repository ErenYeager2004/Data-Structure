#include <bits/stdc++.h>
using namespace std;

class stacks {
    vector<int> st;

public:
    bool isempty() {
        return st.empty();
    }

    void push() {            
        cout << "Enter data: ";
        int data;
        cin >> data;
        st.push_back(data);
        cout << data << " pushed into the stack.\n";
    }

    void pop() {
        if (isempty()) {
            cout << "Stack underflow! No elements to pop.\n";
            return;
        }
        cout << st.back() << " element popped.\n";
        st.pop_back();
    }

    void display() {
        if (isempty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack (Top to Bottom): ";
        for (int i = st.size() - 1; i >= 0; i--) {
            cout << st[i] << " --> ";
        }
        cout << "X\n";
    }
};

int main() {
    stacks obj;
    int choice;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: obj.push(); break;
            case 2: obj.pop(); break;
            case 3: obj.display(); break;
            case 4: cout << "Exiting program.\n"; return 0;
            default: cout << "Invalid choice! Try again.\n";
        }
    }
}
