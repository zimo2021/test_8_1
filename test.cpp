#include<iostream>
using namespace std;
//STL��������ί���
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
//		string name = "ѡ��";
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
//		//��deque����ʢ����ί�Ĵ�� ��ȥ����߷ֺ���ͷ� ��Ϊdeque������pop_back() ��pop_front()���� ���Ը�����Ķ����ݽ����޸�
//		deque<int>d;
//		int i;
//		for (i = 0; i < 10; i++)
//		{
//			int ret = rand() % 41 + 60;//������������60��100֮��
//			d.push_back(ret);
//		}
//		sort(d.begin(), d.end());
//		//��֤ȷʵ������10�������
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
//	//����ѡ��
//	creatPerson(v);
//	//int i;
//	/*for (i = 0; i < 5; i++)
//	{
//		cout << " ������" << v[i].m_name << " ������ " << v[i].m_score << endl;
//	}*/
//	//��ί���
//	creatscore(v);
//	//��ӡѡ����Ϣ��ƽ����
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//	cout << " ������" << v[i].m_name << " ������ " << v[i].m_score << endl;
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//stack����  ����������
//#include<stack>
//void test()
//{
//	stack<int>s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;//4
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;//40��10
//		//��ջ
//		s.pop();
//	}
//	cout << "ջ�Ĵ�СΪ��" << s.size() << endl;//0
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//queue����(�Ƚ��ȳ�)
//#include<queue>
//void test()
//{
//	queue<int>q;
//	q.push(10);
//	q.push(20);
//	q.push(30);
//	q.push(40);
//	cout << "q�Ĵ�СΪ��" << q.size() << endl;
//	while (!q.empty())
//	{
//		cout << "q��ջ��Ԫ��Ϊ��" << q.front() << endl;//10��40
//		q.pop();
//	}
//	cout << "q�Ĵ�СΪ��" << q.size() << endl;
//
//}
//
//int main()
//{
//	test();
//	return 0;
//}
//list����
//���캯��
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
//	printlist(l3);//ȫ����ӡ�ɹ�
//}
//int main()
//{
//	test();
//	return 0;
//}
//list�����ĸ�ֵ�ͽ���
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
//	//��assign�ķ�ʽ��ֵ
//	list<int>l;
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		l.push_back(i);
//	}
//	printlist(l);
//	list<int>l1;
//	//l1.assign(l);//�������� û�����������غ���
//	l1.assign(10,100);
//	list<int>l2;
//	l2.assign(l.begin(), l.end());
//	printlist(l1);
//	printlist(l2);
//	l2.swap(l1);//0��9   swap����
//	printlist(l2);//10��100
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//list��С����
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
//	l.resize(10, 1);//l�к���0 1 2 3 4�������1���
//	printlist(l);//0 1 2 3 4 1 1 1 1 1
//
//}
//int main()
//{
//	test();
//	return 0;
//}
//list�Ĳ����ɾ��
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
//		//β��
//		l.push_back(i);
//	}
//	printlist(l);//0 1 2 3 4 5 6 7 8 9
//	cout << l.size() << endl;//10
//	//βɾ
//	l.pop_back();
//	printlist(l);//0 1 2 3 4 5 6 7 8 
//	//ͷ��ͷɾ
//	l.push_front(0);
//	printlist(l);//0 0 1 2 3 4 5 6 7 8
//	l.pop_front();
//	printlist(l);//0 1 2 3 4 5 6 7 8
//	//����
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
//	printlist(l);//0 1 2 3 4 5 6 7 8 �����е�10ȫ��ɾ��
//	l.clear();
//	printlist(l);//�� 
//}
//int main()
//{
//	test();
//	return 0;
//}
//list�ķ�ת������
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
//	l.reverse();//��ת
//	printlist(l);//40 10 50 30 20
//	l.sort();
//	printlist(l);//10 20 30 40 50 Ĭ�ϴ�С�������������Ӵ�С���� ����sort�����ذ汾
//	l.sort(Compare);
//	printlist(l);//50 40 30 20 10
//}
//int main()
//{
//	test();
//	return 0;
//}
//list������������
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
//	person p1("����", 18, 170);
//	person p2("����", 17, 175);
//	person p3("����", 19, 168);
//	person p4("����", 20, 180);
//	person p5("����", 16, 162);
//	person p6("Ǯ��", 18, 171);
//	l.push_back(p1);
//	l.push_back(p2);
//	l.push_back(p3);
//	l.push_back(p4);
//	l.push_back(p5);
//	l.push_back(p6);
//
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "������" << it->m_name << " " << "���䣺" << it->m_age << " " << "��ߣ�" << it->m_height << endl;
//	}
//	//����
//	cout << "�����" << endl;
//	l.sort(Compare);
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << "������" << it->m_name << " " << "���䣺" << it->m_age << " " << "��ߣ�" << it->m_height << endl;
//	}
//	//OK
//}
//int main()
//{
//	test();
//	return 0;
//}















