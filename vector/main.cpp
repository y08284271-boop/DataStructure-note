#include <iostream>
#include <vector> 

using namespace std;

int main() {
	const int N=10; 
	vector <int> a1;
	vector <int> a2(N);
	vector <int> a3(N,3);//初始化为3
	vector <int> a4={1,2,3,4};
	vector<vector<int>> a5;
	vector<int> a6[N];
	//int a[N]
	
	
	//size/empty
	
    cout<<a1.size()<<endl;
    
    if(a1.empty())cout<<"空"<<endl;
	else cout<<"非空"<<endl; 
	
	//begin/end
	//有迭代器就可以范围for 
	for(auto it=a4.begin();it!=a4.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	
	//范围for
	for(auto x:a4){
		cout<<x<<" ";
	}
	cout<<endl;
	
	//pop_back/push_back
	a1.push_back(1);
	a1.push_back(2);
	a1.push_back(3);
	cout<<"a1 after push_back: ";
	for(auto x:a1) cout<<x<<" ";
	cout<<endl;
	
	a1.pop_back();
	cout<<"a1 after pop_back: ";
	for(auto x:a1) cout<<x<<" ";
	cout<<endl;
	
	//front/back
	//front:返回首元素
	//back:返回尾元素 
	cout<<"a1.front(): "<<a1.front()<<endl;
	cout<<"a1.back(): "<<a1.back()<<endl;
	
	//insert/erase
	a1.insert(a1.begin()+1, 10); //在第二个位置插入10
	cout<<"a1 after insert: ";
	for(auto x:a1) cout<<x<<" ";
	cout<<endl;
	
	a1.erase(a1.begin()+1); //删除第二个元素
	cout<<"a1 after erase: ";
	for(auto x:a1) cout<<x<<" ";
	cout<<endl;
	
	//clear
	a1.clear();
	cout<<"a1 after clear, size: "<<a1.size()<<endl;
	
	//resize
	a1.resize(5, 0); //调整大小为5，默认值为0
	cout<<"a1 after resize(5,0): ";
	for(auto x:a1) cout<<x<<" ";
	cout<<endl;
	
	//reserve
	a1.reserve(10); //预留空间
	cout<<"a1 capacity after reserve(10): "<<a1.capacity()<<endl;
	
	//二维vector示例
	a5.push_back({1,2,3});
	a5.push_back({4,5,6});
	cout<<"a5: "<<endl;
	for(auto &row : a5){
		for(auto x : row) cout<<x<<" ";
		cout<<endl;
	}
	
	return 0;
}
