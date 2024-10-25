#include <bits/stdc++.h>

#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node* next;
};

class LinkedList {
   public:
    Node* head;
    int length;

    LinkedList() {
        head = NULL;
        length = 0;
    }

    void append(int new_data) {
        Node* new_node = new Node();
        new_node-> data = new_data;
        new_node-> next = NULL;

        Node* last = head;

        if (head == NULL) {
            head = new_node;
            return;
        }

        while (last-> next != NULL) {
            last = last-> next;
        }

        last-> next = new_node;
        length++;
    }

    void insert(int index, int data) {
        Node* curr = new Node();
        curr-> next = head;

        for (int i = 0; i < index && curr->next != NULL; i++) {
            curr = curr->next;
        }
        Node* newNode = new Node();
        newNode-> data = data;
        newNode-> next = curr-> next;
        if (index == 0) {
            head = newNode;
        } else {
            curr->next = newNode;
        }
        length++;
    }

    void appendLeft(int data) {
        insert(0, data);
        length++;
    }

    void remove(int data) {
        Node* tmp = head;

        while (tmp != NULL)

        {
            if (tmp-> next-> data == data) {
                tmp-> next = tmp->next->next;
                break;
            }
            tmp = tmp->next;
        }
        length--;
    }

    bool empty(Node* head) {
        if (head != nullptr) {
            cout << "1";
        } else {
            cout << "0";
        }
    }

    int size() {
        cout << " " << length;
    }

    bool exists(int value) {
        Node* current = head;

        while (current != nullptr) {
            if (current-> data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    int get(int index) {
        Node* current = head;
        int currentIndex = 0;

        while (current != nullptr) {
            if (currentIndex == index) {
                return current-> data;
            }
            current = current-> next;
            currentIndex++;
        }
    }

    void print() {
        Node* node = head;
        while (node != NULL) {
            cout << node-> data << " => ";
            node = node-> next;
        }
        cout << "\n";
    }
};

int main() {
    Node* head = nullptr;
    LinkedList list;

    list.append(2);
    list.append(6);
    list.append(9);
    list.append(1);
    list.append(8);
    list.append(0);
    list.print();

    list.insert(0, 5);
    list.insert(4, 5);
    list.insert(10, 5);
    list.print();
    list.appendLeft(11);
    list.print();

    list.remove(9);
    list.print();

    list.empty(head);

    cout << endl;

    list.size();

    cout << endl;

    cout << " " << list.exists(4) << endl;

    cout << " " << list.get(1);

    return 0;
}