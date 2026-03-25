#include <iostream>
#include <stack>
#include <queue>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const int N=1e5+10;

int stk[N],n;

// 栈的实现
// 进栈，本质是顺序表的尾插
void push(int x){
	stk[++n]=x;
}

// 出栈
void pop(){
	n--;
}

// 查询栈顶元素
int top(){
	return stk[n];
}

// 判空
bool empty(){
	return n==0;
}

// 队列的实现
int q[N], h=0, t=0;

// 入队
void enqueue(int x){
	q[++t] = x;
}

// 出队
void dequeue(){
	h++;
}

// 查询队头
int front(){
	return q[h+1];
}

// 判空
bool qempty(){
	return h >= t;
}

int main() {
	// 示例：自定义栈的使用
	push(1);
	push(2);
	push(3);
	cout << "自定义栈顶元素: " << top() << endl; // 3
	pop();
	cout << "自定义栈顶元素: " << top() << endl; // 2
	cout << "自定义栈是否为空: " << (empty() ? "是" : "否") << endl; // 否

	// 示例：自定义队列的使用
	enqueue(1);
	enqueue(2);
	enqueue(3);
	cout << "自定义队头元素: " << front() << endl; // 1
	dequeue();
	cout << "自定义队头元素: " << front() << endl; // 2
	cout << "自定义队列是否为空: " << (qempty() ? "是" : "否") << endl; // 否

	// 示例：STL栈的使用
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << "STL栈顶元素: " << s.top() << endl; // 3
	s.pop();
	cout << "STL栈顶元素: " << s.top() << endl; // 2
	cout << "STL栈大小: " << s.size() << endl; // 2
	cout << "STL栈是否为空: " << (s.empty() ? "是" : "否") << endl; // 否

	// 示例：STL队列的使用
	queue<int> qq;
	qq.push(1);
	qq.push(2);
	qq.push(3);
	cout << "STL队头元素: " << qq.front() << endl; // 1
	cout << "STL队尾元素: " << qq.back() << endl;  // 3
	qq.pop();
	cout << "STL队头元素: " << qq.front() << endl; // 2
	cout << "STL队列大小: " << qq.size() << endl; // 2
	cout << "STL队列是否为空: " << (qq.empty() ? "是" : "否") << endl; // 否

	return 0;
}
