#include <iostream>
using namespace std;

struct Node
{
    int coeff;
    int power;
    Node* next;
};

// Create a new node
Node* createNode(int coeff, int power)
{
    Node* newNode = new Node;

    newNode->coeff = coeff;
    newNode->power = power;
    newNode->next = NULL;

    return newNode;
}

// Insert node at end
void insert(Node*& head, int coeff, int power)
{
    Node* newNode = createNode(coeff, power);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display polynomial
void display(Node* head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->coeff << "x^" << temp->power;

        if (temp->next != NULL)
            cout << " + ";

        temp = temp->next;
    }

    cout << endl;
}

// Add two polynomials
Node* addPolynomial(Node* p1, Node* p2)
{
    Node* result = NULL;

    while (p1 != NULL && p2 != NULL)
    {
        if (p1->power == p2->power)
        {
            insert(result, p1->coeff + p2->coeff, p1->power);

            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->power > p2->power)
        {
            insert(result, p1->coeff, p1->power);

            p1 = p1->next;
        }
        else
        {
            insert(result, p2->coeff, p2->power);

            p2 = p2->next;
        }
    }

    // Remaining terms of first polynomial
    while (p1 != NULL)
    {
        insert(result, p1->coeff, p1->power);
        p1 = p1->next;
    }

    // Remaining terms of second polynomial
    while (p2 != NULL)
    {
        insert(result, p2->coeff, p2->power);
        p2 = p2->next;
    }

    return result;
}

int main()
{
    Node* poly1 = NULL;
    Node* poly2 = NULL;
    Node* result = NULL;

    // Polynomial 1 = 5x^3 + 4x^2 + 2
    insert(poly1, 5, 3);
    insert(poly1, 4, 2);
    insert(poly1, 2, 0);

    // Polynomial 2 = 3x^3 + 2x^2 + 7x + 1
    insert(poly2, 3, 3);
    insert(poly2, 2, 2);
    insert(poly2, 7, 1);
    insert(poly2, 1, 0);

    cout << "First Polynomial: ";
    display(poly1);

    cout << "Second Polynomial: ";
    display(poly2);

    result = addPolynomial(poly1, poly2);

    cout << "Sum: ";
    display(result);

    return 0;
}