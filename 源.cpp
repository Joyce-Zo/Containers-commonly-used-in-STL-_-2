#include<iostream>
using namespace std;
#include<stack>

/* stack����
1�����캯��
stack<T> stk;	stack����ģ����ʵ�֣�stack�����Ĭ�Ϲ���
stack(const stack& stk);	��������
2����ֵ����
stack& operator=(const stack & stk);  ����=�����
3�����ݴ�ȡ
stk.push(elem);		��ջ�����Ԫ��
stk.pop();			ɾ��ջ��Ԫ��
stk.top();			����ջ��Ԫ��
4����С����
stk.empty();		�ж϶�ջ�Ƿ�Ϊ��
stk.size();			����ջ�Ĵ�С
*/
//void test01()
//{
//	stack<int> s; // ����ջ����s
//	s.push(1);
//	s.push(2);// ����Ԫ��
//	s.push(3);
//	s.push(4);
//	cout << s.size() << endl; // �鿴��С
//	cout << s.empty() << endl;// �ж��Ƿ�Ϊ�գ���Ϊ�շ���0
//	while (!s.empty()) // ��Ϊ��ִ��ѭ��
//	{
//		cout << s.top(); // ���ջ��Ԫ��
//		s.pop(); // ��ջ
//	}
//	cout << endl;
//	cout << s.size() << endl; // �鿴��С
//	cout << s.empty() << endl;// �ж��Ƿ�Ϊ�գ�Ϊ�շ���1
//}
#include<queue>
/* queue����
1�����캯��
queue<T> que;	queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ���
queue(const queue& que);	��������
2����ֵ����
queue& operator=(const queue & que);  ����=�����
3�����ݴ�ȡ
que.push(elem);		���β���Ԫ��
que.pop();			ɾ����ͷԪ��
que.front();		���ض�ͷԪ��
que.back();			���ض�βԪ��
4����С����
que.empty();		�ж϶�ջ�Ƿ�Ϊ��
que.size();			���ض��еĴ�С
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
//	queue<person> q;// ����queue����q
//	// �ȴ�������person���Ͷ���
//	person p1("Joyce", 21);
//	person p2("Tatina", 20);
//	person p3("Yomi", 2);
//	person p4("Nna", 15);
//	// ���뵽����q�� ���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	// ��ӡp�е�����
//	cout << q.size() << endl; // �鿴��С
//	cout << q.empty() << endl;// �ж��Ƿ�Ϊ�գ���Ϊ�շ���0
//	while (!q.empty()) // ��Ϊ��ִ��ѭ��
//	{
//		cout << "ͷ"<<q.front().m_name << q.front().m_age << endl; // �����ͷԪ��
//		cout << "β" << q.back().m_name << q.back().m_age << endl; // �����βԪ��
//		q.pop(); // ɾ����ͷԪ��
//	}
//	cout << q.size() << endl; // �鿴��С
//	cout << q.empty() << endl;// �ж��Ƿ�Ϊ�գ�Ϊ�շ���1
//}

// list����
//#include<list>
///*���캯��
//list<T> lst;		1ʹ��ģ����ʵ�֣�Ĭ�Ϲ���
//list(begin,end);	2������[begin,end)�е�Ԫ�ؿ���������ע����������ҿ�
//list(n,elem);		3��n��elemԪ�ؿ���������
//list(const list& lst); 4��lst�����������������캯��
//*/
//void printl(const list<int>& l) // ��ӡ����
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test03()
//{
//	list<int> l1;// 1��������
//	l1.push_back(1);// ����Ԫ��
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1); // ��ӡ����
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
///*��ֵ�뽻��
//list operator=(const list& lst);  ����=�����
//lst.assign(begin,end);			������[begin,end)�е����ݿ���������ע����������ҿ�
//lst.assign(n,elem);				��n��elemԪ�ؿ���������
//lst.swap(lst1);					��lst1��Ԫ����������
//*/
//void test04()
//{
//
//	list<int> l1;// ��������
//	l1.push_back(1);// ����Ԫ��
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	//printl(l1); // ��ӡ����
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
//	l5.push_back(66);// ����Ԫ��
//	l5.push_back(99);
//	l5.swap(l4);// 4
//	printl(l5);
//	printl(l4);
//}
///*�����ʹ�С
//lst.empty();			 1�ж������Ƿ�Ϊ�գ��շ���true1����false0
//lst.size();		   		 2����������ǰ��С
//lst.resize(int n);		3����ָ����������Ϊn���������䳤������Ĭ��ֵ0�����λ�á�
//										  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//lst.resize(int n,elem); 4����ָ����������Ϊn���������䳤������elem�����λ�á�
//										  ��������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//*/
//
//void test05() // �ж�Ϊ�ա���������С
//{
//	list<int> l1;
//	for (int i = 0; i < 10; i++)
//	{
//		l1.push_back(i);
//	}
//	printl(l1);
//
//	cout << l1.empty() << endl;		// 1�ж�Ϊ�գ�ture=1��false=0
//	cout << l1.size() << endl;		// 2���ش�С
//
//	l1.resize(15); // 3�䳤 ��Ĭ��ֵΪ0
//	printl(l1);
//
//	l1.resize(20, 'v'); // 3�䳤��Ĭ��ΪΪ118
//	printl(l1);
//
//	l1.resize(5); // 4���
//	printl(l1);
//}
///*������ɾ��
//lst.push_front(elem);			 1ͷ������elemԪ��
//lst.pop_front();				 2ɾ��ͷ����һ��Ԫ��
//lst.push_back(elem);			 3β������elemԪ��
//lst.pop_back();					 4ɾ��β�����һ��Ԫ��
//lst.insert(const_iterator pos,elem);		5�ڵ�����ָ���posλ�ò���Ԫ��elem
//lst.insert(const_iterator pos,int n,elem);	6�ڵ�����ָ���posλ�ò���n��elemԪ��
//lst.insert(const_iterator pos,const_iterator start,const_iterator end); 
//				7�ڵ�����ָ���posλ�ò����start��end�����Ԫ��
//lst.erase(const_iterator pos);	 8ɾ��������ָ���posλ�õ�Ԫ��
//lst.erase(const_iterator start,const_iterator end); 9ɾ��������ָ��Ĵ�start��end�����Ԫ��
//lst.clear();					 10ɾ������������Ԫ��
//lst.remove(elem);					11ɾ��������������elemֵƥ���Ԫ��
//*/
//void test06()
//{
//	list<int> l1;// ��������
//	l1.push_back(1);//    3β�� 
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1);
//	l1.push_front(40); // 1ͷ��
//	l1.push_front(30);
//	l1.push_front(20);
//	l1.push_front(10);
//	printl(l1);
//
//	l1.pop_back();	   // 4βɾ
//	l1.pop_back();
//	printl(l1);
//	l1.pop_front();	   // 2ͷɾ
//	l1.pop_front();
//	printl(l1);
//
//	l1.insert(l1.begin(), 888); // 5 ����ָ��Ԫ��
//	printl(l1);
//
//	l1.insert(l1.begin(), 8, 66); // 6 ����ָ������Ԫ��
//	printl(l1);
//
//	l1.insert(l1.begin(),l1.begin(),l1.end()); // 7 ͷ����������Ԫ��
//	printl(l1);
//
//	l1.erase(l1.begin()); // 8 ɾ��ָ��λ��Ԫ��
//	printl(l1);
//
//	list<int> l2 = l1;
//	printl(l2);
//	l2.erase(++l2.begin(), --l2.end()); // 9 ɾ��ָ������Ԫ��
//	printl(l2);
//
//	l1.remove(66); // 11 ɾ��������ָ��������Ԫ��
//	printl(l1);
//
//	l1.clear();
//	printl(l1);		// 10 �������
//}
///*���ݴ�ȡ
//lst.front();	���ض�ͷԪ��
//lst.back();		���ض�βԪ��
//*/
//void test07()
//{
//	list<int> l1;// ��������
//	l1.push_back(1);//    3β�� 
//	l1.push_back(2);
//	l1.push_back(3);
//	l1.push_back(4);
//	printl(l1);
//
//	cout << l1.front() << endl;
//	cout << l1.back() << endl;
//
//	cout << ++l1.front() << endl; // ֻ��ǰ�ƻ����
//	cout << l1.back()-- << endl;
//
//	//l1[6];		// ������[]����Ԫ��
//	//l1.at(5);	// ������at����Ԫ��
//}
///*��ת������
//lst.reverse();	��ת����
//lst.sort();		��������
//*/
//bool my_compare1(int x, int y)
//{
//	return x > y;
//}
//void test08()
//{
//	list<int> l1;// ��������
//	l1.push_back(1);//    3β�� 
//	l1.push_back(9);
//	l1.push_back(8);
//	l1.push_back(7);
//	printl(l1);
//
//	l1.reverse(); // ��ת
//	printl(l1);
//
//	l1.sort();	  // ����
//	printl(l1);
//
//	l1.sort(my_compare1); // ����
//	printl(l1);
//}
//// ������
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
//		cout << "����" << (*it).m_name << "����" << (*it).m_age << "���" << (*it).m_height << endl;
//	}
//	cout << endl;
//}
//bool my_compare(person &p1,person& p2) // �º���
//{
//	if (p1.m_age == p2.m_age) // ������ͬ
//	{
//		return p1.m_height < p2.m_height;// �����������
//	}
//	else
//	{
//		return p1.m_age < p2.m_age;// ������������
//	}
//}
//void test09()
//{
//	list<person> l; // ��������
//	// �����Զ����������ʹ�������
//	person p1("Joyce", 21, 180);
//	person p2("Tatina", 20, 162);
//	person p3("Yomi", 2, 30);
//	person p4("Nana", 20, 180);
//	// ���������
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	printp(l); // ��ӡ�鿴
//	l.sort(my_compare);
//	printp(l); // ��ӡ�鿴
//}
//int main()
//{
//	test09();
//	return 0;
//}

