#include<iostream>
using namespace std;
#include<stack>

/* stack容器
1、构造函数
stack<T> stk;	stack采用模板类实现，stack对象的默认构造
stack(const stack& stk);	拷贝构造
2、赋值操作
stack& operator=(const stack & stk);  重载=运算符
3、数据存取
stk.push(elem);		向栈顶添加元素
stk.pop();			删除栈顶元素
stk.top();			返回栈顶元素
4、大小操作
stk.empty();		判断堆栈是否为空
stk.size();			返回栈的大小
*/
//void test01()
//{
//	stack<int> s; // 创建栈容器s
//	s.push(1);
//	s.push(2);// 插入元素
//	s.push(3);
//	s.push(4);
//	cout << s.size() << endl; // 查看大小
//	cout << s.empty() << endl;// 判断是否为空，不为空返回0
//	while (!s.empty()) // 不为空执行循环
//	{
//		cout << s.top(); // 输出栈顶元素
//		s.pop(); // 出栈
//	}
//	cout << endl;
//	cout << s.size() << endl; // 查看大小
//	cout << s.empty() << endl;// 判断是否为空，为空返回1
//}
#include<queue>
/* queue容器
1、构造函数
queue<T> que;	queue采用模板类实现，queue对象的默认构造
queue(const queue& que);	拷贝构造
2、赋值操作
queue& operator=(const queue & que);  重载=运算符
3、数据存取
que.push(elem);		向队尾添加元素
que.pop();			删除队头元素
que.front();		返回队头元素
que.back();			返回队尾元素
4、大小操作
que.empty();		判断堆栈是否为空
que.size();			返回队列的大小
*/

//class person
//{
//public:
//	person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};

//void test02()
//{
//	queue<person> q;// 创建queue容器q
//	// 先创建几个person类型对象
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 2);
//	person p4("Nna", 15);
//	// 插入到容器q中 入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	// 打印p中的数据
//	cout << q.size() << endl; // 查看大小
//	cout << q.empty() << endl;// 判断是否为空，不为空返回0
//	while (!q.empty()) // 不为空执行循环
//	{
//		cout << "头"<<q.front().m_name << q.front().m_age << endl; // 输出队头元素
//		cout << "尾" << q.back().m_name << q.back().m_age << endl; // 输出队尾元素
//		q.pop(); // 删除队头元素
//	}
//	cout << q.size() << endl; // 查看大小
//	cout << q.empty() << endl;// 判断是否为空，为空返回1
//}

