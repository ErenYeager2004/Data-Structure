#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int>& st, int x) {
    if (st.empty()) {
        st.push(x);
        return;
    }

    int top_element = st.top();
    st.pop();
    insert_at_bottom(st, x);
    st.push(top_element);
}

void print_stack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int x;
    cin >> x;
    
    insert_at_bottom(st, x);
    
    print_stack(st);
}