// set / multiset����

//#include<set>
//void prints(set<int> st)
//{
//	for (set<int>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
///*���캯��
//set<T> st;			1Ĭ�Ϲ��캯��
//set(const set &st); 2�������캯��
//set& operator=(const set& st);  3����=�����
//*/
//void test01()
//{
//	set<int> st1;  // 1
//	st1.insert(1);
//	st1.insert(8);
//	st1.insert(6);
//	st1.insert(3);
//	st1.insert(8); // �ظ���8���޷�����
//	prints(st1);
//
//	set<int>st2(st1); // 2
//	prints(st2);
//
//	set<int>st3;
//	st3 = st1; // 3
//	prints(st3);
//}
///*��С�뽻��
//st.size();		����������Ԫ�صĸ���
//st.empty();		�ж������Ƿ�Ϊ�գ��շ���1�����򷵻�0
//st.swap(st1);	����2������
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
//	cout << "����ǰ" << endl;
//	prints(st1);
//	prints(st2);
//	st2.swap(st1);
//	cout << "������" << endl;
//	prints(st1);
//	prints(st2);
//}
///*�����ɾ��
//st.insert();		1����Ԫ��
//st.clear();			2�������
//st.erase(pos);		3ɾ��������pos����Ԫ��
//st.erase(begin,end);4ɾ������������begin��end֮���Ԫ��
//st.erase(elem);		5ɾ��elemԪ��
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
///* ������ͳ��
//st.find(val);	����valԪ���Ƿ���ڣ����ڷ�����λ�õĵ����������򷵻�st.end();
//st.count(val);	ͳ��Ԫ��val�ĸ���
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
//		cout << "û�ҵ�" << endl;
//	else
//		cout << "����" << endl;
//	cout << st1.count(3) << endl;
//}
///* set/multiset����
//set�����ظ�����
//*/
//void test05()
//{
//	set<int> s;
//
//	pair<set<int>::iterator,bool> ret = s.insert(5);
//	if (ret.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//	ret = s.insert(5);
//	if (ret.second)
//		cout << "����ɹ�" << endl;
//	else
//		cout << "����ʧ��" << endl;
//
//	multiset<int>ms;
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	ms.insert(5);
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//		cout << *it << " ";
//}
///*����Ĵ���
//pair<type,type> p(val1,val2);
//pair<type,type> p=make_pair(val1,val2);
//*/
////void test06()
////{
////	pair<string, int>p1("Joyce", 21);
////	cout << p1.first <<"��"<< p1.second << endl;
////
////	pair<string, int>p2 = make_pair("Tatina", 20);
////	cout << p2.first << "��" << p2.second << endl;
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
////	// ���н�������
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
//	{		 // ����
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
//		cout << it->m_name << "����Ϊ" << it->m_age << endl;
//}
//int main()
//{
//	test08();
//	return 0;
//}

