#include <iostream>
#include<string>
using namespace std; 


//string字符串 


int main() {
//	string s1;
//	string s2="hello world";
//	string s3("hello world"); 
//	cout<<s2<<endl;
//	cout<<s3<<endl;
//	
//	
//	//输入
//	getline(cin,s1);
//	cout<<s1<<endl;
//	
//	string s;
//	getline(cin, s, 'a');//输入结束标志 
//	cout<<s<<endl;
	
	//调用函数用.操作符 
	
//	string s="hello world";
//	cout<< s.size()<<endl;
	
	//逐个打印 
//	string s2="agbsdl";
//	int sz=s2.size();
//	int i=0;
//	for(i;i<sz;i++){
//		cout<<s2[i]<<endl;
//		
//	}
	
	//	迭代器 
	
//	string s="abcd";
//	
//	string::iterator it1=s.begin();
//	string::iterator it2=s.end();
//	cout<<*it1<<endl;
//	it1++;
//	cout<<*it1<<endl;
//	it1--;
//	cout<<*it1<<endl;
//	
//	cout<<it2-it1<<endl;
//	
//	for(auto it=s.begin();it<s.end();it++){
//		cout<<*it<<endl;
//		
//	} 
	
	
	//push_back() 尾部追加一个字符 
//	string s="abcd";
//	s.push_back('e');
//	cout<<s<<endl;
	
	//+=和+
//	string s ="hello ";
//	s+="world";
//	cout<<s<<endl;
//	
	
//	string s ="hello ";
//	cout<<s+"world"<<endl;
	
//	string s ="hello ";
//	s="world"+s;
//	cout<<s<<endl;

	//pop_back()
//	string s="hello";
//	s.pop_back();
//	cout<<s<<endl;
//	cout<<s.size()<<endl;
//	
//	s.pop_back();
//	cout<<s<<endl;
//	cout<<s.size()<<endl;
	
//	string s ="hello";
//	while(s.size()>0){
//		s.pop_back();
//	} 
//	。 
//	cout<<s.size()<<endl;

	//insert()插入 
//	string s ="hello";
//	string str="xxx";
////	s.insert(3,str);
////	s.insert(3,"xxx");
//	s.insert(3,3,'x');
//	cout<<s<<endl;
	
	//find()查找 
//	string s="hello world hello everyone";
//	string str="llo";
//	size_t n=s.find(str) ;
//	cout<<n<<endl;
//	
//	n=s.find(str,n+1);
//	
//	cout<<n<<endl;
//	
//	string s="hello world hello everyone";
//	string str="world";
//	size_t n=s.find("world",0,3) ;
//	cout<<n<<endl;
//	
//	n=s.find("everyone",n+1,5);//查找前几个字符 
//	
//	cout<<n<<endl;
//	
	
	
	//string  sub_str()
	
//	string s="hello world hello everyone";
//	string s1=s.substr();
//	cout<<s1<<endl;
//	
//	string s2=s.substr(7);
//	cout<<s2<<endl; 
//	
//	string s3=s.substr(7,6);
//	cout<<s3<<endl; 
	
	//find查找，substr截取 
	
//	string s="hello world hello everyone";
//	size_t n=s.find("world") ;
//	string s1=s.substr(n,10); 
//	cout<<s1<<endl;
	 
	 //比较string的大小   两个C风格的字符串不能这样比较 
//	string s1="abcd";
//	string s2="abbcdef";
//	if(s1>s2){
//		cout << ">"<<endl;
//		 
//	}else{
//		cout<< "<="<<endl;
//	}
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	return 0;
}
