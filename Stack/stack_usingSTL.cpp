#include <bits/stdc++.h>
using namespace std;

class stacks {
    stack<int> st;

public:
    void add() {        
        int data;
        cout << "Enter data: ";
        cin >> data;
        st.push(data);        
    }

    void remove() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << st.top() << " element popped" << endl;
        st.pop();
    }

    void gettop() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element: " << st.top() << endl;
    }

    void display() {
        if (st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements (top to bottom): ";
        stack<int> temp = st;
        while (!temp.empty()) {
            cout << temp.top() << " ";
            temp.pop();
        }
        cout << endl;
    }

    void menu() {
        while (true) {
            int ch;
            cout << "\n\t*******************\n";
            cout << "\t1 Push";
            cout << "\n\t2 Pop";
            cout << "\n\t3 Display";
            cout << "\n\t4 Display Top Element";
            cout << "\n\t5 Exit";  
            cout << "\n\nEnter a choice: ";
            cin >> ch;

            switch (ch) {
                case 1: add(); break;
                case 2: remove(); break;
                case 3: display(); break;
                case 4: gettop(); break;
                case 5: return;  
                default: cout << "Entered a wrong choice!!!" << endl;
            }
        }
    }
};

int main() {
    stacks obj;
    obj.menu();
}
