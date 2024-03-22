#define _CRT_SECURE_NO_WARNINGS 1

#include"speechManager.h"

SpeechManager::SpeechManager()
{
	//初始化容器和属性
	this->initSpeech();

	//创建选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();
}

SpeechManager::~SpeechManager()
{

}

void SpeechManager::show_Menu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	this->m_Index = 1;
	this->m_Speaker.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->v1.clear();
	this->m_Record.clear();//初始化记录容器
}

void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "选手";
		name += nameSeed.at(i);

		Speaker sp;
		sp.m_Name = name;
		//为12名选手进行编号
		this->v1.push_back(i + 10001);
		//选手编号 以及对应的选手 存放到指定容器中
		this->m_Speaker.insert(make_pair(this->v1.at(i), sp));
	}
}

void SpeechManager::startSpeech()
{
	//第一轮比赛
	//1、抽签
	speechDraw();

	//2、比赛
	speechContest();

	//3、显示晋级结果
	showScore();

	//第二轮比赛
	this->m_Index++;

	//1、抽签
	speechDraw();

	//2、比赛
	speechContest();

	//3、显示最终结果
	showScore();

	//4、保存分数
	saveRecord();
//有问题没解决
	//重置比赛，获取记录
		
	//初始化容器和属性
	this->initSpeech();
	//this->m_Index = 1;

	//创建选手
	this->createSpeaker();

	//加载往届记录
	this->loadRecord();


	cout << "本届比赛完毕！" << endl;
	system("pause");
	system("cls");
}

void SpeechManager::speechDraw()
{
	cout << "第《" << this->m_Index << "》轮的比赛的选手正在抽签" << endl;
	cout << "---------------------" << endl;
	cout << "抽签后演讲顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "---------------------" << endl;
	system("pause");
}

void SpeechManager::speechContest()
{
	cout << "------------- 第" << this->m_Index << "轮正式比赛开始：------------- " << endl;
	multimap<double, int, greater<int>>groupScore;//临时容器 保留 key分数 value选手编号
	int num = 0;
	vector<int> v_Src;
	if (this->m_Index == 1) v_Src = v1;
	else v_Src = v2;
	//遍历所有参赛选手
	cout << "-------------		评委打分		 -------------" << endl;
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{
		if (num % 6 == 0) cout << "第" << num / 6 + 1 << "小组比赛结果" << endl;
		num++;
		//评委打分
		deque<double> d;
		cout << "选手编号：" << *it << "\t选手姓名：" << m_Speaker[*it].m_Name << "\t评委打分成绩：" << " ";
		for (int i = 0; i < 10; i++)
		{
			double score = (rand() % 401 + 600) / 10.f;
			cout << score << " ";
			d.push_back(score);
		}
		cout << endl;
		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_back();
		d.pop_front();
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();
		//每个人的平均分
		//cout << "编号：" << *it << "选手：" << this->m_Speaker[*it].m_Name << "\t获取平均分：" << avg << endl;
		//cout << endl;
		this->m_Speaker[*it].m_Score[this->m_Index] = avg;//把平均分放到map容器里
		groupScore.insert(make_pair(avg, *it));
		//每六人取出前三名
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "小组比赛名次" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << "\t姓名：" << this->m_Speaker[it->second].m_Name <<
					"\t成绩：" << it->first << endl;
			}
			//取走前三名
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end() && count < 3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					v2.push_back((*it).second);
				}
				else
				{
					vVictory.push_back((*it).second);
				}
			}
			groupScore.clear();
			cout << endl;
		}
	}

	cout << "------------- 第" << this->m_Index << "轮比赛完毕  ------------- " << endl;
	system("pause");
}

void SpeechManager::showScore()
{
	cout << "---------第" << this->m_Index << "轮晋级选手信息如下：-----------" << endl;
	vector<int> v;
	if (this->m_Index == 1) v = v2;
	else v = vVictory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << "\t选手姓名：" << m_Speaker[*it].m_Name <<
			"\t选手成绩：" << m_Speaker[*it].m_Score[this->m_Index] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	show_Menu();
}

void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用追加的方式写文件
	//将每个选手数据 写入到文件中
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_Name << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//关闭文件
	ofs.close();
	cout << "记录已经保存" << endl;

	//有记录了，文件不为空 实时更新数据
	this->fileIsEmpty = false;
}

void SpeechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//输入流对象 读取文件
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		//cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	//文件清空情况
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);//将上面读取的单个字符 放回来
	string data;
	int index = 0;//第几届
	while (ifs >> data)
	{
		//cout << data << endl;
		//10010,选手J,82.9875,10009,选手I,84.5375,10007,选手G,89.75,

		vector<string> v;//存放6个string字符串

		int pos = -1;//查到“,”位置
		int start = 0;
		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//没有找到情况
				break;
			}
			string temp = data.substr(start, pos - start);
			//cout << temp << endl;
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();

	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++)
	//{
	//	cout << it->first << "冠军编号：" << it->second[0] <<
	//		"\t姓名："<<it->second[1] << "\t分数：" << it->second[2] << endl;
	//}
}

void SpeechManager::showRecord()
{
	if (this->fileIsEmpty)
	{
		cout << "文件为空或文件不存在" << endl;
	}
	else
	{
		for (int i = 0; i < this->m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届"
				<< "\t冠军编号：" << this->m_Record[i][0] << " 姓名：" << this->m_Record[i][1] << "得分：" << this->m_Record[i][2] << endl <<
				"\t亚军编号：" << this->m_Record[i][3] << " 姓名：" << this->m_Record[i][4] << " 得分：" << this->m_Record[i][5] << endl <<
				"\t季军编号：" << this->m_Record[i][6] << " 姓名：" << this->m_Record[i][7] << " 得分：" << this->m_Record[i][8] << endl;
		}
	}
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "确认清空？" << endl;
	cout << "1、确认" << endl;
	cout << "2、返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		//打开模式
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//初始化属性
		this->initSpeech();

		//创建选手
		this->createSpeaker();

		//获取往届记录
		this->loadRecord();

		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}