// list容器
//#include<list>
///*构造函数
//list<T> lst;		1使用模板类实现，默认构造
//list(begin,end);	2将区间[begin,end)中的元素拷贝给自身，注意区间左闭右开
//list(n,elem);		3将n个elem元素拷贝给自身
//list(const list& lst); 4将lst拷贝给自身，拷贝构造函数
//*/
//void printl(const list<int>& l) // 打印函数
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test03()
//{
//	list<int> l1;// 1创建容器
//	l1.push_back(1);// 插入元素
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1); // 打印函数
//
//	list<int> l2(l1.begin(), l1.end()); // 2
//	printl(l2);
//
//	list<int> l3(5, 888); // 3
//	printl(l3);
//
//	list<int> l4(l1); // 4
//	printl(l4);
//}
///*赋值与交换
//list operator=(const list& lst);  重载=运算符
//lst.assign(begin,end);			将区间[begin,end)中的数据拷贝给自身，注意区间左闭右开
//lst.assign(n,elem);				将n个elem元素拷贝给自身
//lst.swap(lst1);					将lst1的元素与自身交换
//*/
//void test04()
//{
//
//	list<int> l1;// 创建容器
//	l1.push_back(1);// 插入元素
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	//printl(l1); // 打印函数
//
//	list<int> l2 = l1; // 1
//	printl(l2);
//
//	list<int> l3;
//	l3.assign(l2.begin(), l2.end()); // 2
//	printl(l3);
//	
//	list<int> l4;
//	l4.assign(6, 888); // 3
//	printl(l4);
//
//	list<int> l5;
//	l5.push_back(66);// 插入元素
//	l5.push_back(99);
//	l5.swap(l4);// 4
//	printl(l5);
//	printl(l4);
//}
///*容量和大小
//lst.empty();			 1判断容器是否为空，空返回true1否则false0
//lst.size();		   		 2返回容器当前大小
//lst.resize(int n);		3重新指定容器长度为n，若容器变长，则以默认值0填充新位置。
//										  若容器变短，则末尾超出容器长度的元素被删除
//lst.resize(int n,elem); 4重新指定容器长度为n，若容器变长，则以elem填充新位置。
//										  若容器变短，则末尾超出容器长度的元素被删除
//*/
//
//void test05() // 判断为空、容量、大小
//{
//	list<int> l1;
//	for (int i = 0; i < 10; i++)
//	{
//		l1.push_back(i);
//	}
//	printl(l1);
//
//	cout << l1.empty() << endl;		// 1判断为空，ture=1，false=0
//	cout << l1.size() << endl;		// 2返回大小
//
//	l1.resize(15); // 3变长 ，默认值为0
//	printl(l1);
//
//	l1.resize(20, 'v'); // 3变长，默认为为118
//	printl(l1);
//
//	l1.resize(5); // 4变短
//	printl(l1);
//}
///*插入与删除
//lst.push_front(elem);			 1头部插入elem元素
//lst.pop_front();				 2删除头部第一个元素
//lst.push_back(elem);			 3尾部插入elem元素
//lst.pop_back();					 4删除尾部最后一个元素
//lst.insert(const_iterator pos,elem);		5在迭代器指向的pos位置插入元素elem
//lst.insert(const_iterator pos,int n,elem);	6在迭代器指向的pos位置插入n个elem元素
//lst.insert(const_iterator pos,const_iterator start,const_iterator end); 
//				7在迭代器指向的pos位置插入从start到end区间的元素
//lst.erase(const_iterator pos);	 8删除迭代器指向的pos位置的元素
//lst.erase(const_iterator start,const_iterator end); 9删除迭代器指向的从start到end区间的元素
//lst.clear();					 10删除容器中所有元素
//lst.remove(elem);					11删除容器中所有与elem值匹配的元素
//*/
//void test06()
//{
//	list<int> l1;// 创建容器
//	l1.push_back(1);//    3尾插 
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1);
//	l1.push_front(40); // 1头插
//	l1.push_front(30);
//	l1.push_front(20);
//	l1.push_front(10);
//	printl(l1);
//
//	l1.pop_back();	   // 4尾删
//	l1.pop_back();
//	printl(l1);
//	l1.pop_front();	   // 2头删
//	l1.pop_front();
//	printl(l1);
//
//	l1.insert(l1.begin(), 888); // 5 插入指定元素
//	printl(l1);
//
//	l1.insert(l1.begin(), 8, 66); // 6 插入指定个数元素
//	printl(l1);
//
//	l1.insert(l1.begin(),l1.begin(),l1.end()); // 7 头部插入区间元素
//	printl(l1);
//
//	l1.erase(l1.begin()); // 8 删除指定位置元素
//	printl(l1);
//
//	list<int> l2 = l1;
//	printl(l2);
//	l2.erase(++l2.begin(), --l2.end()); // 9 删除指定区间元素
//	printl(l2);
//
//	l1.remove(66); // 11 删除容器中指定的所有元素
//	printl(l1);
//
//	l1.clear();
//	printl(l1);		// 10 清空容器
//}
///*数据存取
//lst.front();	返回队头元素
//lst.back();		返回队尾元素
//*/
//void test07()
//{
//	list<int> l1;// 创建容器
//	l1.push_back(1);//    3尾插 
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1);
//
//	cout << l1.front() << endl;
//	cout << l1.back() << endl;
//
//	cout << ++l1.front() << endl; // 只能前移或后移
//	cout << l1.back()-- << endl;
//
//	//l1[6];		// 不可用[]访问元素
//	//l1.at(5);	// 不可用at访问元素
//}
///*反转与排序
//lst.reverse();	反转链表
//lst.sort();		排序链表
//*/
//bool my_compare1(int x, int y)
//{
//	return x > y;
//}
//void test08()
//{
//	list<int> l1;// 创建容器
//	l1.push_back(1);//    3尾插 
//	l1.push_back(9);
//	l1.push_back(8);
//	l1.push_back(7);
//	printl(l1);
//
//	l1.reverse(); // 反转
//	printl(l1);
//
//	l1.sort();	  // 排序
//	printl(l1);
//
//	l1.sort(my_compare1); // 降序
//	printl(l1);
//}
//// 排序案例
//class person
//{
//public:
//	person(string name, int age, int height)
//	{
//		this->m_name = name;
//		this->m_age = age;
//		this->m_height = height;
//	}
//	string m_name;
//	int m_age;
//	int m_height;
//};
//void printp(const list<person>&p)
//{
//	for (list<person>::const_iterator it = p.begin(); it != p.end(); it++)
//	{
//		cout << "姓名" << (*it).m_name << "年龄" << (*it).m_age << "身高" << (*it).m_height << endl;
//	}
//	cout << endl;
//}
//bool my_compare(person &p1,person& p2) // 仿函数
//{
//	if (p1.m_age == p2.m_age) // 年龄相同
//	{
//		return p1.m_height < p2.m_height;// 按照身高升序
//	}
//	else
//	{
//		return p1.m_age < p2.m_age;// 按照年龄升序
//	}
//}
//void test09()
//{
//	list<person> l; // 创建容器
//	// 根据自定义数据类型创建对象
//	person p1("Joyce", 21, 180);
//	person p2("Tatina", 20, 162);
//	person p3("Yomi", 2, 30);
//	person p4("Nana", 20, 180);
//	// 插入进容器
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	printp(l); // 打印查看
//	l.sort(my_compare);
//	printp(l); // 打印查看
//}
//int main()
//{
//	test09();
//	return 0;
//}

