#include <iostream>
#include <vector>

using namespace std;
struct str
{
public:
	str()
	{

	}
	~str()
	{

	}
	str* left, * right;
	int value;
};


void new_element(int data, str*& branch)
{
	if (!branch)
	{
		branch = new str;
		branch->value = data;
		branch->left = 0;
		branch->right = 0;
	}
	if (branch->value > data)
	{
		new_element(data, branch->left);
	}
	if (branch->value < data)
	{
		new_element(data, branch->right);
	}
}
int tabs = 0;
void printTree(str*& root)
{
	if (!root) return;
	tabs++;
	printTree(root->left);
	for (int i = 0; i < tabs; i++)
	{
		cout << "   ";
	}
	cout << root->value << endl;
	printTree(root->right);
	tabs--;
	return;
}
int main()
{
	str* Root = 0;
	int s[10] = { 1,-1,2,-2,3,-3,4,-4,0,5 };
	for (int i = 0; i < 10; i++)
	{
		new_element(s[i], Root);
	}
	printTree(Root);
	///vector<vector<int>> v1(0, vector<int>(0));
}
