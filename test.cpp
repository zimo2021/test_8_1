#include<iostream>
using namespace std;
//STL案例：评委打分
//#include<vector>
//#include<string>
//#include<deque>
//#include<ctime>
//#include<algorithm>
//class person
//{
//public:
//	person(string name, int score)
//	{
//		m_name = name;
//		m_score = score;
//	}
//	string m_name;
//	int m_score;
//};
//void creatPerson(vector<person>& v)
//{
//	string Name = "ABCDE";
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += Name[i];
//		int score = 0;
//		person p(name, score);
//		v.push_back(p);
//	}
//}
//void creatscore(vector<person>&v)
//{
//	for (vector<person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//用deque容器盛放评委的打分 再去除最高分和最低分 因为deque容器有pop_back() 和pop_front()函数 可以更方便的对数据进行修改
//		deque<int>d;
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			int ret = rand() % 41 + 60;//将分数控制在60到100之间
//			d.push_back(ret);
//		}
//		sort(d.begin(), d.end());
//		//验证确实生成了10个随机数
//		/*for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			cout << *dit << " ";
//		}
//		cout << endl;*/
//		d.pop_back();
//		d.pop_front();
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += (*dit);
//		}
//
//		it->m_score = (sum / d.size());
//	}
//}
//void test()
//{
//	srand((unsigned int)time(NULL));
//	vector<person>v;
//	//创建选手
//	creatPerson(v);
//	//int i;
//	/*for (i = 0; i < 5; i++)
//	{
//		cout << " 姓名：" << v[i].m_name << " 分数： " << v[i].m_score << endl;
//	}*/
//	//评委打分
//	creatscore(v);
//	//打印选手信息和平均分
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//	cout << " 姓名：" << v[i].m_name << " 分数： " << v[i].m_score << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//stack容器  （先入后出）
//#include<stack>
//void test()
//{
//	stack<int>s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "栈的大小为：" << s.size() << endl;//4
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为：" << s.top() << endl;//40到10
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小为：" << s.size() << endl;//0
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//queue容器(先进先出)
//#include<queue>
//void test()
//{
//	queue<int>q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	q.push(40);
//	cout << "q的大小为：" << q.size() << endl;
//	while (!q.empty())
//	{
//		cout << "q的栈顶元素为：" << q.front() << endl;//10到40
//		q.pop();
//	}
//	cout << "q的大小为：" << q.size() << endl;
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//list容器
//构造函数
//#include<list>
//void printlist(list<int>&l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	list<int>l;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	printlist(l);
//	list<int>l1(l.begin(), l.end());
//	printlist(l1);
//	list<int>l2(10, 100);
//	printlist(l2);
//	list<int>l3(l2);
//	printlist(l3);//全部打印成功
//}
//int main()
//{
//	test();
//	return 0;
//}
//list容器的赋值和交换
//#include<list>
//void printlist(list<int>&l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	//用assign的方式赋值
//	list<int>l;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	printlist(l);
//	list<int>l1;
//	//l1.assign(l);//这样不行 没有这样的重载函数
//	l1.assign(10,100);
//	list<int>l2;
//	l2.assign(l.begin(), l.end());
//	printlist(l1);
//	printlist(l2);
//	l2.swap(l1);//0到9   swap函数
//	printlist(l2);//10个100
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//list大小操作
//#include<list>
//void printlist(list<int>&l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	list<int>l;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	printlist(l);//0 1 2 3 4 5 6 7 8 9
//	cout << l.size() << endl;//10
//	l.resize(5);
//	printlist(l);//0 1 2 3 4
//	l.resize(10, 1);//l中含有0 1 2 3 4其余的用1填充
//	printlist(l);//0 1 2 3 4 1 1 1 1 1
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//list的插入和删除
//#include<list>
//void printlist(list<int>&l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	list<int>l;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		//尾插
//		l.push_back(i);
//	}
//	printlist(l);//0 1 2 3 4 5 6 7 8 9
//	cout << l.size() << endl;//10
//	//尾删
//	l.pop_back();
//	printlist(l);//0 1 2 3 4 5 6 7 8 
//	//头插头删
//	l.push_front(0);
//	printlist(l);//0 0 1 2 3 4 5 6 7 8
//	l.pop_front();
//	printlist(l);//0 1 2 3 4 5 6 7 8
//	//插入
//	list<int>::iterator it = l.begin();
//	l.insert(it, 10);
//	printlist(l);//10 0 1 2 3 4 5 6 7 8
//	list<int>::iterator lit = l.begin();
//	l.erase(lit);
//	printlist(l);//0 1 2 3 4 5 6 7 8
//	l.insert(++it, 10);//0 10 1 2 3 4 5 6 7 8
//	printlist(l);
//	l.insert(l.end(), 10);
//	printlist(l);//0 10 1 2 3 4 5 6 7 8 10
//	l.remove(10);
//	printlist(l);//0 1 2 3 4 5 6 7 8 将所有的10全部删除
//	l.clear();
//	printlist(l);//空 
//}
//int main()
//{
//	test();
//	return 0;
//}
//list的反转和排序
//#include<list>
//void printlist(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//bool Compare(int x, int y)
//{
//	return x > y;
//}
//void test()
//{
//	list<int>l;
//	l.push_back(20);
//	l.push_back(30);
//	l.push_back(50);
//	l.push_back(10);
//	l.push_back(40);
//	printlist(l);//20 30 50 10 40
//	l.reverse();//反转
//	printlist(l);//40 10 50 30 20
//	l.sort();
//	printlist(l);//10 20 30 40 50 默认从小到大排序如果想从大到小排序 可用sort的重载版本
//	l.sort(Compare);
//	printlist(l);//50 40 30 20 10
//}
//int main()
//{
//	test();
//	return 0;
//}
//list容器的排序案例
//#include<list>
//#include<string>
//class person
//{
//public:
//	person(string name, int age,int height)
//	{
//		m_name = name;
//		m_age = age;
//		m_height = height;
//	}
//	string m_name;
//	int m_age;
//	int m_height;
//};
//bool Compare(person& p1, person& p2)
//{
//	if (p1.m_age == p2.m_age)
//	{
//		return p1.m_height < p2.m_height;
//	}
//	return p1.m_age < p2.m_age;
//}
//void test()
//{
//	list<person>l;
//	person p1("张三", 18, 170);
//	person p2("李四", 17, 175);
//	person p3("王五", 19, 168);
//	person p4("赵六", 20, 180);
//	person p5("孙七", 16, 162);
//	person p6("钱八", 18, 171);
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "姓名：" << it->m_name << " " << "年龄：" << it->m_age << " " << "身高：" << it->m_height << endl;
//	}
//	//排序
//	cout << "排序后：" << endl;
//	l.sort(Compare);
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "姓名：" << it->m_name << " " << "年龄：" << it->m_age << " " << "身高：" << it->m_height << endl;
//	}
//	//OK
//}
//int main()
//{
//	test();
//	return 0;
//}















