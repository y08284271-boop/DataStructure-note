# 栈和队列笔记

## 栈 (Stack)

### 定义
栈是一种后进先出 (Last In First Out, LIFO) 的数据结构。只能在栈顶进行插入和删除操作。

### 基本操作
- **push(x)**: 将元素 x 压入栈顶
- **pop()**: 弹出栈顶元素
- **top()**: 返回栈顶元素（不弹出）
- **empty()**: 判断栈是否为空

### 实现方式
1. **数组实现**（顺序栈）
   - 使用数组存储元素
   - 使用一个变量记录栈顶位置
   - 优点：实现简单，访问速度快
   - 缺点：容量固定，可能浪费空间

2. **链表实现**（链式栈）
   - 使用链表存储元素
   - 优点：容量动态调整
   - 缺点：需要额外的指针空间

### 代码示例（数组实现）

```cpp
const int N = 1e5 + 10;
int stk[N], n = 0; // n 表示栈中元素个数，栈顶索引为 n

// 进栈
void push(int x) {
    stk[++n] = x;
}

// 出栈
void pop() {
    n--;
}

// 查询栈顶元素
int top() {
    return stk[n];
}

// 判空
bool empty() {
    return n == 0;
}
```

### 应用场景
- 函数调用栈
- 表达式求值（中缀转后缀）
- 括号匹配
- 回溯算法

## 队列 (Queue)

### 定义
队列是一种先进先出 (First In First Out, FIFO) 的数据结构。在队尾插入元素，在队头删除元素。

### 基本操作
- **enqueue(x)**: 将元素 x 加入队尾
- **dequeue()**: 删除队头元素
- **front()**: 返回队头元素（不删除）
- **empty()**: 判断队列是否为空

### 实现方式
1. **数组实现**（顺序队列）
   - 使用数组存储元素
   - 使用两个指针：head（队头）和tail（队尾）
   - 优点：实现简单
   - 缺点：可能出现"假溢出"，需要循环队列优化

2. **链表实现**（链式队列）
   - 使用链表存储元素
   - 优点：容量动态调整，无假溢出
   - 缺点：需要额外的指针空间

### 代码示例（数组实现）

```cpp
const int N = 1e5 + 10;
int q[N], h = 0, t = 0; // h 和 t 初始为 0，h 为队头前一个位置，t 为队尾

// 入队
void enqueue(int x) {
    q[++t] = x;
}

// 出队
void dequeue() {
    h++;
}

// 查询队头
int front() {
    return q[h + 1];
}

// 判空
bool qempty() {
    return h >= t;
}
```

### 应用场景
-  breadth-first search (BFS)
- 打印队列
- 消息队列
- 操作系统中的进程调度

## 比较

| 特性 | 栈 | 队列 |
|------|----|------|
| 插入位置 | 栈顶 | 队尾 |
| 删除位置 | 栈顶 | 队头 |
| 顺序 | LIFO | FIFO |
| 主要操作 | push, pop | enqueue, dequeue |

## 注意事项
- 栈和队列都可以用数组或链表实现
- 在实现时要注意边界条件，避免越界
- 数组实现需要考虑容量限制
- 链表实现需要管理内存分配和释放

## STL容器使用

C++标准模板库(STL)提供了现成的栈和队列容器，使用起来更加方便和安全。

### STL中的栈 (stack)

#### 头文件
```cpp
#include <stack>
```

#### 声明
```cpp
stack<int> s;  // 创建一个存储int类型的栈
```

#### 基本操作
- **push(x)**: 将元素 x 压入栈顶
- **pop()**: 弹出栈顶元素（无返回值）
- **top()**: 返回栈顶元素（不弹出）
- **empty()**: 判断栈是否为空
- **size()**: 返回栈中元素个数

#### 代码示例
```cpp
#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    
    cout << "栈顶元素: " << s.top() << endl;  // 3
    s.pop();
    cout << "栈顶元素: " << s.top() << endl;  // 2
    cout << "栈大小: " << s.size() << endl;  // 2
    cout << "栈是否为空: " << (s.empty() ? "是" : "否") << endl;  // 否
    
    return 0;
}
```

### STL中的队列 (queue)

#### 头文件
```cpp
#include <queue>
```

#### 声明
```cpp
queue<int> q;  // 创建一个存储int类型的队列
```

#### 基本操作
- **push(x)**: 将元素 x 加入队尾
- **pop()**: 删除队头元素（无返回值）
- **front()**: 返回队头元素（不删除）
- **back()**: 返回队尾元素（不删除）
- **empty()**: 判断队列是否为空
- **size()**: 返回队列中元素个数

#### 代码示例
```cpp
#include <queue>
#include <iostream>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << "队头元素: " << q.front() << endl;  // 1
    cout << "队尾元素: " << q.back() << endl;   // 3
    q.pop();
    cout << "队头元素: " << q.front() << endl;  // 2
    cout << "队列大小: " << q.size() << endl;  // 2
    cout << "队列是否为空: " << (q.empty() ? "是" : "否") << endl;  // 否
    
    return 0;
}
```

### STL的优势
- **安全性**: 自动处理边界检查，避免数组越界
- **便利性**: 提供丰富的成员函数，如size()
- **效率**: 底层实现优化，性能良好
- **通用性**: 支持多种数据类型，通过模板实现

### 注意事项
- STL容器是基于模板的，需要指定元素类型
- stack和queue都是适配器容器，底层可以使用不同的容器（如deque、vector）
- 使用前需要包含相应的头文件
- pop()操作不返回值，如果需要获取弹出元素，应先用top()/front()获取