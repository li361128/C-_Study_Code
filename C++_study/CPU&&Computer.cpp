//#define _CRT_SECURE_NO_WARNINGS 1
//#include"FunctionDeclaration.h"
//
//class CPU
//{
//public:
//	virtual void calculator() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void dispaly() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
//class Computer
//{
//public :
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) :m_cpu(cpu), m_vc(vc), m_mem(mem){}
//	void work()
//	{
//		m_cpu->calculator();
//		m_vc->dispaly();
//		m_mem->storage();
//	}
//	~Computer()
//	{
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//};
//
////Intel厂商
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Intel的CPU开始计算了！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void dispaly()
//	{
//		cout << "Intel的显卡开始显示了！" << endl;
//	}
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel的内存条开始存储了" << endl;
//	}
//};
//
////Lenvo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculator()
//	{
//		cout << "Lenovo的显卡开始显现了！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//	virtual void dispaly()
//	{
//		cout << "Lenvo的显卡开始显现了！" << endl;
//	}
//};
//
//class LenovoMemory:public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Lenovo的内存条开始存储了！" << endl;
//	}
//};
//
//void test01()
//{
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
//	computer2->work();
//	delete computer2;
//	cout << "-----------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	//第三台电脑组装
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
//	computer3->work();
//	delete computer3;
//}
//
//int main() 
//{
//	test01();
//
//	system("pause");
//
//	return 0;
//}