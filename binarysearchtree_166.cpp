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
		Node* newNode =  new Node(element, NULL, NULL);  //ALCOATE MEMORY FOR THE NEW NODE
		newNode->info = element;	//assign value to the data field of the new node
		newNode->leftchild = NULL;	//MAKE THE LEFT CHILD OF THE NEWNODE POINT TO NULL
		newNode->rightchild = NULL;	//MAKE THE RIGHT CHILD OF THE NEW NODE POINT TO NULL

		Node* parrent = NULL;
		Node* currentNode = NULL;
		search(element, parrent, currentNode);	//locate the node which will be the parrent of the node to be inserted

		if (parrent == NULL) //if the parrent is null (tree is empty)
		{
			ROOT = newNode;	//mark the new node as ROOT
		}
		
		if (element < parrent->info) //if the vlaue in the data field of the new node is less than that of the parrent
		{
			parrent->leftchild = newNode;	//make the left child of the parrent point to the New Node
		}

		else if (element > parrent->info) //if the value in the data field of the new node is greater than that of the parrent 
		{
			parrent->rightchild = newNode;	//make the right child of the parrent point to the new Node
		}
	}

	void search(string element, Node*& parrent, Node*& currentNode)
	{
		//this function searches the currenNode	of the specified Node as well as currentNode of its parrent 
		currentNode = ROOT;
		parrent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parrent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}

	void inorder(Node* ptr)
	{
		if (ROOT = NULL)
		{
			cout << "Tree Is Empty" << endl;
			return;
		}

		if (ptr != NULL)
		{
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}

	void preorder(Node* ptr)
	{
		if (ROOT = NULL)
		{
			cout << "Tree Is Empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}

	void postorder(Node* ptr)
	{
		// performs the postorder traversal of the tree
		if (ROOT = NULL)
		{
			cout << "Tree Is Empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			postorder(ptr->leftchild);
			postorder(ptr->rightchild);
			cout << ptr->info << " ";
		}
	}
};

int main()
{

}