// set / multiset容器

//#include<set>
//void prints(set<int> st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
///*构造函数
//set<T> st;			1默认构造函数
//set(const set &st); 2拷贝构造函数
//set& operator=(const set& st);  3重载=运算符
//*/
//void test01()
//{
//	set<int> st1;  // 1
//	st1.insert(1);
//	st1.insert(8);
//	st1.insert(6);
//	st1.insert(3);
//	st1.insert(8); // 重复的8，无法插入
//	prints(st1);
//
//	set<int>st2(st1); // 2
//	prints(st2);
//
//	set<int>st3;
//	st3 = st1; // 3
//	prints(st3);
//}
///*大小与交换
//st.size();		返回容器中元素的个数
//st.empty();		判断容器是否为空，空返回1，否则返回0
//st.swap(st1);	交换2个容器
//*/
//void test02()
//{
//	set<int> st1;  
//	cout << st1.size() << endl;
//	cout << st1.empty() << endl;
//	st1.insert(1);
//	st1.insert(8);
//	st1.insert(6);
//	st1.insert(3);
//	cout << st1.size() << endl;
//	cout << st1.empty() << endl;
//
//	set<int> st2;
//	st2.insert(88);	st2.insert(66);
//	st2.insert(54);	st2.insert(13);
//	cout << "交换前" << endl;
//	prints(st1);
//	prints(st2);
//	st2.swap(st1);
//	cout << "交换后" << endl;
//	prints(st1);
//	prints(st2);
//}
///*插入和删除
//st.insert();		1插入元素
//st.clear();			2清空容器
//st.erase(pos);		3删除迭代器pos处的元素
//st.erase(begin,end);4删除迭代器区间begin，end之间的元素
//st.erase(elem);		5删除elem元素
//*/
//void test03()
//{
//	set<int> st1;
//	st1.insert(1);	// 1
//	st1.insert(8);
//	st1.insert(6);
//	st1.insert(3);
//	st1.insert(5);
//	st1.insert(9);
//	prints(st1);
//
//	st1.erase(++st1.begin());// 3
//	prints(st1);
//	st1.erase(++st1.begin(), --st1.end());// 4
//	prints(st1);
//	st1.erase(1);
//	prints(st1);		// 5
//	st1.clear();		// 2
//	prints(st1);	
//}
///* 查找与统计
//st.find(val);	查找val元素是否存在，存在返回其位置的迭代器，否则返回st.end();
//st.count(val);	统计元素val的个数
//*/
//void test04()
//{
//	set<int> st1;
//	st1.insert(1);	
//	st1.insert(8);
//	st1.insert(6);
//	st1.insert(3);
//
//	set<int> ::iterator pos = st1.find(3);
//	if (pos == st1.end())
//		cout << "没找到" << endl;
//	else
//		cout << "有了" << endl;
//	cout << st1.count(3) << endl;
//}
///* set/multiset区别
//set不可重复插入
//*/
//void test05()
//{
//	set<int> s;
//
//	pair<set<int>::iterator,bool> ret = s.insert(5);
//	if (ret.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
//	ret = s.insert(5);
//	if (ret.second)
//		cout << "插入成功" << endl;
//	else
//		cout << "插入失败" << endl;
//
//	multiset<int>ms;
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//		cout << *it << " ";
//}
///*对组的创建
//pair<type,type> p(val1,val2);
//pair<type,type> p=make_pair(val1,val2);
//*/
////void test06()
////{
////	pair<string, int>p1("Joyce", 21);
////	cout << p1.first <<"年"<< p1.second << endl;
////
////	pair<string, int>p2 = make_pair("Tatina", 20);
////	cout << p2.first << "年" << p2.second << endl;
////}
////
////class MYcompare
////{
////public:
////	bool operator()(int x, int y)const
////	{
////		return x > y;
////	}
////};
////void test07()
////{
////	set<int> st1;
////	st1.insert(1);	st1.insert(8);	st1.insert(6);
////	st1.insert(3); st1.insert(5); st1.insert(9);
////	prints(st1);
////
////	// 进行降序排列
////	set<int,MYcompare> st2;
////	st2.insert(1);	st2.insert(8);	st2.insert(6);
////	st2.insert(3); st2.insert(5); st2.insert(9);
////	for (set<int,MYcompare>::iterator it = st2.begin(); it != st2.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
//
//class person
//{
//public:
//	person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//class mycompareperson
//{
//public:
//	bool operator()(const person &p1, const person &p2)const
//	{		 // 升序
//		return p1.m_age < p2.m_age;
//	}
//};
//void test08()
//{
//	set<person, mycompareperson> s1;
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Naba", 30);
//	person p4("Knaz", 40);
//	s1.insert(p1);	s1.insert(p2);
//	s1.insert(p3);	s1.insert(p4);
//	for (set<person>::iterator it = s1.begin(); it != s1.end(); it++)
//		cout << it->m_name << "年龄为" << it->m_age << endl;
//}
//int main()
//{
//	test08();
//	return 0;
//}

