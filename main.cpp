#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find (delimiter, pos_start)) != string::npos) {
        token = s.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }
    res.push_back (s.substr (pos_start));
    return res;
}

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

    struct Node *next;

};

struct subNode* head = NULL;
void insertSub(string awayTeam, string MoG, string matchID) {
    struct subNode* newnode = (struct subNode*) malloc(sizeof(struct subNode));
    newnode->awayTeam  = awayTeam;
    newnode->MoG  = MoG;
    newnode ->matchID = matchID;
    newnode->prev = NULL;
    newnode->next = head;
    if(head !=  NULL)
        head->prev = newnode ;
    head = newnode;
}
struct Node* head2 = NULL;
void insert(string newPlayer, string newTeam){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode -> playerName = newPlayer;
    newnode -> teamName = newTeam;
    newnode -> next = head2;
    head2 = newnode;
}
// for string delimiter

void display() {

    struct Node* ptr;
    ptr = head2;
    while(ptr != NULL) {
        cout<< ptr->playerName+" " + ptr->teamName <<"\n";
        ptr = ptr->next;
    }
}




int main() {

    string line,token,splitComma=",";
    size_t pos=0;
    ifstream inputFile ("input1.txt");
    if(inputFile.is_open()){
        while(getline(inputFile,line)){
            vector<string> list = split(line,splitComma);
            cout<< list[0]+"\n";

        }

        inputFile.close();
    }




}
