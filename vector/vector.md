# C++ Vector 笔记

## 概述
Vector 是 C++ 标准库中的动态数组容器，能够在运行时动态调整大小。与普通数组不同，vector 可以自动管理内存，并在需要时扩展容量。

## 包含头文件
```cpp
#include <vector>
```

## 基本声明和初始化
```cpp
#include <vector>
using namespace std;

int main() {
    // 空vector
    vector<int> a1;
    
    // 指定大小，默认值为0
    vector<int> a2(10);
    
    // 指定大小和初始值
    vector<int> a3(10, 3); // 10个元素，每个为3
    
    // 初始化列表
    vector<int> a4 = {1, 2, 3, 4};
    
    // 二维vector
    vector<vector<int>> a5;
    
    // 数组形式的vector（固定大小）
    vector<int> a6[10];
    
    return 0;
}
```

## 常用成员函数

### 大小和容量
- `size()`: 返回当前元素数量
- `empty()`: 检查是否为空
- `capacity()`: 返回当前容量（可容纳的元素数）
- `max_size()`: 返回最大可能大小

### 访问元素
- `operator[]`: 下标访问（不检查边界）
- `at()`: 下标访问（检查边界，会抛出异常）
- `front()`: 返回第一个元素
- `back()`: 返回最后一个元素

### 修改容器
- `push_back()`: 在末尾添加元素
- `pop_back()`: 删除末尾元素
- `insert()`: 在指定位置插入元素
- `erase()`: 删除指定位置的元素
- `clear()`: 清空所有元素
- `resize()`: 改变大小
- `reserve()`: 预留空间

### 迭代器
- `begin()`: 返回指向第一个元素的迭代器
- `end()`: 返回指向最后一个元素之后的迭代器
- `rbegin()`: 反向迭代器开始
- `rend()`: 反向迭代器结束

## 示例代码
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    
    // 遍历
    cout << "遍历: ";
    for(auto x : v) cout << x << " ";
    cout << endl;
    
    // 添加元素
    v.push_back(6);
    cout << "添加后: ";
    for(auto x : v) cout << x << " ";
    cout << endl;
    
    // 删除元素
    v.pop_back();
    cout << "删除后: ";
    for(auto x : v) cout << x << " ";
    cout << endl;
    
    // 插入元素
    v.insert(v.begin() + 2, 10);
    cout << "插入后: ";
    for(auto x : v) cout << x << " ";
    cout << endl;
    
    // 删除元素
    v.erase(v.begin() + 2);
    cout << "删除后: ";
    for(auto x : v) cout << x << " ";
    cout << endl;
    
    // 大小信息
    cout << "大小: " << v.size() << endl;
    cout << "容量: " << v.capacity() << endl;
    cout << "是否为空: " << (v.empty() ? "是" : "否") << endl;
    
    return 0;
}
```

## 时间复杂度
- 随机访问: O(1)
- 在末尾插入/删除: O(1)（平均）
- 在中间插入/删除: O(n)

## 注意事项
1. Vector 的元素是连续存储的，保证了高效的随机访问。
2. 当容量不足时，vector 会自动扩容，通常是当前容量的2倍。
3. 使用 `reserve()` 可以预先分配内存，避免频繁扩容。
4. Vector 不是线程安全的，多线程使用时需要外部同步。
5. 与数组不同，vector 的 `size()` 是动态的。

## 常用算法
Vector 常与 `<algorithm>` 头文件的算法一起使用：
- `sort()`: 排序
- `find()`: 查找
- `reverse()`: 反转
- `fill()`: 填充

```cpp
#include <algorithm>
// ...
sort(v.begin(), v.end());
auto it = find(v.begin(), v.end(), 3);
reverse(v.begin(), v.end());
fill(v.begin(), v.end(), 0);
```