// map / multimap 容器

#include<map>

/*构造与赋值
map<T1,T2> mp;				  1默认构造函数
map(const map& mp);			  2拷贝构造函数
map& operator=(const map &mp);3重载=运算符
*/

void printm(map<int, int> mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
	{
		cout << it->second << " ";
	}
	cout << endl;
}
void test01()
{
	map<int, int> mp1; // 1
	mp1.insert(pair<int, int>(1, 11));
	mp1.insert(pair<int, int>(2, 22));
	mp1.insert(pair<int, int>(4, 44));
	mp1.insert(pair<int, int>(3, 33));
	printm(mp1);

	map<int, int> mp2(mp1); // 2
	printm(mp2);

	map<int, int> mp3 = mp1; // 3
	printm(mp3);
}
/*大小与交换
mp.size();		返回容器中元素的个数
mp.empty();		判断容器是否为空，空返回1，否则返回0
mp.swap(mp1);	交换2个容器
*/
void test02()
{
	map<int, int> mp1; // 1
	mp1.insert(pair<int, int>(1, 11));	mp1.insert(pair<int, int>(2, 22));
	mp1.insert(pair<int, int>(4, 44));	mp1.insert(pair<int, int>(3, 33));
	cout << mp1.size() << endl;
	cout << mp1.empty() << endl;

	map<int, int> mp2; // 1
	mp2.insert(pair<int, int>(1, 66));	mp2.insert(pair<int, int>(4, 99));
	mp2.insert(pair<int, int>(2, 77));	mp2.insert(pair<int, int>(3, 88));
	cout << "交换前" << endl;
	printm(mp1); printm(mp2);
	mp2.swap(mp1);
	cout << "交换后" << endl;
	printm(mp1); printm(mp2);
}
/*插入和删除
mp.insert();		1插入元素
mp.clear();			2清空容器
mp.erase(pos);		3删除迭代器pos处的元素
mp.erase(begin,end);4删除迭代器区间begin，end之间的元素
mp.erase(val);		5删除容器中key值为val的元素
*/
void test03()
{
	// insert又有4种方式：
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));// 1.1
	m.insert(make_pair(2, 20));		// 1.2
	m.insert(map<int, int>::value_type(3, 30));// 1.3
	m[4] = 40;	// 1.4
	printm(m);

	m.erase(m.begin()); // 3
	printm(m);

	m.erase(3);  // 5
	printm(m);

	//m.erase(m.begin(), m.end()); // 4 相当于清空
	m.clear(); // 2
	printm(m);

	cout << m[6] << endl;

}
/* 查找与统计
mp.find(key);	查找key元素是否存在，存在返回其位置的迭代器，否则返回mp.end();
mp.count(key);	统计元素key的个数
*/
void test04()
{
	map<int, int> mp1;
	mp1.insert(pair<int, int>(1, 11));	mp1.insert(pair<int, int>(2, 22));
	mp1.insert(pair<int, int>(4, 44));	mp1.insert(pair<int, int>(3, 33));

	map<int,int>::iterator pos = mp1.find(3);
	if (pos != mp1.end())
		cout << "有了：" << (*pos).first << pos->second << endl;
	else
		cout << "没有" << endl;

	cout << mp1.count(3) << endl;
}
class MYcompare
{
public:
	bool operator()(int x, int y)const
	{
		return x > y;
	}
};
void test05()
{
	map<int,int> m1;
	m1.insert(pair<int, int>(1, 11));	m1.insert(pair<int, int>(2, 22));
	m1.insert(pair<int, int>(4, 44));	m1.insert(pair<int, int>(3, 33));
	printm(m1);

	// 进行降序排列
	map<int, int, MYcompare> m2;
	m2.insert(pair<int, int>(1, 11));	m2.insert(pair<int, int>(2, 22));
	m2.insert(pair<int, int>(4, 44));	m2.insert(pair<int, int>(3, 33));

	for (map<int, int, MYcompare>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << it->second << " ";
	}
	cout << endl;
}


