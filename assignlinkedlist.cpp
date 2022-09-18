#include <iostream>
using namespace std;

class family_name{
    public:
    string name1;
    int age1; 
       
    family_name* prev;
    family_name* next;

    // creating the constructor
    family_name(string d, int a){
        this-> name1 = d;
        this-> age1 = a;
        this->prev = NULL;
        this-> next = NULL;
        
    }  
    };
// forming a function to connect the nodes in the linked list.
void connecting_Node(family_name* &node1, family_name* &node2, family_name* &node3){

    node1->prev = NULL; 
    node1->next = node2;
    node2->next = node3;
    node2->prev = node1;
    node3->next = NULL;
    node3->prev = node2;   
};

// creating a function to create the node.

void print(family_name* node1){
   family_name* temp = node1;

    while(temp!= NULL){
        cout << temp->name1 << " "; 
        cout  << temp->age1 << endl;
        temp = temp->next;
        }
};
// declaring the required output
int main(){
    family_name* node1 = new family_name("Anurag Bansal",45);
    family_name* node2 = new family_name("Vandna Bansal",44);
    family_name* node3 = new family_name("Garv Bansal",18);

    connecting_Node(node1,node2,node3);
  
    
   print(node1);

   return 0;   

}