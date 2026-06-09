#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int x)
  {
    data = x;
    left = right = nullptr;
  }
};

Node *CreatBST(Node *root, int val)
{
  if (root == nullptr)
  {
    Node *temp = new Node(val);
    return temp;
  }

  if (val > root->data)
  {
    root->right = CreatBST(root->right, val);
  }
  else
  {
    root->left = CreatBST(root->left, val);
  }

  return root;
}

void InOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }

  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}

Node *DelSmallest(Node *root)
{
  if (root == nullptr)
  {
    return nullptr;
  }

  if (root->left == nullptr)
  {
    Node *temp = root->right;
    delete root;
    return temp;
  }

  root->left = DelSmallest(root->left);

  return root;
}
Node *DelHIghest(Node *root)
{
  if (root == nullptr)
  {
    return nullptr;
  }

  if (root->left == nullptr)
  {
    Node *temp = root->right;
    delete root;
    return temp;
  }

  root->left = DelSmallest(root->left);

  return root;
}

void LebleOrder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }
  queue<Node *> q;
  q.push(root);

  while (!q.empty())
  {
    Node *temp = q.front();
    q.pop();

    cout << temp->data << " ";

    if (temp->left != nullptr)
    {
      q.push(temp->left);
    }
    if (temp->right != nullptr)
    {
      q.push(temp->right);
    }
  }
}

int main()
{

  int arr[] = {-1, 2, 45, 6, 89, 0};

  Node *root = nullptr;

  for (int i = 0; i < 6; i++)
  {
    root = CreatBST(root, arr[i]);
  }
  InOrder(root);
  root = DelSmallest(root);
  cout << endl;

  InOrder(root);

  root = DelHIghest(root);
  cout << endl;

  InOrder(root);

  cout << endl;

  cout << "Leble Order : ";
  LebleOrder(root);

  return 0;
}