//int main()
//{
//	test05();
//	return 0;
//}

// 案例 - 员工分组

class Worker
{
public:
	string m_name;
	int m_salary;
};
#include<ctime>

void createworker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker; // 创建一名员工
		worker.m_name = "员工";
		worker.m_name += nameSeed[i];// 创建员工名字+随机数
		worker.m_salary = 10000 + rand() % 10000;//创建员工工资，10000-19999
		v.push_back(worker);//将员工插入到vector容器中
	}
}
void setDept(vector<Worker> &v, multimap<int, Worker>&m)
{
	// 遍历v的每个元素找到每个员工
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int DeptID = rand() % 3; // 随机分配部门0、1、2
		m.insert(make_pair(DeptID, *it));
	}
}
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
void showWorker(multimap<int, Worker> m)
{
	cout << "策划部门有：" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 0)
		{
			cout << "员工名为：" << it->second.m_name <<
				"工资为：" << it->second.m_salary << endl;
		}
	}
	cout << "美术部门有：" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 1)
		{
			cout << "员工名为：" << it->second.m_name <<
				"工资为：" << it->second.m_salary << endl;
		}
	}
	cout << "研发部门有：" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 2)
		{
			cout << "员工名为：" << it->second.m_name <<
				"工资为：" << it->second.m_salary << endl;
		}
	}
	//----------------------------------------------------------------------------
	cout << "策划部门有：" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "员工名为：" << pos->second.m_name <<
			"工资为：" << pos->second.m_salary << endl;
	}
	cout << "美术部门有：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "员工名为：" << pos->second.m_name <<
			"工资为：" << pos->second.m_salary << endl;
	}
	cout << "研发部门有：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "员工名为：" << pos->second.m_name <<
			"工资为：" << pos->second.m_salary << endl;
	}
}
void test06()
{
	srand((unsigned int)time(NULL));

	// 创建员工
	vector<Worker> v;
	createworker(v);

	// 员工分组
	multimap<int, Worker> m;
	setDept(v,m);

	// 查看员工
	showWorker(m);
}

int main()
{
	test06();
	return 0;
}