#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
			
	}
};

class BinaryTree {
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;   //INITIALIZING ROOT TO NULL
	}

	void insert(string element) //insert a node to binary search tree
	{
		Node* NewNode =  new Node(element, NULL, NULL);  //ALCOATE MEMORY FOR THE NEW NODE
		NewNode->info = element;	//assign value to the data field of the new node
		NewNode->leftchild = NULL;	//MAKE THE LEFT CHILD OF THE NEWNODE POINT TO NULL
		NewNode->rightchild = NULL;	//MAKE THE RIGHT CHILD OF THE NEW NODE POINT TO NULL

		Node* parrent = NULL;
		Node* currentNode = NULL;
		search(element, parrent, currentNode);	//locate the node which will be the parrent of the node to be inserted

		if (parrent == NULL) //if the parrent is null (tree is empty)
		{
			ROOT = newNode;	//mark the new node as ROOT
		}
	}
};