// #include <iostream>
// using namespace std;
// struct stack
// {
//   int size;
//   int top;
//   int *arr;

//   stack(int x)
//   {
//     size = x;
//     top = -1;
//     arr = new int[x];
//   }

//   bool isFull()
//   {
//     return top == size - 1;
//   }

//   bool isEmpty()
//   {
//     return top == -1;
//   }

//   void push(int x)
//   {
//     if (isFull())
//     {
//       cout << "Stack Overflow" << endl;
//       return;
//     }
//     cout << "Pushed " << x << " in Stack." << endl;
//     top++;
//     arr[top] = x;
//   }

//   void pop()
//   {
//     if (isEmpty())
//     {
//       cout << "Stack is Empty" << endl;
//       return;
//     }
//     // cout << "Pop " << arr[top] << " into the stack" << endl;
//     top--;
//   }

//   void isSize()
//   {
//     cout << top + 1;
//   }

//   void peek()
//   {
//     if (isEmpty())
//     {
//       cout << "The stack is Empty" << endl;
//       return;
//     }
//     cout << arr[top];
//   }
// };

// void printStack(stack &s)
// {
//   while (!s.isEmpty())
//   {
//     s.peek();
//     cout << endl;
//     s.pop();
//   }
// }

// int main()
// {
//   stack s(10);

//   s.push(10);
//   s.push(20);
//   s.push(30);
//   s.pop();
//   s.push(40);
//   s.push(50);

//   printStack(s);

//   return 0;
// }

// #include <iostream>
// // #include <queue>
// using namespace std;
// struct queue
// {
//   int size;
//   int front;
//   int rear;
//   int *arr;

//   queue(int x)
//   {
//     size = x;
//     front = rear = -1;
//     arr = new int[x];
//   }
//   bool isEmpty()
//   {
//     return front == -1;
//   }

//   bool isFull()
//   {
//     return (rear + 1) % size == front;
//   }

//   void enqueue(int data)
//   {
//     if (isEmpty())
//     {
//       front = rear = 0;
//       arr[0] = data;
//       return;
//     }

//     if (isFull())
//     {
//       cout << "Queue is Full" << endl;
//       return;
//     }

//     else
//     {
//       rear = (rear + 1) % size;
//       arr[rear] = data;
//       cout << "Enqueue " << data << " into Queue" << endl;
//     }
//   }
//   void dequeue()
//   {
//     if (isEmpty())
//     {
//       cout << "Queue is Empty" << endl;
//       return;
//     }
//     cout << "Dequeued " << arr[front] << endl;
//     if (front == rear)
//     {
//       front = rear = -1;
//     }

//     else
//     {
//       front = (front + 1) % size;
//     }
//   }

//   int peek()
//   {
//     if (!isEmpty())
//       return arr[front];
//     else
//       return -1;
//   }

//   // int isSize()
//   // {
//   //   return rear + 1;
//   // }

//   void printQ()
//   {
//     if (isEmpty())
//     {
//       cout << "Queue is empty" << endl;
//       return;
//     }

//     int i = front;
//     cout << "Queue elements: ";
//     while (true)
//     {
//       cout << arr[i] << " ";
//       if (i == rear)
//         break;
//       i = (i + 1) % size;
//     }
//     cout << endl;
//   }
// };

// int main()
// {
//   queue q(4);

//   q.enqueue(1);
//   q.enqueue(2);
//   q.enqueue(3);
//   q.enqueue(4);
//   q.dequeue();
//   q.enqueue(5);

//   // cout << q.isSize()
//       //  << endl;
//   cout << q.peek();
//   cout << endl;
//   q.printQ();

//   return 0;
// }

#include <iostream>
using namespace std;
struct Node
{
  int data;
  Node *left;
  Node *right;

  Node(int value)
  {
    data = value;
    left = right = nullptr;
  }
};
Node *creatBST(Node *root, int x)
{
  if (root == nullptr)
  {
    root = new Node(x);
    return root;
  }

  else if(x > root->data) 
  {
    root->right = creatBST(root->right, x);
  }
  else
  {
    root->left = creatBST(root->left, x);
  }

  return root;
}
void Inorder(Node *root)
{
  if (root == nullptr)
  {
    return;
  }

  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}
bool searchBST(Node *root, int target)
{
  if (root == nullptr)
  {
    return false;
  }
  
  if (root->data == target)
  {
    return true;
  }
  if (root->data < target)
  {
    return searchBST(root->right, target);
  }
  else
  {
   return searchBST(root->left, target);
  }

  return false;
}

Node *deleteBST(Node *root, int del)
{
  if (root == nullptr)  // Not found
  {
    cout << "Not found";
    return root;
  }

  if (root->data < del)
  {
    root->right = deleteBST(root->right, del);
  }

  else if (root->data < del)
  {
    root->left = deleteBST(root->left, del);
  }

  else
  {
    // del leaf node

    if (root->right == nullptr && root->left == nullptr)
    {
      Node *temp = root;
      delete temp;
      return nullptr;
    }
    // left node exist
    else if (root->right == nullptr && root->left != nullptr)
    {
      Node *temp = root->left;
      delete root;
      return temp;
    }
    // right node exist
    else if (root->right != nullptr && root->left == nullptr)
    {
      Node *temp = root->right;
      delete root;
      return temp;
    }
    // 2 node exist
    // Inorder successor
    else
    {
      
    }
    
    
  }
}
int main()
{
  int arr[] = {40, 20, 60, 10, 30, 50, 70};

  Node *root = nullptr;

  for (int i = 0; i < 7; i++)
  {
    root = creatBST(root, arr[i]);
  }

  Inorder(root);

  cout << endl;

  cout << searchBST(root, 140);

  return 0;
}