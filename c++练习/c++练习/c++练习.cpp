#include<iostream>
using namespace std;

int main()
{
	/*int a,b,c = 0;
	cout << "请分别输入小猪a的体重" << endl;
	cin >> a;
	cout << "请分别输入小猪b的体重" << endl;
	cin >> b;
	cout << "请分别输入小猪c的体重" << endl;
	cin >> c;
	if (a > b) {
		if (a > c)
		{
			cout << "小猪a的体重最重" << endl;
		}
		else
			cout << "小猪c的体重最重" << endl;
	}
	else {
		if (b > c) {
			cout << "小猪b的体重最重" << endl;
		}
		else
			cout << "小猪c的体重最重" << endl;
	}*/

	//三目运算符
	/*int a = 10;
	int b = 20;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;*/
	/*int a = 0;
	cout << "请用户给电影打分(0-10)" << endl;
	cin >> a;
	cout << "您打的分数为" << a << endl;
	switch (a)
	{
	case 10:case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:case 7:
		cout << "您认为是非常好" << endl;
		break;
	case 6:case 5:
		cout << "您认为一般" << endl;
		break;
	default:cout << "您认为是烂片" << endl;
		break;
	
	}*/

	//int num = 0;
	//while (num < 10)
	//{
	//	cout << num << endl;
	//	num++;
	//}
	
	//猜数字游戏
	//1、系统生成随机数
	//srand((int)time(0));
	//int num =  rand() % 100 + 1; //生成0~100的随机数
	////2、玩家进行猜测
	//int a = 0;
	//cout << "请输入猜测的数字" << endl;
	//cin >> a;
	////3、判断玩家的猜测
	//while (a != num) {
	//	if (a > num)
	//	{
	//		cout << "猜的数字过大,请继续输入" << endl;
	//		cin >> a;
	//	}
	//	else
	//	{
	//		cout << "猜的数字过小,请继续输入" << endl;
	//		cin >> a;
	//	}
	//	while (a == num) {
	//		cout << "恭喜获得胜利" << endl;
	//		break;
	//}		
	//}
	//猜对退出游戏
	//猜错继续，提示过大还是过小，重新返回第二步
	/*int num = 0;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);*/

	////水仙花数
	//int num = 100;
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//do{
	//	/*a = num / 100;
	//	b = num / 10 % 10;
	//	c = num % 10;*///需要放在do循环中
	//	if (a*a*a + b*b*b + c*c*c==num ) {
	//		cout << "num是水仙花数" <<num<< endl;
	//	}
	//	num++;
	//} while (num<1000 );

	







	system("pause");
	
	return 0;
}