// map / multimap ����

#include<map>

/*�����븳ֵ
map<T1,T2> mp;				  1Ĭ�Ϲ��캯��
map(const map& mp);			  2�������캯��
map& operator=(const map &mp);3����=�����
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
/*��С�뽻��
mp.size();		����������Ԫ�صĸ���
mp.empty();		�ж������Ƿ�Ϊ�գ��շ���1�����򷵻�0
mp.swap(mp1);	����2������
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
	cout << "����ǰ" << endl;
	printm(mp1); printm(mp2);
	mp2.swap(mp1);
	cout << "������" << endl;
	printm(mp1); printm(mp2);
}
/*�����ɾ��
mp.insert();		1����Ԫ��
mp.clear();			2�������
mp.erase(pos);		3ɾ��������pos����Ԫ��
mp.erase(begin,end);4ɾ������������begin��end֮���Ԫ��
mp.erase(val);		5ɾ��������keyֵΪval��Ԫ��
*/
void test03()
{
	// insert����4�ַ�ʽ��
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

	//m.erase(m.begin(), m.end()); // 4 �൱�����
	m.clear(); // 2
	printm(m);

	cout << m[6] << endl;

}
/* ������ͳ��
mp.find(key);	����keyԪ���Ƿ���ڣ����ڷ�����λ�õĵ����������򷵻�mp.end();
mp.count(key);	ͳ��Ԫ��key�ĸ���
*/
void test04()
{
	map<int, int> mp1;
	mp1.insert(pair<int, int>(1, 11));	mp1.insert(pair<int, int>(2, 22));
	mp1.insert(pair<int, int>(4, 44));	mp1.insert(pair<int, int>(3, 33));

	map<int,int>::iterator pos = mp1.find(3);
	if (pos != mp1.end())
		cout << "���ˣ�" << (*pos).first << pos->second << endl;
	else
		cout << "û��" << endl;

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

	// ���н�������
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

// ���� - Ա������

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
		Worker worker; // ����һ��Ա��
		worker.m_name = "Ա��";
		worker.m_name += nameSeed[i];// ����Ա������+�����
		worker.m_salary = 10000 + rand() % 10000;//����Ա�����ʣ�10000-19999
		v.push_back(worker);//��Ա�����뵽vector������
	}
}
void setDept(vector<Worker> &v, multimap<int, Worker>&m)
{
	// ����v��ÿ��Ԫ���ҵ�ÿ��Ա��
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int DeptID = rand() % 3; // ������䲿��0��1��2
		m.insert(make_pair(DeptID, *it));
	}
}
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
void showWorker(multimap<int, Worker> m)
{
	cout << "�߻������У�" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 0)
		{
			cout << "Ա����Ϊ��" << it->second.m_name <<
				"����Ϊ��" << it->second.m_salary << endl;
		}
	}
	cout << "���������У�" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 1)
		{
			cout << "Ա����Ϊ��" << it->second.m_name <<
				"����Ϊ��" << it->second.m_salary << endl;
		}
	}
	cout << "�з������У�" << endl;
	for (multimap<int, Worker>::iterator it = m.begin(); it != m.end(); it++)
	{
		if (it->first == 2)
		{
			cout << "Ա����Ϊ��" << it->second.m_name <<
				"����Ϊ��" << it->second.m_salary << endl;
		}
	}
	//----------------------------------------------------------------------------
	cout << "�߻������У�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "Ա����Ϊ��" << pos->second.m_name <<
			"����Ϊ��" << pos->second.m_salary << endl;
	}
	cout << "���������У�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "Ա����Ϊ��" << pos->second.m_name <<
			"����Ϊ��" << pos->second.m_salary << endl;
	}
	cout << "�з������У�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (pos; pos != m.end() && index < count; pos++, index++)
	{
		cout << "Ա����Ϊ��" << pos->second.m_name <<
			"����Ϊ��" << pos->second.m_salary << endl;
	}
}
void test06()
{
	srand((unsigned int)time(NULL));

	// ����Ա��
	vector<Worker> v;
	createworker(v);

	// Ա������
	multimap<int, Worker> m;
	setDept(v,m);

	// �鿴Ա��
	showWorker(m);
}

int main()
{
	test06();
	return 0;
}