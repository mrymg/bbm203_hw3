#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

struct subNode{
    string awayTeam;
    string MoG;
    string matchID;
    struct subNode *prev;
    struct subNode *next;
};
struct Node {
    string playerName;
    string teamName;
    struct subNode;
    struct Node *prev;
    struct Node *next;
};
struct Node* head = NULL;
void insert(string newPlayer, string newTeam) {
    struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
    newnode->playerName  = newPlayer;
    newnode ->teamName = newTeam;
    newnode->prev = NULL;
    newnode->next = head;
    if(head !=  NULL)
        head->prev = newnode ;
    head = newnode;
}
void readInput(){
    string line,token;
    ifstream inputFile ("input1.txt");
    if(inputFile.is_open()){
        while(getline(inputFile,line, ',')){

        }
        inputFile.close();
    }
    else
        cout<< "ERROR OCCURED WHILE FILE OPENING";



};

void readOpr(){
    ifstream oprFile ();

};
void display() {
    struct Node* ptr;
    ptr = head;
    while(ptr != NULL) {
        cout<< ptr->playerName+" " + ptr->teamName <<"\n";
        ptr = ptr->next;
    }
}

int main() {

       readInput();

}
