#include<iostream>
#include<cstdio> 
#include<windows.h>
#include<ctime>
using namespace std;
int main(){
	system("color F0");
	freopen("level.dll","w",stdout);
	system("cls");
	printf("%d",-1);
	freopen("palseF.dll","w",stdout);
	system("cls");
	cout<<0;
	freopen("palseZ.dll","w",stdout);
	system("cls");
	cout<<0;
	freopen("user.dll","w",stdout);
	system("cls");
	cout<<"LanGong";
	freopen("LanGongFileStartDetermination.txt","w",stdout);
	system("cls");
	printf("中国蓝光科技股份有限公司LanGongINC\n");
	printf("copy right 2013~2020 LanGongINC && LanGongDEV\n");
	printf("测评时间 ");
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout <<1900 + ltm->tm_year<<"年"<<1+ltm->tm_mon<<"月"<<ltm->tm_mday<<"日";
	cout <<ltm->tm_hour << ":"<< ltm->tm_min << ":"<< ltm->tm_sec << endl;
	printf("\n\n--------------------------------\n");
	printf("Configure Start Determination File LanGongINC && LanGongDEV\n");
	for(int i=0;i<10;i++)printf(" \n");
	printf("                                                  LanGong2020\n");
	return 0;
}
