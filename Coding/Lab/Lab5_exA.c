#include <stdio.h>
#include <stdlib.h>

/* --- Definitions & helper functions (do NOT modify) --- */
typedef struct Node {

    int data;
    struct Node *next;

} Node;

static Node* make_node(int v){

    Node *p = (Node*)malloc(sizeof *p);
    p->data = v;
    p->next = NULL;
    return p;

}

/* Append using a tail pointer. Use this in main() to build lists. */
static void push_back_tail(Node **head, Node **tail, int v){//**modify what pointer points at ;
                                                            // *modify the value store in the location that pointer points at

    Node *n = make_node(v);//new node

    if(!*head){ //not empty

        *head = *tail = n;//= *tail = *n; *head = *tail

    }
    else{ //empty

        (*tail)->next = n; //give the location of next node to pnext(push)
        *tail = n;//*tail pt to new

    }

}

/* --- TODOs --- */
void print_list_prefixed(const char *label, const Node *h){

    printf("%s:", label);

    if (h == NULL) {

        printf("\n");
        return;

    }

    while (h != NULL) {

        printf(" %d", h->data);
        h = h->next;

    }

    printf("\n");

}

void free_list(Node *h){

    Node *temp;

    while (h != NULL) {

        temp = h;
        h = h->next;
        free(temp);

    }

}

Node* merge_sorted_lists(const Node* a, const Node* b){

    Node dummy = {0, NULL};// v = 0; *next = NULL;
    Node *tail = &dummy;

    while (a != NULL && b != NULL) {

        if (a->data <= b->data) {

            tail->next = make_node(a->data);//store value in data and
                                            //store the next_node location in next
            a = a->next;

        } 
        else {

            tail->next = make_node(b->data);
            b = b->next;

        }

        tail = tail->next;

    }

    const Node *rest = (a != NULL) ? a : b; //put the rest of the longer list in

    while (rest != NULL) {

        tail->next = make_node(rest->data);
        tail = tail->next;
        rest = rest->next;

    }

    return dummy.next;

}

void unique_in_place(Node* head){

    Node *cur = head;

    while (cur != NULL && cur->next != NULL) {//not empty or single node ;not the last 

        if (cur->data == cur->next->data) {//if same

            Node *dup = cur->next;
            cur->next = dup->next;
            free(dup);//delete the dup

        } 
        else {

            cur = cur->next;

        }

    }

}


Node* intersect_sorted_lists(const Node* a, const Node* b){

    Node dummy = {0, NULL};
    Node *tail = &dummy;

    while (a != NULL && b != NULL) {

        if (a->data < b->data) {

            a = a->next;

        } else if ( b->data < a->data ) {

            b = b->next;

        } else { //the same

            int val = a->data;
            tail->next = make_node(val);//create new node of the same value
            tail = tail->next;

            while (a != NULL && a->data == val){ //not the last and value is the same with the next

                a = a->next;

            }

            while (b != NULL && b->data == val){

                b = b->next;
                
            }

        }

    }

    return dummy.next;//ptr to the head of the new I list

}

int main(){

    int n, m;

    Node *A = NULL, *At = NULL;
    Node *B = NULL, *Bt = NULL;

    // Build list A
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int val;
        scanf("%d", &val);
        push_back_tail(&A, &At, val);

    }

    // Build list B
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {

        int val;
        scanf("%d", &val);
        push_back_tail(&B, &Bt, val);

    }

    /* --- Compute and Output (do NOT modify) --- */
    Node *M = merge_sorted_lists(A, B);
    unique_in_place(M);
    Node *I = intersect_sorted_lists(A, B);

    print_list_prefixed("MERGE", M);
    print_list_prefixed("INTERSECTION", I);

    free_list(A);
    free_list(B);
    free_list(M);
    free_list(I);

    return 0;
}