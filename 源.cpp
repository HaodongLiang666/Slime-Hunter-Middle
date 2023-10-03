#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"include.h"
#include"define.h"
using namespace std;
#pragma comment(lib,"winmm.lib")//包含库文件winmm.lib，放音乐必备2

//下面是一些全局变量的声明
int IfGetTheFile;//判断是否读取文件
//int IfPlayerOwnReturn;
int Moneynumber_1;//判断
int playerIndex;//判断选择的角色
int sign = 0;//标记时间积累
int DieEnemy;//死亡的敌人
int enemydieNUm;//敌人死亡的数量
int a, b, c;//结束怪物初始化坐标
int tap, tap_1;//记录敌人的当前数量
int play = 1;//用来判断是否播放音乐
int minutes, seconds;//记录时间
int Pauseindex;//判断点击暂停
int Saveindex;//判断点击存档
int HPindex;//判断点击血瓶
int bagIndex;//判断是否点击背包
int  blueswordY;//蓝剑的y坐标
int  blueswordX;//蓝剑的x坐标
int DieEnemyNum;//死亡的敌人数量
int game;//use to 判断游戏是否胜利，1：yes  0:no
int timecount;//判断是否初始化时间
double sHP;//接受存档血量
int playerDirection;//判断角色方向
int WeaponType;//判断武器类型
int w;//
int sAggressivity;//接受存档攻击力
int sMoveSpeed;//接受存档移动速度
int sx;//接受存档x坐标
int sy;//接受存档y坐标
int slevel;//接受存档等级
int sWeaponNum;//接受存档武器数量
int sXP;//接受存档经验值
int sMoneyNum;//接受存档金币数量
int sSoulNum;//接受存档灵魂数量
int sHpBottleNum;//接受存档血瓶数量
int hpnumber;//血量指数标记
int whatplayer;//判断读档角色
int shenLimit;//神剑数量限制
int moLimit;//魔剑数量限制
int dragonLimit;//龙刀数量限制
int hammerLimit;//锤子数量限制
int read;//
int starMap;//标记六芒星地图
int mountionMap;//标记山地图
int map;//
int buy;//判断是否有能力购买
int drawboss;//判断是否要画boss
int countBuffer;//
int group;//panduan dianji
int onlymoney;//暂时的金币
int onlysoul;//暂时的灵魂

//下面是一些字符数组，主要用来存储一些数据
char s[100], t[100];
char hp[100];
char xp[100];
char attack[100];
char speed[100];
char money[100];
char soul[100];
char Level[100];
char HpBottle[100];
char ahp[20];
char axp[20];
char aattack[50];
char amove[40];
char ax[20];
char ay[20];
char alevel[30];
char aweapon[40];
char amoney[40];
char asoul[40];
char abottle[40];
char aindex[100];
char shenL[100];
char moL[100];
char dragonL[100];
char hammerL[100];
char Hpnum[100];
int survivE;
char SurvivE[100];
char Sser[100];
char bohp[100];

int mapX = -380, mapY = -380;

//下面是一些图片对象的声明
IMAGE star, MAllstar, mountion, Allmountion, star_1, mountion_1, star_2, mountion_2;
IMAGE img_background, img_grass, Allgrass;
IMAGE img_obstacle_1, img_obstacle_2;
IMAGE img_hdleft_1, img_hdleft_2, img_hdright_1, img_hdright_2;
IMAGE goddness_1, goddness_2, goddnessleft_1, goddnessleft_2;
IMAGE slm_attack_1, slm_attack_2;
IMAGE img_enemy_g_1, img_enemy_g_2, img_enemy_b_1, img_enemy_b_2;
IMAGE level_1, level_2;
IMAGE sword_1, sword_2, dian_1, dian_2;
IMAGE Allsword_1, bluesword_2, purplesword_2;
IMAGE loop_1, loop_2;
IMAGE soul_1, soul_2, soul_3, money_1, money_2, pause_1, pause_2, pause_3;
IMAGE ball_1, ball_2, ball_3, book_1, book_2, book_3;
IMAGE shop_1, shop_2, shop_3, save_1, save_2, save_3, bag_1, bag_2, bag_3, question_1, question_2, question_3;
IMAGE medicineHP_1, medicinePP_1, medicineHP_2, medicinePP_2, medicineHP_3;
IMAGE board_1, board_2, board_3, board_4;
IMAGE BlackSpace_1, BlackSpace_2, Pause, gameover, victory;
IMAGE MagicCircle_Y, return_21, return_22, return_23;
IMAGE Dragonshop, shenSword, moSword, dragonknife, hammer;
IMAGE menu_1, menu_2, menu_3, returnPlay_1, returnPlay_2, returnPlay_3;
IMAGE sun, knight, elf, knight_1, elf_1, disorigion, disorigion_1;
IMAGE TaiJi_1, TaiJi_2, TaiJi_3, TaiJi_4, TaiJi_5;
IMAGE box_1, box_2, Strengthen, abilityUI;
IMAGE box_31, box_32, menun, scr;
IMAGE boss_1, boss_2, boss_3, boss_0, gslm_0, bslm_0, boss_5;
IMAGE loop, zhan, jian, LeiDian, MingRen, snow_1, snow_2;
IMAGE Helix_attack[2][16], Helix_attacky[2][16];//螺旋丸 [0]：右方向 [1]:左方向

//利用定时器，去控制自动移动的事物
int Timer(int duration, int id)//间隔
{
	//采用静态变量，自动记录程序结果，自动初始化，不用人为初始化
	static int starttime[20];//设置20个定时器
	int endtime = clock();//统计程序运行到当前代码的时间
	if (endtime - starttime[id] > duration)
	{
		starttime[id] = endtime;
		return 1;
	}
	return 0;


}

//比较两个数的大小
int Myabs(int number)
{
	return number >= 0 ? number : (number - 2 * number);
}

void GameOver();
//弹药
struct Buffer {
	int bx;
	int by;
	int bv;
	int endx, endy;
	int borigion;
};
//武器
struct Weapon {
	int DamagaArea;//伤害区域
	int Durition;//持续时间
	int Coolingtime;//冷却时间
	int Damage;//伤害
	int WeaponPrice;
	int WeaponLevel;
	string name;
};

class Enemy_Blue;

class Enemy_Green;
//人物类
class Player {
	friend class Enemy;
	friend class Enemy_Blue;
	friend class Enemy_Green;

protected:
	double HP;//
	int Aggressivity;//攻击力
	int MoveSpeed;
	int x;
	int y;
	int level;
	int WeaponNum;
	int XP;
	int MoneyNum;
	int SoulNum;
	int HpBottleNum;
	int survive;

	struct Weapon weapon[15];

public:

	Player() :HP(PlayerHP), Aggressivity(PlayerAggressivity), MoveSpeed(PlayerMoveSpeed),
		x(PlayerInitPositionX), y(PlayerInitPositionY) {
		level = 0;
		WeaponNum = 1;
		XP = 0;
		MoneyNum = 0;
		survive = 0;
		SoulNum = 0;
		HpBottleNum = 0;
	};

	void PlayerPositionChange(int positionC)
	{
		if (positionC == 77)//right
		{
			if (x + MoveSpeed >= Obstacle1_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle1_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
				x + MoveSpeed >= Obstacle2_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle2_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
				x + MoveSpeed >= Obstacle3_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle3_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
				x + MoveSpeed >= Obstacle4_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle4_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
				x + MoveSpeed >= Obstacle5_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle5_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
				x + MoveSpeed >= Obstacle6_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle6_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE
				)
			{
				x = x;
			}
			else {

				if (x <= WIDTH - LINEDISTANCE * 4) {

					x += MoveSpeed;
					mapX -= MoveSpeed / 2;
				}

			}
		}
		else if (positionC == 75)//left
		{
			if (x - MoveSpeed >= Obstacle1_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle1_RightLimit - 2 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
				x - MoveSpeed >= Obstacle2_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle2_RightLimit - 2 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
				x - MoveSpeed >= Obstacle3_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle3_RightLimit - 2 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
				x - MoveSpeed >= Obstacle4_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle4_RightLimit - 2 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
				x - MoveSpeed >= Obstacle5_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle5_RightLimit - 2 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
				x - MoveSpeed >= Obstacle6_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle6_RightLimit - 2 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE
				)
			{
				x = x;
			}
			else {
				if (x >= 0) {
					x -= MoveSpeed;
					mapX += MoveSpeed / 2;
				}
			}
		}
		else if (positionC == 80)//down
		{
			if (y + MoveSpeed >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle1_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
				y + MoveSpeed >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle2_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
				y + MoveSpeed >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle3_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
				y + MoveSpeed >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle4_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
				y + MoveSpeed >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle5_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
				y + MoveSpeed >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle6_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
				)
			{
				y = y;
			}
			else {
				if (y <= HEIGHT - LINEDISTANCE * 4 - LINEDISTANCE / 2) {
					y += MoveSpeed;
					mapY -= MoveSpeed / 2;
				}


			}
		}
		else if (positionC == 72)//up
		{
			if (y - MoveSpeed >= Obstacle1_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle1_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
				y - MoveSpeed >= Obstacle2_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle2_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
				y - MoveSpeed >= Obstacle3_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle3_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
				y - MoveSpeed >= Obstacle4_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle4_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
				y - MoveSpeed >= Obstacle5_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle5_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
				y - MoveSpeed >= Obstacle6_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle6_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
				)
			{
				y = y;
			}
			else {
				if (y >= 0) {
					y -= MoveSpeed;
					mapY += MoveSpeed / 2;
				}
			}
		}
	}

	//返回玩家的一些状态
	int ReturnPlayerX()
	{
		return x;
	}
	int ReturnPlayerY()
	{
		return y;
	}
	double ReturnPlayerHP()
	{
		return HP;
	}
	int ReturnPlayerAttack()
	{
		return Aggressivity;
	}
	int ReturnPlayerLevel()
	{
		return level;
	}
	int ReturnPlayerXp()
	{
		return XP;
	}
	int ReturnPlayerSpeed()
	{
		return MoveSpeed;
	}
	int ReturnPlayerHpBottleNum()
	{
		return HpBottleNum;
	}
	int ReturnMoneyNum()
	{
		return MoneyNum;
	}
	int ReturnSoulNum()
	{
		return SoulNum;
	}
	int ReturnPlayerWeaponNum()
	{
		return WeaponNum;
	}
	int ReturnPlayerhpnumber()
	{
		/*if (playerIndex == 1) return hpnumber_1;
		else if (playerIndex == 2) return hpnumber_2;*/
		return hpnumber;

	}
	int ReturnPlayerSurvive()
	{
		return survive;
	}

	//改变玩家的一些状态
	void PlayerHpChange(int attack)
	{
		if (HP - attack > 0)HP -= attack;
		else {
			ShowWindow(GetHWnd(), SW_HIDE);
			int result = MessageBox(NULL, "你是否确定消耗一次复活机会？", "是", MB_YESNO | MB_ICONQUESTION);
			ShowWindow(GetHWnd(), SW_SHOW);
			if (result == IDYES)
			{
				if (survive > 0)
				{
					MessageBox(GetHWnd(), "复活成功，请继续游戏！", "提示", MB_OK);
					survive--;
					if (whatplayer == 1)
					{
						if (playerIndex == 1)
						{
							HP = sHP;
						}
						else HP = PlayerHP;
					}
					else if (whatplayer == 2)
					{
						if (playerIndex == 2)
						{
							HP = sHP;
						}
						else HP = PlayerHP;
					}




				}
				else {
					MessageBox(GetHWnd(), "无复活次数！", "提示", MB_OK);
					GameOver();
				}


			}
			else {
				GameOver();
			}

		}

	}
	void PlayerLevelUp()
	{
		level++;
	}
	void PlayerAttribute(int level)
	{
		if (IfGetTheFile == 1)
		{
			if (HP <= sHP - PlayerHPadd) HP += PlayerHPadd;
			else HP = sHP;
		}
		else if (IfGetTheFile == 0) {
			if (HP <= PlayerHP - PlayerHPadd) HP += PlayerHPadd;
			else HP = PlayerHP;
		}

		if (level % 8 == 0)
		{
			Aggressivity++;//improve attack every 5 levels

		}
	}
	void PlayerMoveSpeedChange(int level)
	{
		if (level % 5 == 0)
		{
			MoveSpeed++;
		}
	}
	void PLayerWeaponUP()
	{
		if (WeaponNum <= 15) WeaponNum++;

	}
	void PlayerXpPlus()
	{
		XP++;
	}
	void MoneyChange(int i)
	{
		MoneyNum += i;
	}
	void SoulChange(int i)
	{
		SoulNum += i;
	}
	void HpBottleChange()
	{
		if (HpBottleNum > 0)
		{
			if (HP < PlayerHP) {
				if (HP + 100 > PlayerHP) HP = PlayerHP;
				else {
					HP += 100;
				}
				HpBottleNum--;
			}

		}

	}

	//设置玩家的一些状态
	void SetPlayerPosition(int px, int py)
	{
		x = px;
		y = py;
	}
	void SetPlayerHP(double pHP)
	{
		HP = pHP;
	}
	void SetPlayerAggressivity(int pattack)
	{
		Aggressivity = pattack;
	}
	void SetPlayerMoveSpeed(int pmove)
	{
		MoveSpeed = pmove;
	}
	void SetPlayerLevel(int plevel)
	{
		level = plevel;
	}
	void SetPlayerXP(int pXP)
	{
		XP = pXP;
	}
	void SetPlayerMoneyNum(int moneynum)
	{
		MoneyNum = moneynum;
	}
	void SetPlayerSoulNum(int soulnum)
	{
		SoulNum = soulnum;
	}
	void SetPlayerHpBottleNum(int pBottle)
	{
		HpBottleNum = pBottle;
	}
	void SetPlayerWeaponNum(int weaponnum)
	{
		WeaponNum = weaponnum;
	}
	void SetPlayerSurvive(int i)
	{
		survive = i;
	}

	//局内强化   人物
	void StrengthenPlayerHP(double hp)
	{
		if (IfGetTheFile == 1)
		{
			if (HP <= hp - 200) HP += 200;
			else HP = hp;
		}
		else if (IfGetTheFile == 0) {
			if (HP <= PlayerHP - 200) HP += 200;
			else HP = PlayerHP;
		}
	}
	void StrengthenPlayerAggressivity()
	{
		Aggressivity += 1;
	}
	void StrengthenPlayerMoveSpeed()
	{
		MoveSpeed += 1;
	}
	void StrengthenPlayerSoul()
	{
		SoulNum += 10;
	}
	void StrengthenPlayerHpBottle()
	{
		HpBottleNum += 2;
	}

	//局内强化  武器
	void StrengthenWeaponDamage(int i)
	{
		weapon[i].Damage += 1;
	}
	void StrengthenWeaponDamageArea(int i)
	{
		weapon[i].DamagaArea += 10;
	}
	void StrengthenWeaponCoolingtime(int i)
	{
		if (weapon[i].Coolingtime >= 1000)	weapon[i].Coolingtime -= 100;
		else weapon[i].Coolingtime = 1000;
	}
	void StrengthenWeaponDurition(int i)
	{
		weapon[i].Durition += 100;
	}
	void StrengthenWeaponLevel(int i)
	{
		weapon[i].WeaponLevel += 1;
	}
	void StrengthenWeapon()
	{
		for (int i = 0; i < WeaponNum; i++)
		{
			weapon[i].Damage++;
			if (weapon[i].DamagaArea + 10 <= 600)weapon[i].DamagaArea += 10;
			if (weapon[i].Coolingtime - 500 >= 0) weapon[i].Coolingtime -= 500;//5 second;  5000ms
			if (weapon[i].Durition - 100 >= 0)			weapon[i].Durition -= 100;//1 second ;1000ms

		}
	}

	//商店增益
	void ShopAddHP(double hp)
	{
		if (HP < PlayerHP) HP = PlayerHP;

		HP += hp;
		hpnumber += (hp / 100);
	}
	void SetPlayerhpnumber(int i)
	{
		/*if (playerIndex == 1)
		{
			hpnumber_1 = i;
			hpnumber = hpnumber_1;
		}
		else if (playerIndex == 2)
		{
			hpnumber_2 = i;
			hpnumber = hpnumber_2;
		}*/
		hpnumber = i;

	}
	void ShopAddAttack(int attack)
	{
		Aggressivity += attack;
	}
	void ShopAddMove(int move)
	{
		MoveSpeed += move;
	}
	void ShopAddWeapon()
	{
		if (WeaponType == 1)
		{
			weapon[WeaponNum].Damage = 5;//火焰护身（无限制使用）
			weapon[WeaponNum].DamagaArea = 200;//600*600
			weapon[WeaponNum].Coolingtime = 0;//10 second;  10000ms
			weapon[WeaponNum].Durition = 0;//1 second ;1000ms
			weapon[WeaponNum].WeaponPrice = 500;
			weapon[WeaponNum].WeaponLevel = 1;
			weapon[WeaponNum].name = "神剑";
		}
		else if (WeaponType == 2)
		{
			weapon[WeaponNum].Damage = 400;//十字斩//紫色剑气
			weapon[WeaponNum].DamagaArea = 400;//600*600
			weapon[WeaponNum].Coolingtime = 3000;//10 second;  10000ms
			weapon[WeaponNum].Durition = 320;//1 second ;1000ms
			weapon[WeaponNum].WeaponPrice = 500;
			weapon[WeaponNum].WeaponLevel = 1;
			weapon[WeaponNum].name = "魔剑";
		}
		else if (WeaponType == 3)
		{
			weapon[WeaponNum].Damage = 500;//Elf-King获得鸣人螺旋丸
			weapon[WeaponNum].DamagaArea = 600;//600*600
			weapon[WeaponNum].Coolingtime = 8000;//10 second;  10000ms
			weapon[WeaponNum].Durition = 1500;//1 second ;1000ms
			weapon[WeaponNum].WeaponPrice = 1500;
			weapon[WeaponNum].WeaponLevel = 1;
			weapon[WeaponNum].name = "屠龙刀";
		}
		else if (WeaponType == 4)
		{
			weapon[WeaponNum].Damage = 800;//Death-Knight获得雷霆万钧
			weapon[WeaponNum].DamagaArea = WIDTH;//全屏
			weapon[WeaponNum].Coolingtime = 10000;//10 second;  10000ms
			weapon[WeaponNum].Durition = 600;//1 second ;1000ms
			weapon[WeaponNum].WeaponPrice = 2000;
			weapon[WeaponNum].WeaponLevel = 1;
			weapon[WeaponNum].name = "雷神之锤";
		}
	}
	void ShopAddSurvive()
	{
		survive++;
	}
	//把武器限制再完善一下
	void AddMoney(int money)
	{
		MoneyNum += money;
	}
	void AddSoul(int soul)
	{
		SoulNum += soul;
	}
	void AddHpBottle(int bottle)
	{
		HpBottleNum += bottle;
	}




};

class Player_Goddness :public Player {
	friend class Enemy;
	friend class Enemy_Blue;
	friend class Enemy_Green;

	int BufferLiveNum;
public:

	struct Buffer buffer[400];
	Player_Goddness() :Player() {

		weapon[0].Damage = 5;
		weapon[0].DamagaArea = 600;//600*600
		weapon[0].Coolingtime = 10000;//10 second;  10000ms
		weapon[0].Durition = 1000;//1 second ;1000ms
		weapon[0].WeaponPrice = 99999;
		weapon[0].WeaponLevel = 1;
		weapon[0].name = "冰雪女神的叹息";

		for (int i = 1; i < 15; i++)
		{
			weapon[i].Damage = 0;
			weapon[i].DamagaArea = 0;
			weapon[i].Coolingtime = 0;//5 second;  5000ms
			weapon[i].Durition = 0;//1 second ;1000ms
			weapon[i].WeaponPrice = 0;
			weapon[i].WeaponLevel = 0;
			weapon[i].name = " ";
		}

		for (int i = 0; i < 400; i++)
		{

			buffer[i].bv = 1;
			buffer[i].bx = 0;
			buffer[i].by = 0;
			buffer[i].endx = 0;
			buffer[i].endy = 0;
			buffer[i].borigion = 0;
		}


		BufferLiveNum = 0;
	}

	//远程攻击
	void PlusPlayerLiveBufferNum(int i)
	{
		BufferLiveNum += i;
	}
	void DecreasePlayerLiveBufferNum()
	{
		BufferLiveNum--;
	}
	int ReturnPLayerBufferLiveNum()
	{
		return BufferLiveNum;
	}


	void SetPlayerBuffer()
	{

		for (int i = 0; i < 400; i++)
		{
			buffer[i].bv = 1;
			buffer[i].bx = x;
			buffer[i].by = y;
			buffer[i].endx = 1;
			buffer[i].endy = 1;
			buffer[i].borigion = 0;
		}


		BufferLiveNum = 0;
	}


};

class Player_Knight :public Player {
	friend class Enemy;
	friend class Enemy_Blue;
	friend class Enemy_Green;
public:
	Player_Knight() :Player() {
		weapon[0].Damage = 5;
		weapon[0].DamagaArea = 10;
		weapon[0].Coolingtime = 2000;//2second;  2000ms
		weapon[0].Durition = 1000;//1 second ;1000ms
		weapon[0].WeaponPrice = 99999;
		weapon[0].WeaponLevel = 1;
		weapon[0].name = "火焰之神的咆哮";

		for (int i = 1; i < 15; i++)
		{
			weapon[i].Damage = 0;
			weapon[i].DamagaArea = 0;
			weapon[i].Coolingtime = 0;//5 second;  5000ms
			weapon[i].Durition = 0;//1 second ;1000ms
			weapon[i].WeaponPrice = 0;
			weapon[i].WeaponLevel = 0;
			weapon[i].name = " ";
		}
	}
};

Player_Knight player_1;

Player_Goddness player_2;
//敌人类
class Enemy {
	friend class Player;
	friend class Player_Goddness;
	friend class Player_Knight;
protected:
	int HP;
	int Aggressivity;//攻击力
	int MoveSpeed;
	int x;//需要随机刷新
	int y;//需要随机刷新
	int AttackDistance;
	int index;
	int drop;
	int move_1, move_2, move_3, move_4;
public:
	int flag;
	Enemy() :HP(EnemyHP), Aggressivity(EnemyAggressivity), MoveSpeed(EnemyMoveSpeed),
		AttackDistance(EnemyAttackDistance)
	{

		a = rand() % WIDTH;
		b = rand() % HEIGHT;
		c = rand() % 4;
		move_1 = 0;
		move_2 = 0;
		move_3 = 0;
		move_4 = 0;
		if (c == 0) { x = a; y = HEIGHT - EnemyHeight; move_1 = 1; }
		else if (c == 1) { x = a; y = 0 + LINEDISTANCE * 2; move_2 = 1; }
		else if (c == 2) { x = 0 + LINEDISTANCE; y = b; move_3 = 1; }
		else { x = WIDTH - EnemyWidth; y = b; move_4 = 1; }

		flag = 1;//live
		index = 0;//don't be picked up
		drop = rand() % 8;

	}


	void EnemyPosition() {};

	//返回敌人属性
	int ReturnEnemyX()
	{
		return x;
	}
	int ReturnEnemyY()
	{
		return y;
	}
	int ReturnEnemyHp()
	{
		return HP;
	}
	int ReturnEnemyDrop()
	{
		return drop;
	}
	int ReturnIndex()
	{

		return index;
	}

	//敌人属性变化
	void EnemyHpChange(int attack)
	{
		if (HP - attack > 0) HP -= attack;
		else
		{
			flag = 0;//die
			DieEnemy++;
			if (playerIndex == 1) player_1.PlayerXpPlus();
			else if (playerIndex == 2) player_2.PlayerXpPlus();
		}
	}
	void EnemyAggressivityChange() {};
	void EnemyMoveSpeedChange() {};
	void ChangeIndex()
	{
		index = 1;
	}
	void EnemyXChange(int i)
	{
		x += i;
	}
	void EnemyYChange(int i)
	{
		y += i;
	}

	//设置敌人属性
	void SetEnemyHP(int hp)
	{
		HP = hp;
	}
	void SetEnemyAggressivity(int attack)
	{
		Aggressivity = attack;
	}
	void SetEnemyMoveSpeed(int speed)
	{
		MoveSpeed = speed;
	}
	void SetEnemyFlag()
	{
		flag = 1;
	}
	void SetEnemyIndex()
	{
		index = 0;
	}
	void SetEnemyDrop()
	{
		drop = rand() % 5;
	}
	void SetEnemyPosition()
	{
		a = rand() % WIDTH;
		b = rand() % HEIGHT;
		c = rand() % 4;
		move_1 = 0;
		move_2 = 0;
		move_3 = 0;
		move_4 = 0;
		if (c == 0) { x = a; y = HEIGHT - EnemyHeight; move_1 = 1; }
		else if (c == 1) { x = a; y = LINEDISTANCE * 2; move_2 = 1; }
		else if (c == 2) { x = LINEDISTANCE; y = b; move_3 = 1; }
		else { x = WIDTH - EnemyWidth; y = b; move_4 = 1; }
	}



};

class Enemy_Blue :public Enemy {
	friend class Player;
	friend class Player_Goddness;
	friend class Player_Knight;
public:
	Enemy_Blue() :Enemy()
	{

	}
	void EnemyPosition()
	{
		if (playerIndex == 1)
		{
			if (flag == 1)
			{

				if (!((x <= Obstacle1_RightLimit - LINEDISTANCE && x >= Obstacle1_LeftLimit - LINEDISTANCE * 3
					&& y <= Obstacle1_UpperLimit - LINEDISTANCE && y >= Obstacle1_BelowLimit - LINEDISTANCE * 3) ||
					(x <= Obstacle2_RightLimit - LINEDISTANCE && x >= Obstacle2_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle2_UpperLimit - LINEDISTANCE && y >= Obstacle2_BelowLimit - LINEDISTANCE * 3) ||
					(x <= Obstacle3_RightLimit - LINEDISTANCE && x >= Obstacle3_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle3_UpperLimit - LINEDISTANCE && y >= Obstacle3_BelowLimit - LINEDISTANCE * 3) ||
					(x <= Obstacle4_RightLimit - LINEDISTANCE && x >= Obstacle4_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle4_UpperLimit - LINEDISTANCE && y >= Obstacle4_BelowLimit - LINEDISTANCE * 3) ||
					(x <= Obstacle5_RightLimit - LINEDISTANCE && x >= Obstacle5_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle5_UpperLimit - LINEDISTANCE && y >= Obstacle5_BelowLimit - LINEDISTANCE * 3) ||
					(x <= Obstacle6_RightLimit - LINEDISTANCE && x >= Obstacle6_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle6_UpperLimit - LINEDISTANCE && y >= Obstacle6_BelowLimit - LINEDISTANCE * 3)))
				{

					if (player_1.ReturnPlayerX() > x)
					{
						x += MoveSpeed;
					}
					else if (player_1.ReturnPlayerX() < x)
					{
						x -= MoveSpeed;
					}
					else;

					if (player_1.ReturnPlayerY() > y)
					{
						y += MoveSpeed;


					}
					else if (player_1.ReturnPlayerY() < y)
					{
						y -= MoveSpeed;

					}
					else;



				}

				else {
					if (player_1.ReturnPlayerX() >= x)
					{
						x -= MoveSpeed * 6;
						y -= 2;
					}
					else
					{
						x += MoveSpeed * 6;
						y -= 2;
					}

					if (player_1.ReturnPlayerY() >= y)
					{
						x -= 2;
						y -= 10;
					}
					else
					{
						y += 10;
						x -= 2;
					}
				}

			}
			if (Myabs(PlayerEnemyXD) < Myabs(PEheartDistanceX) && Myabs(PlayerEnemyYD) < Myabs(PEheartDistanceY))
			{
				//peng
				if (sign % 200 == 0)
				{
					putimage(x - EnemyWidth, y, &slm_attack_1, SRCPAINT);
					putimage(x - EnemyWidth, y, &slm_attack_2, SRCAND);
					Sleep(5);
					player_1.PlayerHpChange(Aggressivity);//player hp decipline					
				}

				if (Timer(10, 4))
				{
					if (GetAsyncKeyState(VK_SPACE))
					{
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);
						EnemyHpChange(player_1.ReturnPlayerAttack());
						if (player_1.ReturnPlayerX() >= x)
						{
							x -= 5;

						}
						else
						{
							x += 5;

						}
						if (player_2.ReturnPlayerY() >= y)
						{

							y -= 5;
						}
						else
						{
							y += 5;
						}
					}
				}

			}
		}
		else if (playerIndex == 2)
		{
			{
				if (flag == 1)
				{

					if (!((x <= Obstacle1_RightLimit - LINEDISTANCE && x >= Obstacle1_LeftLimit - LINEDISTANCE * 3
						&& y <= Obstacle1_UpperLimit - LINEDISTANCE && y >= Obstacle1_BelowLimit - LINEDISTANCE * 3) ||
						(x <= Obstacle2_RightLimit - LINEDISTANCE && x >= Obstacle2_LeftLimit - LINEDISTANCE * 3
							&& y <= Obstacle2_UpperLimit - LINEDISTANCE && y >= Obstacle2_BelowLimit - LINEDISTANCE * 3) ||
						(x <= Obstacle3_RightLimit - LINEDISTANCE && x >= Obstacle3_LeftLimit - LINEDISTANCE * 3
							&& y <= Obstacle3_UpperLimit - LINEDISTANCE && y >= Obstacle3_BelowLimit - LINEDISTANCE * 3) ||
						(x <= Obstacle4_RightLimit - LINEDISTANCE && x >= Obstacle4_LeftLimit - LINEDISTANCE * 3
							&& y <= Obstacle4_UpperLimit - LINEDISTANCE && y >= Obstacle4_BelowLimit - LINEDISTANCE * 3) ||
						(x <= Obstacle5_RightLimit - LINEDISTANCE && x >= Obstacle5_LeftLimit - LINEDISTANCE * 3
							&& y <= Obstacle5_UpperLimit - LINEDISTANCE && y >= Obstacle5_BelowLimit - LINEDISTANCE * 3) ||
						(x <= Obstacle6_RightLimit - LINEDISTANCE && x >= Obstacle6_LeftLimit - LINEDISTANCE * 3
							&& y <= Obstacle6_UpperLimit - LINEDISTANCE && y >= Obstacle6_BelowLimit - LINEDISTANCE * 3)))
					{

						if (player_2.ReturnPlayerX() > x)
						{
							x += MoveSpeed;


						}
						else if (player_2.ReturnPlayerX() < x)
						{
							x -= MoveSpeed;


						}
						else;


						if (player_2.ReturnPlayerY() > y)
						{
							y += MoveSpeed;


						}
						else if (player_2.ReturnPlayerY() < y)
						{
							y -= MoveSpeed;

						}
						else;



					}

					else {

						if (player_2.ReturnPlayerX() >= x)
						{
							x -= MoveSpeed * 6;
							y -= 2;

						}
						else
						{
							x += MoveSpeed * 6;
							y -= 2;

						}

						if (player_2.ReturnPlayerY() >= y)
						{

							x -= 2;
						}
						else
						{

							x -= 2;
						}
					}

				}
				//近攻
				if (Myabs(Player2EnemyXD) < Myabs(PEheartDistanceX) && Myabs(Player2EnemyYD) < Myabs(PEheartDistanceY))
				{
					//peng
					if (sign % 200 == 0)
					{
						putimage(x - EnemyWidth, y, &slm_attack_1, SRCPAINT);
						putimage(x - EnemyWidth, y, &slm_attack_2, SRCAND);
						Sleep(5);
						player_2.PlayerHpChange(Aggressivity);//player hp decipline					
					}

					if (Timer(10, 4))
					{
						if (GetAsyncKeyState(VK_SPACE))
						{
							putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
							putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);
							EnemyHpChange(player_2.ReturnPlayerAttack());
							if (player_2.ReturnPlayerX() >= x)
							{
								x -= 5;

							}
							else
							{
								x += 5;

							}
							if (player_2.ReturnPlayerY() >= y)
							{

								y -= 5;
							}
							else
							{
								y += 5;
							}
						}
					}

				}

				//远攻

			}
		}


	}

};

class Enemy_Green :public Enemy {
	friend class Player;
	friend class Player_Goddness;
	friend class Player_Knight;
private:
	int dx;
	int dy;
	int getGreenxy;
	int Aggressivity_Green;
	struct Buffer buffer[200];
	int BufferLiveNum;
public:
	Enemy_Green() :Enemy()
	{
		dx = EnemyMoveSpeed;
		dy = EnemyMoveSpeed * 2;
		getGreenxy = 0;
		Aggressivity_Green = 5 * EnemyAggressivity;
		for (int i = 0; i < 200; i++)
		{

			buffer[i].bv = 1;
			buffer[i].bx = 0;
			buffer[i].by = 0;
			buffer[i].endx = 0;
			buffer[i].endy = 0;
			buffer[i].borigion = 0;
		}
		BufferLiveNum = 0;
	}

	//子弹相关设置
	void PlusLiveBufferNum()
	{
		BufferLiveNum++;
	}
	int ReturnBufferLiveNum()
	{
		return BufferLiveNum;
	}
	void ability()
	{

		for (int k = 0; k < BufferLiveNum; k++)
		{
			if (buffer[k].borigion == 0)
			{
				buffer[k].bx = x;
				buffer[k].by = y;
				buffer[k].bv = 1;
				if (playerIndex == 1)
				{
					buffer[k].endx = player_1.ReturnPlayerX();
					buffer[k].endy = player_1.ReturnPlayerY();
				}
				else if (playerIndex == 2) {
					buffer[k].endx = player_2.ReturnPlayerX();
					buffer[k].endy = player_2.ReturnPlayerY();
				}
				if (buffer[k].bx <= buffer[k].endx && buffer[k].by <= buffer[k].endy) buffer[k].bv = 0;
				else if (buffer[k].bx > buffer[k].endx && buffer[k].by > buffer[k].endy) buffer[k].bv = 1;
				else if (buffer[k].bx <= buffer[k].endx && buffer[k].by > buffer[k].endy) buffer[k].bv = 2;
				else if (buffer[k].bx > buffer[k].endx && buffer[k].by <= buffer[k].endy) buffer[k].bv = 3;



				buffer[k].borigion = 1;// live
			}

			else {

				if (buffer[k].borigion != 2)
				{
					putimage(buffer[k].bx, buffer[k].by, &ball_1, SRCPAINT);
					putimage(buffer[k].bx, buffer[k].by, &ball_2, SRCAND);
					if (buffer[k].bx >= WIDTH || buffer[k].bx <= 0 || buffer[k].by >= HEIGHT || buffer[k].by <= 0)
					{
						buffer[k].borigion = 2;
						if (BufferLiveNum > 0) BufferLiveNum--;
					}
					if (playerIndex == 1)
					{

						if (Myabs(buffer[k].bx - player_1.ReturnPlayerX()) <= LINEDISTANCE &&
							Myabs(buffer[k].by - player_1.ReturnPlayerY()) <= LINEDISTANCE)
						{
							buffer[k].borigion = 2;
							if (BufferLiveNum > 0) BufferLiveNum--;
							player_1.PlayerHpChange(Aggressivity_Green);//player hp decipline	
						}
					}
					else if (playerIndex == 2)
					{

						if (Myabs(buffer[k].bx - player_2.ReturnPlayerX()) <= LINEDISTANCE &&
							Myabs(buffer[k].by - player_2.ReturnPlayerY()) <= LINEDISTANCE)
						{
							buffer[k].borigion = 2;
							if (BufferLiveNum > 0) BufferLiveNum--;
							player_2.PlayerHpChange(Aggressivity_Green);//player hp decipline	

						}
					}
				}
				else;

				if (buffer[k].bv == 0)
				{
					buffer[k].bx += 1;
					buffer[k].by += 1;
				}
				else if (buffer[k].bv == 1)
				{
					buffer[k].bx -= 1;
					buffer[k].by -= 1;
				}
				else if (buffer[k].bv == 2)
				{
					buffer[k].bx += 1;
					buffer[k].by -= 1;
				}
				else if (buffer[k].bv == 3)
				{
					buffer[k].bx -= 1;
					buffer[k].by += 1;
				}



			}
		}
	}
	void EnemyPosition()
	{
		if (playerIndex == 1)
		{
			if (flag == 1)
			{



				if (x + MoveSpeed >= Obstacle1_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle1_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
					x + MoveSpeed >= Obstacle2_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle2_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
					x + MoveSpeed >= Obstacle3_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle3_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
					x + MoveSpeed >= Obstacle4_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle4_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
					x + MoveSpeed >= Obstacle5_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle5_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
					x + MoveSpeed >= Obstacle6_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle6_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE

					)
				{
					dx = -dx;
				}
				if (x - MoveSpeed >= Obstacle1_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle1_RightLimit - 2 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
					x - MoveSpeed >= Obstacle2_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle2_RightLimit - 2 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
					x - MoveSpeed >= Obstacle3_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle3_RightLimit - 2 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
					x - MoveSpeed >= Obstacle4_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle4_RightLimit - 2 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
					x - MoveSpeed >= Obstacle5_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle5_RightLimit - 2 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
					x - MoveSpeed >= Obstacle6_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle6_RightLimit - 2 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE
					)
				{
					dx = -dx;
				}
				if (y + MoveSpeed >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle1_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
					y + MoveSpeed >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle2_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
					y + MoveSpeed >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle3_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
					y + MoveSpeed >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle4_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
					y + MoveSpeed >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle5_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
					y + MoveSpeed >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle6_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
					)
				{
					dy = -dy;
				}
				if (y - MoveSpeed >= Obstacle1_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle1_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
					y - MoveSpeed >= Obstacle2_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle2_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
					y - MoveSpeed >= Obstacle3_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle3_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
					y - MoveSpeed >= Obstacle4_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle4_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
					y - MoveSpeed >= Obstacle5_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle5_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
					y - MoveSpeed >= Obstacle6_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle6_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
					)
				{
					dy = -dy;
				}


				if (x + EnemyWidth / 2 >= WIDTH || x - EnemyWidth / 2 <= 0) dx = -dx;
				if (y + EnemyHeight / 2 >= HEIGHT || y - EnemyHeight / 2 <= 0) dy = -dy;

				x += dx;
				y += dy;



			}

			//近攻

			if (Myabs(PlayerEnemyXD) < Myabs(PEheartDistanceX) && Myabs(PlayerEnemyYD) < Myabs(PEheartDistanceY))
			{
				if (Timer(10, 6))
				{
					if (GetAsyncKeyState(VK_SPACE))
					{
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);

						EnemyHpChange(player_1.ReturnPlayerAttack());
						if (player_1.ReturnPlayerX() >= x)
						{
							x -= 5;

						}
						else
						{
							x += 5;

						}

						if (player_1.ReturnPlayerY() >= y)
						{

							y -= 5;
						}
						else
						{
							y += 5;
						}
					}
				}
			}
			//远攻

		}
		else if (playerIndex == 2)
		{

			{
				if (flag == 1)
				{



					if (x + MoveSpeed >= Obstacle1_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle1_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
						x + MoveSpeed >= Obstacle2_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle2_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
						x + MoveSpeed >= Obstacle3_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle3_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
						x + MoveSpeed >= Obstacle4_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle4_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
						x + MoveSpeed >= Obstacle5_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle5_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
						x + MoveSpeed >= Obstacle6_LeftLimit - 4 * LINEDISTANCE && x + MoveSpeed <= Obstacle6_LeftLimit - 3 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE

						)
					{
						dx = -dx;
					}
					if (x - MoveSpeed >= Obstacle1_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle1_RightLimit - 2 * LINEDISTANCE && y >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle1_UpperLimit - 2 * LINEDISTANCE ||
						x - MoveSpeed >= Obstacle2_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle2_RightLimit - 2 * LINEDISTANCE && y >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle2_UpperLimit - 2 * LINEDISTANCE ||
						x - MoveSpeed >= Obstacle3_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle3_RightLimit - 2 * LINEDISTANCE && y >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle3_UpperLimit - 2 * LINEDISTANCE ||
						x - MoveSpeed >= Obstacle4_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle4_RightLimit - 2 * LINEDISTANCE && y >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle4_UpperLimit - 2 * LINEDISTANCE ||
						x - MoveSpeed >= Obstacle5_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle5_RightLimit - 2 * LINEDISTANCE && y >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle5_UpperLimit - 2 * LINEDISTANCE ||
						x - MoveSpeed >= Obstacle6_RightLimit - 3 * LINEDISTANCE && x - MoveSpeed <= Obstacle6_RightLimit - 2 * LINEDISTANCE && y >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y <= Obstacle6_UpperLimit - 2 * LINEDISTANCE
						)
					{
						dx = -dx;
					}
					if (y + MoveSpeed >= Obstacle1_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle1_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
						y + MoveSpeed >= Obstacle2_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle2_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
						y + MoveSpeed >= Obstacle3_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle3_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
						y + MoveSpeed >= Obstacle4_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle4_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
						y + MoveSpeed >= Obstacle5_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle5_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
						y + MoveSpeed >= Obstacle6_BelowLimit - 4 * LINEDISTANCE && y + MoveSpeed <= Obstacle6_BelowLimit - 3 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
						)
					{
						dy = -dy;
					}
					if (y - MoveSpeed >= Obstacle1_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle1_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle1_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle1_RightLimit - 2 * LINEDISTANCE ||
						y - MoveSpeed >= Obstacle2_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle2_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle2_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle2_RightLimit - 2 * LINEDISTANCE ||
						y - MoveSpeed >= Obstacle3_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle3_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle3_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle3_RightLimit - 2 * LINEDISTANCE ||
						y - MoveSpeed >= Obstacle4_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle4_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle4_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle4_RightLimit - 2 * LINEDISTANCE ||
						y - MoveSpeed >= Obstacle5_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle5_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle5_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle5_RightLimit - 2 * LINEDISTANCE ||
						y - MoveSpeed >= Obstacle6_UpperLimit - 3 * LINEDISTANCE && y - MoveSpeed <= Obstacle6_UpperLimit - 2 * LINEDISTANCE && x >= Obstacle6_LeftLimit - 3 * LINEDISTANCE && x <= Obstacle6_RightLimit - 2 * LINEDISTANCE
						)
					{
						dy = -dy;
					}

					if (x + EnemyWidth / 2 >= WIDTH || x - EnemyWidth / 2 <= 0) dx = -dx;
					if (y + EnemyHeight / 2 >= HEIGHT || y - EnemyHeight / 2 <= 0) dy = -dy;

					x += dx;
					y += dy;

				}

				if (Myabs(Player2EnemyXD) < Myabs(PEheartDistanceX) && Myabs(Player2EnemyYD) < Myabs(PEheartDistanceY))
				{
					//peng
					if (Timer(10, 8))
					{
						if (GetAsyncKeyState(VK_SPACE))
						{
							putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
							putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);

							EnemyHpChange(player_2.ReturnPlayerAttack());
							if (player_2.ReturnPlayerX() >= x)
							{
								x -= 5;

							}
							else
							{
								x += 5;

							}

							if (player_2.ReturnPlayerY() >= y)
							{

								y -= 5;
							}
							else
							{
								y += 5;
							}
						}
					}

				}
				//远攻


			}
		}

	}

	//设置
	void SetEnemyDx()
	{
		dx = EnemyMoveSpeed;
	}
	void SetEnemyDy()
	{
		dy = EnemyMoveSpeed * 2;
	}
	void SetgetGreenxy()
	{
		getGreenxy = 0;
	}
	void SetAttack()
	{
		Aggressivity_Green = 5 * EnemyAggressivity;
	}
	void SetBuffer()
	{
		for (int i = 0; i < 200; i++)
		{
			buffer[i].bv = 1;
			buffer[i].bx = 0;
			buffer[i].by = 0;
			buffer[i].endx = 0;
			buffer[i].endy = 0;
			buffer[i].borigion = 0;
		}
		BufferLiveNum = 0;
	}

};
//boss
class Enemy_Boss :public Enemy {
	friend class Player;
	friend class Player_Goddness;
	friend class Player_Knight;
private:
	int BossMoveSpeed;
	int BossAggressivity;
	int BossHp;
	int bossx;
	int bossy;
	int BossAttackDistance;
	struct Buffer buffer[400];
	int BufferLiveNum;

public:
	int Bossflag;
	Enemy_Boss() :Enemy()
	{
		BossMoveSpeed = BossEnemyMoveSpeed;
		BossAggressivity = BossEnemyAggressivity;
		BossHp = BossEnemyHP;
		bossx = WIDTH / 2 - LINEDISTANCE * 2;
		bossy = HEIGHT / 2 - LINEDISTANCE * 2;
		BossAttackDistance = BossEnemyAttackDistance;
		Bossflag = 1;
		for (int i = 0; i < 400; i++)
		{
			buffer[i].bv = 1;
			buffer[i].bx = bossx;
			buffer[i].by = bossy;
			buffer[i].endx = 1;
			buffer[i].endy = 1;
			buffer[i].borigion = 0;
		}
		BufferLiveNum = 0;
	}

	void BossHPchange(int attack)
	{
		if (BossHp - attack > 0) BossHp -= attack;
		else
		{
			DieEnemy += 10;
			Bossflag = 0;//die
			if (playerIndex == 1) player_1.PlayerXpPlus();
			else if (playerIndex == 2) player_2.PlayerXpPlus();
		}
	}
	void BossPosition()
	{
		if (Timer(50, 18))
		{
			if (GetAsyncKeyState(VK_SPACE))
			{
				if (playerIndex == 1)
				{

					if ((Myabs(PlayerBossXD) < Myabs(PEheartBossDistanceX)) && Myabs(PlayerBossYD) < Myabs(PEheartBossDistanceY))

					{
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
						putimage(player_1.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_1.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);
						BossHPchange(player_1.ReturnPlayerAttack());
					}


					Sleep(5);
				}
				else if (playerIndex == 2)
				{
					if ((Myabs(Player_2BossXD) < Myabs(PEheartBossDistanceX)) && Myabs(Player_2BossYD) < Myabs(PEheartBossDistanceY))

					{
						putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_1, SRCPAINT);
						putimage(player_2.ReturnPlayerX() - PlayerWidth / 2 - LINEDISTANCE / 2, player_2.ReturnPlayerY() - PlayerHeight / 2, &loop_2, SRCAND);
						BossHPchange(player_2.ReturnPlayerAttack());
					}
					//if (Myabs(Player_2BossXD) < Myabs(PEheartDistanceX_2p) && Myabs(Player_2BossYD) < Myabs(PEheartDistanceY_2p))
					   // {
					   //	 if (Timer(10, 4))
					   //	 {
					   //		 {
					   //			 player_2.PlusPlayerLiveBufferNum();
					   //			 Playerability_Boss();

					   //			 if (player_2.ReturnPlayerX() >= x)
					   //			 {
					   //				 x -= 4;

					   //			 }
					   //			 else
					   //			 {
					   //				 x += 4;

					   //			 }
					   //			 if (player_2.ReturnPlayerY() >= y)
					   //			 {

					   //				 y -= 4;
					   //			 }
					   //			 else
					   //			 {
					   //				 y += 4;
					   //			 }
					   //		 }
					   //	 }
					   // }
					Sleep(5);

				}



			}
		}
	}
	void PlusLiveBufferNum()
	{
		BufferLiveNum++;
	}

	//boss ability
	void Bossability()
	{
		for (int k = 0; k < BufferLiveNum; k++)
		{
			if (buffer[k].borigion == 0)
			{
				buffer[k].bx = bossx;
				buffer[k].by = bossy;
				buffer[k].bv = rand() % 4;//take it as a seed srand	
				buffer[k].endx = 1;
				buffer[k].endy = 1;
				buffer[k].borigion = 1;// live
			}
			else {

				if (buffer[k].borigion != 2)
				{
					putimage(buffer[k].bx, buffer[k].by, &ball_1, SRCPAINT);
					putimage(buffer[k].bx, buffer[k].by, &ball_3, SRCAND);
					//make a crash with the obstacle				

					if (buffer[k].bx + EnemyWidth / 4 >= WIDTH || buffer[k].bx - EnemyWidth / 4 <= 0)
					{
						buffer[k].endx = -buffer[k].endx;
					}

					if (buffer[k].by + EnemyWidth / 4 >= HEIGHT || buffer[k].by - EnemyWidth / 4 <= 0)
					{
						buffer[k].endy = -buffer[k].endy;
					}
					if (buffer[k].bv == 0) {
						buffer[k].bx += buffer[k].endx;
						buffer[k].by += buffer[k].endy;
					}
					else if (buffer[k].bv == 1)
					{
						buffer[k].bx -= buffer[k].endx;
						buffer[k].by += buffer[k].endy;
					}
					else if (buffer[k].bv == 2)
					{
						buffer[k].bx += buffer[k].endx;
						buffer[k].by -= buffer[k].endy;
					}
					else
					{
						buffer[k].bx -= buffer[k].endx;
						buffer[k].by -= buffer[k].endy;
					}

					if (playerIndex == 1)
					{
						if (Myabs(buffer[k].bx - player_1.ReturnPlayerX()) <= LINEDISTANCE &&
							Myabs(buffer[k].by - player_1.ReturnPlayerY()) <= LINEDISTANCE)
						{
							buffer[k].borigion = 2;
							if (BufferLiveNum > 0) BufferLiveNum--;
							player_1.PlayerHpChange(BossEnemyAggressivity);//player hp decipline	
						}
					}
					else if (playerIndex == 2)
					{
						if (Myabs(buffer[k].bx - player_2.ReturnPlayerX()) <= LINEDISTANCE &&
							Myabs(buffer[k].by - player_2.ReturnPlayerY()) <= LINEDISTANCE)
						{
							buffer[k].borigion = 2;
							if (BufferLiveNum > 0) BufferLiveNum--;
							player_2.PlayerHpChange(BossEnemyAggressivity);//player hp decipline	

						}
					}
				}
				else;
			}
		}
	}

	//返回boss的属性
	int ReturnBossBufferLiveNum()
	{
		return BufferLiveNum;
	}
	int ReturnBossHP()
	{
		return BossHp;
	}
	int ReturnBossX()
	{
		return bossx;
	}
	int ReturnBossY()
	{
		return bossy;
	}
	int ReturnBossFLAG()
	{
		return Bossflag;
	}

	//设置boss的属性
	void SetBossBuffer()
	{
		for (int i = 0; i < 400; i++)
		{
			buffer[i].bv = 1;
			buffer[i].bx = bossx;
			buffer[i].by = bossy;
			buffer[i].endx = 1;
			buffer[i].endy = 1;
			buffer[i].borigion = 0;
		}
		BufferLiveNum = 0;
	}
	void SetBossPosition()
	{
		bossx = WIDTH / 2 - LINEDISTANCE * 2;
		bossy = HEIGHT / 2 - LINEDISTANCE * 2;
	}
	void SetBossAggressivity(int attack)
	{
		BossAggressivity = attack;
	}
	void SetBossHP(int hp)
	{
		BossHp = hp;
	}
	void SetBossMoveSpeed(int move)
	{
		BossMoveSpeed = move;
	}
	void SetBossFlag()
	{
		Bossflag = 1;
	}
};

Enemy_Blue enemy_blue[EnemyNum];

Enemy_Green enemy_green[EnemyNum];

Enemy_Boss enemy_boss;

struct Weapon sweapon[10];
//角色2的技能
void Player_2ability()
{

	if (sign % 250 == 0)
	{
		player_2.PlusPlayerLiveBufferNum(4);
		countBuffer++;
	}
	if (countBuffer >= 1)
	{
		for (int k = 4 * (countBuffer - 1); k < 4 * countBuffer; k++)
		{

			if (player_2.buffer[k].borigion == 0)
			{

				player_2.buffer[k].bx = player_2.ReturnPlayerX();
				player_2.buffer[k].by = player_2.ReturnPlayerY();
				player_2.buffer[k].bv = 1;//take it as a seed srand	
				player_2.buffer[k].endx = 1;
				player_2.buffer[k].endy = rand() % 4;//代表方向随机数
				player_2.buffer[k].borigion = 1;// live

			}
		}
		if (player_2.ReturnPLayerBufferLiveNum() >= 350)
		{
			for (int i = 0; i < 350; i++)
			{
				player_2.buffer[i].borigion = 0;
			}
		}

		for (int k = 4 * (countBuffer - 1); k < 4 * countBuffer; k++) {

			if (player_2.buffer[k].borigion != 2)
			{
				putimage(player_2.buffer[k].bx, player_2.buffer[k].by, &snow_1, SRCPAINT);
				putimage(player_2.buffer[k].bx, player_2.buffer[k].by, &snow_2, SRCAND);

				if (drawboss == 1 && enemy_boss.ReturnBossFLAG() == 1)
				{
					if (Myabs(player_2.buffer[k].bx - enemy_boss.ReturnBossX()) <= LINEDISTANCE * 2 &&
						Myabs(player_2.buffer[k].by - enemy_boss.ReturnBossY()) <= LINEDISTANCE * 2)
					{

						player_2.buffer[k].borigion = 2;
						if (player_2.ReturnPLayerBufferLiveNum() > 0) player_2.DecreasePlayerLiveBufferNum();
						enemy_boss.BossHPchange(Player_2BufferAttack);//player hp decipline	
					}
				}

				if (k % 4 == 0) {
					player_2.buffer[k].bx += 1;
					player_2.buffer[k].by += 1;

				}
				else if (k % 4 == 1) {
					player_2.buffer[k].bx -= 1;
					player_2.buffer[k].by += 1;

				}
				else if (k % 4 == 2) {
					player_2.buffer[k].bx += 1;
					player_2.buffer[k].by -= 1;

				}
				else if (k % 4 == 3)
				{
					player_2.buffer[k].bx -= 1;
					player_2.buffer[k].by -= 1;

				}

				for (int i = 0; i < tap; i++)
				{

					if (Myabs(player_2.buffer[k].bx - enemy_blue[i].ReturnEnemyX()) <= LINEDISTANCE * 2 &&
						Myabs(player_2.buffer[k].by - enemy_blue[i].ReturnEnemyY()) <= LINEDISTANCE * 2 && enemy_blue[i].flag == 1)
					{
						player_2.buffer[k].borigion = 2;

						if (player_2.ReturnPLayerBufferLiveNum() > 0) player_2.DecreasePlayerLiveBufferNum();

						enemy_blue[i].EnemyHpChange(Player_2BufferAttack);//player hp decipline	

						if (player_2.ReturnPlayerX() >= enemy_blue[i].ReturnEnemyX())
						{
							enemy_blue[i].EnemyXChange(-6);

						}
						else
						{
							enemy_blue[i].EnemyXChange(6);


						}
						if (player_2.ReturnPlayerY() >= enemy_blue[i].ReturnEnemyY())
						{

							enemy_blue[i].EnemyYChange(-6);

						}
						else
						{
							enemy_blue[i].EnemyYChange(6);

						}
						break;
					}

					else;
				}


				for (int i = 0; i < tap_1; i++)
				{
					if (Myabs(player_2.buffer[k].bx - enemy_green[i].ReturnEnemyX()) <= LINEDISTANCE * 2 &&
						Myabs(player_2.buffer[k].by - enemy_green[i].ReturnEnemyY()) <= LINEDISTANCE * 2 && enemy_green[i].flag == 1)
					{
						player_2.buffer[k].borigion = 2;

						if (player_2.ReturnPLayerBufferLiveNum() > 0) player_2.DecreasePlayerLiveBufferNum();

						enemy_green[i].EnemyHpChange(Player_2BufferAttack);//player hp decipline	

						if (player_2.ReturnPlayerX() >= enemy_green[i].ReturnEnemyX())
						{
							enemy_green[i].EnemyXChange(-6);

						}
						else
						{
							enemy_green[i].EnemyXChange(6);


						}
						if (player_2.ReturnPlayerY() >= enemy_green[i].ReturnEnemyY())
						{

							enemy_green[i].EnemyYChange(-6);

						}
						else
						{
							enemy_green[i].EnemyYChange(6);

						}
						break;
					}

					else;
				}

			}

		}
	}


}
//存档系统
void FileSaveSystem()
{
	FILE* fp = fopen("./res/fileSystem.txt", "w");
	if (fp == nullptr)
	{
		return;
	}
	fputs("playerIndex:", fp);
	fputc('\n', fp);
	fprintf(fp, "%d", playerIndex);

	fputc('\n', fp);
	if (playerIndex == 1)
	{

		fprintf(fp, "HP: %f XP: %d Aggressivity: %d MoveSpeed: %d x: %d y: %d level: %d WeaponNum: %d MoneyNum: %d SoulNum: %d HpBottleNum: %d ShenLimit: %d MoLimit: %d DragonLimit: %d HammerLimit: %d Survive: %d hpnumber: %d", player_1.ReturnPlayerHP(), player_1.ReturnPlayerXp(), player_1.ReturnPlayerAttack(), player_1.ReturnPlayerSpeed(), player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), player_1.ReturnPlayerLevel(), player_1.ReturnPlayerWeaponNum(), player_1.ReturnMoneyNum(), player_1.ReturnSoulNum(), player_1.ReturnPlayerHpBottleNum(), shenLimit, moLimit, dragonLimit, hammerLimit, player_1.ReturnPlayerSurvive(), player_1.ReturnPlayerhpnumber());
	}

	else if (playerIndex == 2)
	{
		fprintf(fp, "HP: %f XP: %d Aggressivity: %d MoveSpeed: %d x: %d y: %d level: %d WeaponNum: %d MoneyNum: %d SoulNum: %d HpBottleNum: %d ShenLimit: %d MoLimit: %d DragonLimit: %d HammerLimit: %d Survive: %d hpnumber: %d", player_2.ReturnPlayerHP(), player_2.ReturnPlayerXp(), player_2.ReturnPlayerAttack(), player_2.ReturnPlayerSpeed(), player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), player_2.ReturnPlayerLevel(), player_2.ReturnPlayerWeaponNum(), player_2.ReturnMoneyNum(), player_2.ReturnSoulNum(), player_2.ReturnPlayerHpBottleNum(), shenLimit, moLimit, dragonLimit, hammerLimit, player_2.ReturnPlayerSurvive(), player_2.ReturnPlayerhpnumber());

	}
	fclose(fp);
	fp = nullptr;
	return;
}
//读档系统
int FileReadSystem() {


	FILE* fp = fopen("./res/fileSystem.txt", "r");
	if (fp == nullptr)
	{
		return 0;
	}
	int i, j;
	fgets(aindex, sizeof(aindex), fp);

	i = fscanf(fp, "%d", &whatplayer);
	if (i == EOF)return 0;
	if (whatplayer == 0) return 0;
	j = fscanf(fp, "%s %lf %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d %s %d", ahp, &sHP, axp, &sXP, aattack, &sAggressivity, amove, &sMoveSpeed, ax, &sx, ay, &sy, alevel, &slevel, aweapon, &sWeaponNum, amoney, &sMoneyNum, asoul, &sSoulNum, abottle, &sHpBottleNum, shenL, &shenLimit, moL, &moLimit, dragonL, &dragonLimit, hammerL, &hammerLimit, SurvivE, &survivE, Hpnum, &hpnumber);

	playerIndex = whatplayer;
	if (j == EOF) return 0;
	//时间怎么办！！！！
	if (playerIndex == 0) return 0;
	if (playerIndex == 1)
	{
		player_1.SetPlayerHP(sHP);
		player_1.SetPlayerXP(sXP);
		player_1.SetPlayerLevel(slevel);
		player_1.SetPlayerMoveSpeed(sMoveSpeed);
		player_1.SetPlayerPosition(sx, sy);
		player_1.SetPlayerAggressivity(sAggressivity);
		player_1.SetPlayerHpBottleNum(sHpBottleNum);
		player_1.SetPlayerMoneyNum(sMoneyNum);
		player_1.SetPlayerSoulNum(sSoulNum);
		player_1.SetPlayerWeaponNum(sWeaponNum);
		player_1.SetPlayerSurvive(survivE);
		player_1.SetPlayerhpnumber(hpnumber);
	}
	else if (playerIndex == 2)
	{
		player_2.SetPlayerHP(sHP);
		player_2.SetPlayerXP(sXP);
		player_2.SetPlayerLevel(slevel);
		player_2.SetPlayerMoveSpeed(sMoveSpeed);
		player_2.SetPlayerPosition(sx, sy);
		player_2.SetPlayerAggressivity(sAggressivity);
		player_2.SetPlayerHpBottleNum(sHpBottleNum);
		player_2.SetPlayerMoneyNum(sMoneyNum);
		player_2.SetPlayerSoulNum(sSoulNum);
		player_2.SetPlayerWeaponNum(sWeaponNum);
		player_2.SetPlayerSurvive(survivE);
		player_2.SetPlayerhpnumber(hpnumber);
	}
	fclose(fp);
	fp = nullptr;
	IfGetTheFile = 1;
	return 1;
}
//加载背景
void SetBackground()
{
	loadimage(&img_background, "./res/grass_1.jpg", WIDTH, HEIGHT);
	loadimage(&img_grass, "./res/grass.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&Allgrass, "./res/Allgrass.jpg");

	loadimage(&star, "./res/star.jpg", WIDTH, HEIGHT);
	loadimage(&MAllstar, "./res/MAllstar.jpg");


	loadimage(&mountion, "./res/bg.jpg", WIDTH, HEIGHT);
	loadimage(&Allmountion, "./res/Allbg.jpg");

	loadimage(&star_1, "./res/star_2.jpg", 350, 300);
	loadimage(&star_2, "./res/star_1.jpg", 350, 300);

	loadimage(&mountion_1, "./res/bg.jpg", 350, 300);
	loadimage(&mountion_2, "./res/bg_1.jpg", 350, 300);
	loadimage(&gameover, "./res/gameover.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&victory, "./res/victory.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);

}
//画线
void DrawLine()
{
	//also can use RGB like setlinecolor(RGB(255,0,0));
	setlinecolor(LIGHTGRAY);

	for (int i = 0; i < WIDTH; i += LINEDISTANCE)
	{
		line(0, i, WIDTH, i);
		line(i, 0, i, HEIGHT);
	}
}
//画障碍物范围
void DrawObstacleRange()
{
	setfillcolor(LIGHTBLUE);

	solidrectangle(Obstacle1_LeftLimit, Obstacle1_BelowLimit, Obstacle1_RightLimit, Obstacle1_UpperLimit);
	solidrectangle(Obstacle2_LeftLimit, Obstacle2_BelowLimit, Obstacle2_RightLimit, Obstacle2_UpperLimit);
	solidrectangle(Obstacle3_LeftLimit, Obstacle3_BelowLimit, Obstacle3_RightLimit, Obstacle3_UpperLimit);
	solidrectangle(Obstacle4_LeftLimit, Obstacle4_BelowLimit, Obstacle4_RightLimit, Obstacle4_UpperLimit);
	solidrectangle(Obstacle5_LeftLimit, Obstacle5_BelowLimit, Obstacle5_RightLimit, Obstacle5_UpperLimit);
	solidrectangle(Obstacle6_LeftLimit, Obstacle6_BelowLimit, Obstacle6_RightLimit, Obstacle6_UpperLimit);
}
//加载障碍物
void DrawObstacle()
{
	loadimage(&img_obstacle_1, "./res/R-C_1.jpg", ObstacleWidth, ObstacleHeight);
	loadimage(&img_obstacle_2, "./res/R-C_2.jpg", ObstacleWidth, ObstacleHeight);
}
//加载攻击界面图片
void DrawGameCursor()
{
	loadimage(&bag_1, "./res/bag_1.jpg", 100, 100);
	loadimage(&bag_2, "./res/bag_2.jpg", 100, 100);
	loadimage(&bag_3, "./res/bag_3.jpg", 100, 100);

	loadimage(&medicineHP_1, "./res/medicineHP_1.jpg", 100, 100);
	loadimage(&medicineHP_2, "./res/medicineHP_2.jpg", 100, 100);
	loadimage(&medicineHP_3, "./res/medicineHP_3.jpg", 100, 100);

	loadimage(&book_1, "./res/book_1.jpg", 100, 100);
	loadimage(&book_2, "./res/book_2.jpg", 100, 100);
	loadimage(&book_3, "./res/book_3.jpg", 100, 100);

	loadimage(&abilityUI, "./res/Abi.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);

	loadimage(&medicinePP_1, "./res/medicinePP_1.jpg", 100, 100);
	loadimage(&medicinePP_2, "./res/medicinePP_2.jpg", 100, 100);

	loadimage(&board_1, "./res/board_1.jpg", 50, 50);
	loadimage(&board_2, "./res/board_2.jpg", 50, 50);
	loadimage(&board_3, "./res/board_3.jpg", 50, 50);
	loadimage(&board_4, "./res/board_4.jpg", 50, 50);

	loadimage(&MagicCircle_Y, "./res/MagicCircle_Y.jpg", HEIGHT, HEIGHT);
	loadimage(&BlackSpace_1, "./res/BlackSpace_1.jpg", 200, 200);
	loadimage(&BlackSpace_2, "./res/BlackSpace_2.jpg", 200, 200);

	loadimage(&return_21, "./res/return_21.jpg", 100, 100);
	loadimage(&return_22, "./res/return_22.jpg", 100, 100);
	loadimage(&return_23, "./res/return_23.jpg", 100, 100);

	loadimage(&returnPlay_1, "./res/returnPlay_1.jpg", 100, 100);
	loadimage(&returnPlay_2, "./res/returnPlay_2.jpg", 100, 100);
	loadimage(&returnPlay_3, "./res/returnPlay_3.jpg", 100, 100);


	loadimage(&save_1, "./res/save_1.jpg", 100, 100);
	loadimage(&save_2, "./res/save_2.jpg", 100, 100);
	loadimage(&save_3, "./res/save_3.jpg", 100, 100);

	loadimage(&question_1, "./res/question_1.jpg", 100, 100);
	loadimage(&question_2, "./res/question_2.jpg", 100, 100);
	loadimage(&question_3, "./res/question_3.jpg", 100, 100);

	loadimage(&TaiJi_1, "./res/TaiJi_1.jpg", 100, 100);
	loadimage(&TaiJi_2, "./res/TaiJi_2.jpg", 100, 100);
	loadimage(&TaiJi_3, "./res/TaiJi_3.jpg", 100, 100);
	loadimage(&TaiJi_4, "./res/TaiJi_4.jpg", 100, 100);
	loadimage(&TaiJi_5, "./res/TaiJi_5.jpg", 100, 100);

	//strengthen screen
	loadimage(&box_1, "./res/box_1.jpg", 200, 200);
	loadimage(&box_2, "./res/box_2.jpg", 200, 200);
	loadimage(&box_31, "./res/box_31.jpg", 430, 100);
	loadimage(&box_32, "./res/box_32.jpg", 430, 100);
	loadimage(&Strengthen, "./res/Strengthen.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);

	loadimage(&sun, "./res/sun.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&knight, "./res/knight.jpg", 260, 340);
	loadimage(&elf, "./res/elf.jpg", 260, 340);
	loadimage(&disorigion, "./res/disorigion.jpg", 260, 340);

	loadimage(&knight_1, "./res/knight_1.jpg", 260, 340);
	loadimage(&elf_1, "./res/elf_1.jpg", 260, 340);
	loadimage(&disorigion_1, "./res/disorigion_1.jpg", 260, 340);

	loadimage(&shop_1, "./res/shop_1.jpg", 100, 100);
	loadimage(&shop_2, "./res/shop_2.jpg", 100, 100);
	loadimage(&shop_3, "./res/shop_3.jpg", 100, 100);

	loadimage(&menu_1, "./res/menu_1.jpg", 200, 220);
	loadimage(&menu_2, "./res/menu_2.jpg", 200, 220);
	loadimage(&menu_3, "./res/menu_3.jpg", 200, 220);

	loadimage(&menun, "./res/menu.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&scr, "./res/screen.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);

	loadimage(&Dragonshop, "./res/Dragonshop.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&shenSword, "./res/shenSword.jpg", 32, 160);//1:5      1.6:8
	loadimage(&moSword, "./res/moSword.jpg", 100, 160);//5:8    5:8
	loadimage(&dragonknife, "./res/dragonknife.jpg", 160, 160);//1:1    8:8
	loadimage(&hammer, "./res/hammer.jpg", 240, 160);//6:4     12:8

	loadimage(&pause_1, "./res/pause_1.jpg", 50, 50);
	loadimage(&pause_2, "./res/pause_2.jpg", 50, 50);
	loadimage(&pause_3, "./res/pause_3.jpg", 50, 50);

	loadimage(&Pause, "./res/PauseForOperator.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);

	loadimage(&money_1, "./res/money_1.jpg", EnemyWidth / 2, (EnemyHeight + LINEDISTANCE) / 2);
	loadimage(&money_2, "./res/money_2.jpg", EnemyWidth / 2, (EnemyHeight + LINEDISTANCE) / 2);

}
//加载敌人
void DrawEnemy()
{
	loadimage(&boss_1, "./res/boss_1.jpg", EnemyWidth, EnemyHeight * 2);
	loadimage(&boss_2, "./res/boss_2.jpg", EnemyWidth, EnemyHeight * 2);
	loadimage(&boss_3, "./res/boss_3.jpg", EnemyWidth, EnemyHeight * 2);

	loadimage(&boss_0, "./res/boss_0.jpg", 140, 200);
	loadimage(&boss_5, "./res/boss_5.jpg", 220, 135);
	loadimage(&gslm_0, "./res/gslm_0.jpg", 220, 135);
	loadimage(&bslm_0, "./res/bslm_0.jpg", 220, 135);

	loadimage(&img_enemy_b_1, "./res/slm_1.jpg", EnemyWidth, EnemyHeight);
	loadimage(&img_enemy_b_2, "./res/slm_2.jpg", EnemyWidth, EnemyHeight);

	loadimage(&img_enemy_g_1, "./res/greenslm_1.jpg", EnemyWidth, EnemyHeight);
	loadimage(&img_enemy_g_2, "./res/greenslm_2.jpg", EnemyWidth, EnemyHeight);

	loadimage(&ball_1, "./res/ball_1.jpg", EnemyWidth / 2, EnemyWidth / 2);
	loadimage(&ball_2, "./res/ball_2.jpg", EnemyWidth / 2, EnemyWidth / 2);
	loadimage(&ball_3, "./res/ball_3.jpg", EnemyWidth / 2, EnemyWidth / 2);

	loadimage(&slm_attack_1, "./res/slm_attack_1.jpg", EnemyWidth * 2, EnemyHeight * 2);
	loadimage(&slm_attack_2, "./res/slm_attack_2.jpg", EnemyWidth * 2, EnemyHeight * 2);

	loadimage(&soul_1, "./res/soul_1.jpg", EnemyWidth / 2, (EnemyHeight + LINEDISTANCE) / 2);
	loadimage(&soul_3, "./res/soul_3.jpg", EnemyWidth / 2, (EnemyHeight + LINEDISTANCE) / 2);


}
//加载英雄
void LoadMyhd()
{
	for (int i = 0; i <= 15; i++)//螺旋丸图
	{
		char name[80] = "";
		sprintf_s(name, "res/picture/Helix_attacky/Helix_attacky_r%d.gif", i + 1);
		loadimage(&Helix_attacky[0][i], name);
		sprintf_s(name, "res/picture/Helix_attack/Helix_attack_r%d.gif", i + 1);
		loadimage(&Helix_attack[0][i], name);
		sprintf_s(name, "res/picture/Helix_attacky/Helix_attacky_l%d.gif", i + 1);
		loadimage(&Helix_attacky[1][i], name);
		sprintf_s(name, "res/picture/Helix_attack/Helix_attack_l%d.gif", i + 1);
		loadimage(&Helix_attack[1][i], name);
	}

	loadimage(&img_hdleft_1, "./res/hdleft_1.jpg", PlayerWidth, PlayerHeight);
	loadimage(&img_hdleft_2, "./res/hdleft_2.jpg", PlayerWidth, PlayerHeight);

	loadimage(&img_hdright_1, "./res/hdright_1.jpg", PlayerWidth, PlayerHeight);
	loadimage(&img_hdright_2, "./res/hdright_2.jpg", PlayerWidth, PlayerHeight);

	loadimage(&goddness_1, "./res/goddness_1.jpg", PlayerWidth, PlayerHeight + LINEDISTANCE);
	loadimage(&goddness_2, "./res/goddness_22.jpg", PlayerWidth, PlayerHeight + LINEDISTANCE);

	loadimage(&goddnessleft_1, "./res/goddnessleft_1.jpg", PlayerWidth, PlayerHeight + LINEDISTANCE);
	loadimage(&goddnessleft_2, "./res/goddnessleft_22.jpg", PlayerWidth, PlayerHeight + LINEDISTANCE);

	loadimage(&dian_1, "./res/vecScwordl_1.jpg", 340, 140);
	loadimage(&dian_2, "./res/vecScwordl_2.jpg", 340, 140);

	loadimage(&snow_1, "./res/snow_1.jpg", 100, 100);
	loadimage(&snow_2, "./res/snow_2.jpg", 100, 100);

	loadimage(&level_1, "./res/level_1.jpg", PlayerWidth, LINEDISTANCE * 2);
	loadimage(&level_2, "./res/level_2.jpg", PlayerWidth, LINEDISTANCE * 2);

	loadimage(&sword_1, "./res/剑气斩_1.jpg", LINEDISTANCE * 4, LINEDISTANCE * 4);
	loadimage(&sword_2, "./res/剑气斩_2.jpg", LINEDISTANCE * 4, LINEDISTANCE * 4);
	loadimage(&Allsword_1, "./res/蓝色剑气left_1.jpg", LINEDISTANCE * 5, LINEDISTANCE * 5);
	loadimage(&purplesword_2, "./res/紫剑气left_2.jpg", LINEDISTANCE * 5, LINEDISTANCE * 5);

	loadimage(&loop_1, "./res/loop_1.jpg", LINEDISTANCE * 8, LINEDISTANCE * 8);
	loadimage(&loop_2, "./res/loop_2.jpg", LINEDISTANCE * 8, LINEDISTANCE * 8);
}
//音乐
void Music()
{
	mciSendString("open Children_of_the_Dark.mp3", 0, 0, 0);//media control interface

	if (play == 1) 	mciSendString("play Children_of_the_Dark.mp3 repeat", 0, 0, 0);//circle reply
	//mciSendString("pause Children_of_the_Dark.mp3", 0, 0, 0);

	else mciSendString("close Children_of_the_Dark.mp3", 0, 0, 0);

}
//输出人物状态
void PaintWord()
{
	settextcolor(BLACK);//设置文字颜色
	settextstyle(25, 0, "字魂24号-镇魂手书");//设置文字风格
	setbkmode(TRANSPARENT);

	outtextxy(910, 120, "HP:");//输出文字到某一个坐标
	outtextxy(910, 150, "XP:");//输出文字到某一个坐标
	outtextxy(910, 180, "AT:");//输出文字到某一个坐标
	outtextxy(910, 210, "MV:");//输出文字到某一个坐标
	outtextxy(910, 50, "Lv:");

	if (playerIndex == 1)
	{
		sprintf_s(hp, "%.lf", player_1.ReturnPlayerHP());
		outtextxy(950, 120, hp);

		sprintf_s(Sser, "%d", player_1.ReturnPlayerSurvive());
		outtextxy(980, 310, Sser);

		sprintf_s(xp, "%d", player_1.ReturnPlayerXp());
		outtextxy(950, 150, xp);

		sprintf_s(attack, "%d", player_1.ReturnPlayerAttack());
		outtextxy(950, 180, attack);

		sprintf_s(speed, "%d", player_1.ReturnPlayerSpeed());
		outtextxy(950, 210, speed);

		sprintf_s(money, "%d", player_1.ReturnMoneyNum());
		outtextxy(915, 390, money);

		sprintf_s(HpBottle, "%d", player_1.ReturnPlayerHpBottleNum());
		outtextxy(925, 310, HpBottle);

		sprintf_s(soul, "%d", player_1.ReturnSoulNum());
		outtextxy(980, 390, soul);

		sprintf_s(Level, "%d", player_1.ReturnPlayerLevel());
		outtextxy(950, 50, Level);


	}

	else if (playerIndex == 2)
	{
		{

			sprintf_s(hp, "%.lf", player_2.ReturnPlayerHP());
			outtextxy(950, 120, hp);

			sprintf_s(Sser, "%d", player_2.ReturnPlayerSurvive());
			outtextxy(980, 310, Sser);


			sprintf_s(xp, "%d", player_2.ReturnPlayerXp());
			outtextxy(950, 150, xp);

			sprintf_s(attack, "%d", player_2.ReturnPlayerAttack());
			outtextxy(950, 180, attack);

			sprintf_s(speed, "%d", player_2.ReturnPlayerSpeed());
			outtextxy(950, 210, speed);

			sprintf_s(money, "%d", player_2.ReturnMoneyNum());
			outtextxy(915, 390, money);

			sprintf_s(HpBottle, "%d", player_2.ReturnPlayerHpBottleNum());
			outtextxy(925, 310, HpBottle);

			sprintf_s(soul, "%d", player_2.ReturnSoulNum());
			outtextxy(980, 390, soul);

			sprintf_s(Level, "%d", player_2.ReturnPlayerLevel());
			outtextxy(950, 50, Level);
		}
	}


}

void PaintPicture();

void ChoosePlayer();

void StartUI();
//判断钱是否足够
int MoneyConsume(int gold)
{
	if (playerIndex == 1)
	{
		if (player_1.ReturnMoneyNum() - gold < 0)
		{
			MessageBox(GetHWnd(), "金币不足", "提示", MB_OK);
			return 0;
		}
		else {
			player_1.SetPlayerMoneyNum(player_1.ReturnMoneyNum() - gold);
		}
	}
	else if (playerIndex == 2)
	{
		if (player_2.ReturnMoneyNum() - gold < 0)
		{
			MessageBox(GetHWnd(), "金币不足", "提示", MB_OK);
			return 0;
		}
		player_2.SetPlayerMoneyNum(player_2.ReturnMoneyNum() - gold);
	}
	return 1;
}
//判断灵魂是否足够
int SoulConsume(int gas)
{
	if (playerIndex == 1)
	{
		if (player_1.ReturnSoulNum() - gas < 0)
		{
			MessageBox(GetHWnd(), "灵魂不足", "提示", MB_OK);
			return 0;
		}
		player_1.SetPlayerSoulNum(player_1.ReturnSoulNum() - gas);
	}
	else if (playerIndex == 2)
	{
		if (player_2.ReturnSoulNum() - gas < 0)
		{
			MessageBox(GetHWnd(), "灵魂不足", "提示", MB_OK);
			return 0;
		}
		player_2.SetPlayerSoulNum(player_2.ReturnSoulNum() - gas);
	}
	return 1;
}
//图鉴
void Book()
{
	int reindex = 0;
	setbkmode(TRANSPARENT);
	while (1)
	{
		BeginBatchDraw();
		putimage(0, 0, &scr);
		putimage(910, 0, &returnPlay_1, SRCPAINT);
		putimage(910, 0, &returnPlay_2, SRCAND);
		settextcolor(RED);
		settextstyle(50, 0, "楷体");
		outtextxy(0, 0, "怪物图鉴:");
		settextstyle(20, 0, "字魂24号-镇魂手书");
		settextcolor(BLACK);
		outtextxy(235, 80, "Name:水史莱姆");
		outtextxy(235, 120, "Intro:最初等的史莱姆之一，除了喜欢粘着人跑之外并没有别的爱好。");
		outtextxy(235, 160, "Ability:泡沫攻击(在阳光下会变成金色的泡沫，但伤害极低)");
		outtextxy(235, 230, "Name:草史莱姆");
		outtextxy(235, 270, "Intro:带有一定智慧的史莱姆，喜欢在草地上漫游");
		outtextxy(235, 310, "Ability:能量炮弹(用来专门打击发呆的事物，并造成一定的伤害)");
		outtextxy(235, 380, "Name:果冻史莱姆");
		outtextxy(235, 420, "Intro:稀有史莱姆，每次出门都会携带大量宝物，但脾气十分暴躁，最好不要轻易招惹");
		outtextxy(235, 460, "Ability:升级版能量炮弹(史莱姆生气了，后果很严重!!!)");
		putimage(10, 370, &boss_5);
		putimage(10, 70, &bslm_0);
		putimage(10, 220, &gslm_0);
		EndBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_LBUTTONDOWN && msg.x >= 910 + 10 && msg.x <= 1000 - 10 && msg.y >= 0 + 10 && msg.y <= 100 - 10)
			{

				//MouseMusic();
				reindex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && reindex == 1)
			{
				putimage(910, 0, &returnPlay_1, SRCPAINT);
				putimage(910, 0, &returnPlay_3, SRCAND);
				// and then go into the start	
				reindex = 0;
				Sleep(100);
				return;

			}
		}
	}
}
//商店
void Shop()
{
	int index = 0;
	int shenSwordIndex = 0, moSwordIndex = 0, dragonknifeIndex = 0, hammerIndex = 0;
	int TaiIndex_1 = 0, TaiIndex_2 = 0, TaiIndex_3 = 0, TaiIndex_4 = 0;
	while (1)
	{
		BeginBatchDraw();
		putimage(0, 0, &Dragonshop);
		putimage(100, 250, &shenSword);
		putimage(132 + 50, 250, &moSword);
		putimage(550, 250, &dragonknife);
		putimage(710 + 50, 250, &hammer);
		putimage(150, 50, &TaiJi_1, SRCPAINT);
		putimage(150, 50, &TaiJi_2, SRCAND);
		putimage(250, 150, &TaiJi_1, SRCPAINT);
		putimage(250, 150, &TaiJi_4, SRCAND);
		putimage(650, 150, &TaiJi_1, SRCPAINT);
		putimage(650, 150, &TaiJi_3, SRCAND);
		putimage(750, 50, &TaiJi_1, SRCPAINT);
		putimage(750, 50, &TaiJi_5, SRCAND);
		putimage(910, 0, &returnPlay_1, SRCPAINT);
		putimage(910, 0, &returnPlay_2, SRCAND);
		settextcolor(BLACK);
		settextstyle(40, 0, "字魂24号-镇魂手书");
		setbkmode(TRANSPARENT);
		outtextxy(80, 410, "神剑");
		outtextxy(80 + 50 + 32 + 30, 410, "魔剑");
		outtextxy(550 + 20, 410, "屠龙刀");
		outtextxy(710 + 50 + 32, 410, "雷神之锤");
		outtextxy(70, 450, " 50金");
		outtextxy(80 + 50 + 32 + 30, 450, "50金");
		outtextxy(550 + 20, 450, " 100金");
		outtextxy(710 + 50 + 32 + 20, 450, "150金");
		outtextxy(300, 0, "金币：");
		outtextxy(600, 0, "灵魂：");
		if (playerIndex == 1)
		{
			sprintf_s(money, "%d", player_1.ReturnMoneyNum());
			sprintf_s(soul, "%d", player_1.ReturnSoulNum());

		}
		else if (playerIndex == 2)
		{
			sprintf_s(money, "%d", player_2.ReturnMoneyNum());
			sprintf_s(soul, "%d", player_2.ReturnSoulNum());
		}
		outtextxy(400, 0, money);
		outtextxy(700, 0, soul);
		settextstyle(20, 0, "字魂24号-镇魂手书");
		outtextxy(250, 100, "(基础属性强化)");
		outtextxy(350, 200, "(武器强化)");
		outtextxy(750, 200, "(复活次数增加)");
		outtextxy(850, 100, "(金币产速增加)");
		FlushBatchDraw();
		EndBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_LBUTTONDOWN && msg.x >= 100 && msg.x <= 132 && msg.y >= 250 && msg.y <= 410)
			{
				//MouseMusic();
				shenSwordIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && shenSwordIndex == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费50金购买神剑(人物将获得永久初始血量翻倍)？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)		//打开是否确定购买界面（判断钱是否够）
				{
					if (shenLimit == 0)
					{
						shenLimit = 1;
						buy = MoneyConsume(50);
						if (buy == 1)
						{
							WeaponType = 1;
							if (playerIndex == 1) {
								player_1.ShopAddHP(800);
								player_1.PLayerWeaponUP();
								player_1.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功！", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();

							}
							else if (playerIndex == 2) {
								player_2.ShopAddHP(800);
								player_2.PLayerWeaponUP();
								player_2.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功！", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else {
								MessageBox(GetHWnd(), "购买失败！", "提示", MB_OK);

							}

						}
					}
					else {
						MessageBox(GetHWnd(), "你已经购买过此装备了!", "提示", MB_OK);

					}

				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断钱是否够）
				shenSwordIndex = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 132 + 50 && msg.x <= 132 + 50 + 100 && msg.y >= 250 && msg.y <= 410)
			{
				//MouseMusic();
				moSwordIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && moSwordIndex == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费50金购买魔剑(人物将获得永久初始攻击力翻倍)？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断钱是否够）
				{
					if (moLimit == 0)
					{
						moLimit = 1;
						buy = MoneyConsume(50);
						if (buy == 1)
						{
							WeaponType = 2;
							if (playerIndex == 1) {
								player_1.ShopAddAttack(PlayerAggressivity);
								player_1.PLayerWeaponUP();
								player_1.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else if (playerIndex == 2) {
								player_2.ShopAddAttack(PlayerAggressivity);
								player_2.PLayerWeaponUP();
								player_2.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else {
								MessageBox(GetHWnd(), "购买失败", "提示", MB_OK);

							}
						}
					}
					else {
						MessageBox(GetHWnd(), "你已经购买过此装备了!", "提示", MB_OK);

					}

				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				moSwordIndex = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 550 && msg.x <= 550 + 160 && msg.y >= 250 && msg.y <= 410)
			{
				dragonknifeIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && dragonknifeIndex == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费100金购买屠龙宝刀(血量和攻击力翻倍)？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断钱是否够）
				{
					if (dragonLimit == 0)
					{
						dragonLimit = 1;
						buy = MoneyConsume(100);
						if (buy == 1)
						{
							WeaponType = 3;
							if (playerIndex == 1) {
								player_1.ShopAddAttack(PlayerAggressivity);
								player_1.ShopAddHP(800);
								player_1.PLayerWeaponUP();
								player_1.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else if (playerIndex == 2) {
								player_2.ShopAddAttack(PlayerAggressivity);
								player_2.ShopAddHP(800);
								player_2.PLayerWeaponUP();
								player_2.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else {
								MessageBox(GetHWnd(), "购买失败", "提示", MB_OK);

							}
						}
					}
					else {
						MessageBox(GetHWnd(), "你已经购买过此装备了!", "提示", MB_OK);

					}


				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断钱是否够）
				dragonknifeIndex = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 710 + 50 && msg.x <= 710 + 50 + 240 && msg.y >= 250 && msg.y <= 410)
			{
				hammerIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && hammerIndex == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费150金购买雷神之锤(获得人物速度翻倍，血量攻击翻两倍)？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断钱是否够）
				{
					if (hammerLimit == 0)
					{
						hammerLimit = 1;
						buy = MoneyConsume(150);
						if (buy == 1)
						{

							WeaponType = 4;
							if (playerIndex == 1) {
								player_1.ShopAddAttack(PlayerAggressivity * 2);
								player_1.ShopAddHP(800 * 2);
								player_1.ShopAddMove(PlayerMoveSpeed);
								player_1.PLayerWeaponUP();
								player_1.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else if (playerIndex == 2) {
								player_2.ShopAddAttack(PlayerAggressivity * 2);
								player_2.ShopAddHP(800 * 2);
								player_2.ShopAddMove(PlayerMoveSpeed);
								player_2.PLayerWeaponUP();
								player_2.ShopAddWeapon();
								MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
								FileSaveSystem();
								FileReadSystem();
							}
							else {
								MessageBox(GetHWnd(), "购买失败", "提示", MB_OK);

							}

						}
					}
					else {
						MessageBox(GetHWnd(), "你已经购买过此装备了!", "提示", MB_OK);
					}


				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断钱是否够）
				hammerIndex = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 910 + 10 && msg.x <= 1000 - 10 && msg.y >= 0 + 10 && msg.y <= 100 - 10)
			{

				index = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index == 1)
			{
				putimage(910, 0, &returnPlay_1, SRCPAINT);
				putimage(910, 0, &returnPlay_3, SRCAND);

				// and then go into the start	
				index = 0;
				Sleep(100);
				return;

			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 150 + 10 && msg.x <= 250 - 10 && msg.y >= 50 + 10 && msg.y <= 150 - 10)
			{
				TaiIndex_1 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && TaiIndex_1 == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费10灵魂进行一次基础属性强化？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断soul是否够）
				{
					buy = SoulConsume(10);
					if (buy == 1)
					{

						if (playerIndex == 1)
						{
							player_1.ShopAddHP(HPnumber);
							player_1.ShopAddAttack(Attacknum);
							player_1.ShopAddMove(Speednum);
							MessageBox(GetHWnd(), "强化成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else if (playerIndex == 2)
						{
							player_2.ShopAddHP(HPnumber);
							player_2.ShopAddAttack(Attacknum);
							player_2.ShopAddMove(Speednum);
							MessageBox(GetHWnd(), "强化成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else {
							MessageBox(GetHWnd(), "强化失败", "提示", MB_OK);
						}

					}
				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断soul是否够）
				TaiIndex_1 = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 250 + 10 && msg.x <= 350 - 10 && msg.y >= 150 + 10 && msg.y <= 250 - 10)
			{											//进一步精确范围
				TaiIndex_2 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && TaiIndex_2 == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费10灵魂进行一次武器强化？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断soul是否够）
				{
					buy = SoulConsume(10);
					if (buy == 1)
					{
						if (playerIndex == 1)
						{
							player_1.StrengthenWeapon();
							MessageBox(GetHWnd(), "强化成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else if (playerIndex == 2)
						{
							player_2.StrengthenWeapon();
							MessageBox(GetHWnd(), "强化成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else {
							MessageBox(GetHWnd(), "强化失败", "提示", MB_OK);
						}

					}
				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断soul是否够）
				TaiIndex_2 = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 650 + 10 && msg.x <= 750 - 10 && msg.y >= 150 + 10 && msg.y <= 250 - 10)
			{
				TaiIndex_3 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && TaiIndex_3 == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费10灵魂增加一次复活次数(上限次数10)？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断钱是否够）
				{
					buy = SoulConsume(10);
					if (buy == 1)
					{
						if (playerIndex == 1)
						{
							player_1.ShopAddSurvive();
							MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else if (playerIndex == 2)
						{
							player_2.ShopAddSurvive();
							MessageBox(GetHWnd(), "购买成功", "提示", MB_OK);
							FileSaveSystem();
							FileReadSystem();
						}
						else {
							MessageBox(GetHWnd(), "购买失败", "提示", MB_OK);
						}
					}

				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断钱是否够）
				TaiIndex_3 = 0;
				buy = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 750 + 10 && msg.x <= 850 - 10 && msg.y >= 50 + 10 && msg.y <= 150 - 10)
			{
				TaiIndex_4 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && TaiIndex_4 == 1)
			{
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定花费10灵魂提高金币产速（每次增加1个/s）？", "是", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
					//打开是否确定购买界面（判断钱是否够）
				{
					buy = SoulConsume(10);
					if (buy == 1)
					{
						if (playerIndex == 1 || playerIndex == 2)
						{
							MessageBox(GetHWnd(), "强化成功", "提示", MB_OK);
							Moneynumber_1++;
							FileSaveSystem();
							FileReadSystem();
						}
						else {
							MessageBox(GetHWnd(), "强化失败", "提示", MB_OK);
						}

					}

				}
				else {
					MessageBox(GetHWnd(), "已取消", "提示", MB_OK);
				}
				//打开是否确定购买界面（判断钱是否够）
				TaiIndex_4 = 0;
				buy = 0;
			}
		}
	}
}
//选择人物
void ChoosePlayer()
{

	int shopIndex = 0;
	int index = 0;
	int resaveIndex = 0;
	int bookIndex = 0;
	while (1)
	{
		BeginBatchDraw();
		putimage(0, 0, &sun);
		putimage(100, 100, &knight);
		putimage(360, 100, &elf);
		putimage(620, 100, &disorigion);
		putimage(900, 500, &shop_1, SRCPAINT);
		putimage(900, 500, &shop_2, SRCAND);
		putimage(900, 400, &save_1, SRCPAINT);
		putimage(900, 400, &save_2, SRCAND);
		putimage(800, -70, &menu_1, SRCPAINT);
		putimage(800, -70, &menu_2, SRCAND);
		putimage(900, 300, &money_1, SRCPAINT);
		putimage(900, 300, &money_2, SRCAND);
		putimage(900, 250, &soul_1, SRCPAINT);
		putimage(900, 250, &soul_3, SRCAND);
		putimage(880, 100, &book_1, SRCPAINT);
		putimage(880, 100, &book_2, SRCAND);
		settextcolor(LIGHTGRAY);
		settextstyle(50, 0, "楷体");
		setbkmode(TRANSPARENT);
		outtextxy(80, 440, "Death-Knight");
		settextcolor(YELLOW);
		outtextxy(0, 0, "请选择角色:");
		settextcolor(LIGHTRED);
		outtextxy(935, 295, ':');
		outtextxy(935, 245, ':');
		outtextxy(400, 440, "Elf-King");
		settextcolor(BLACK);
		outtextxy(645, 440, "隐藏角色");
		settextstyle(25, 0, "楷体");
		outtextxy(910, 200, "图鉴");
		settextcolor(WHITE);
		if (playerIndex == 1)
		{
			sprintf_s(money, "%d", player_1.ReturnMoneyNum());
			sprintf_s(soul, "%d", player_1.ReturnSoulNum());
			outtextxy(300, 20, "你上次的存档角色是Death-Knight");
		}
		else if (playerIndex == 2)
		{
			sprintf_s(money, "%d", player_2.ReturnMoneyNum());
			sprintf_s(soul, "%d", player_2.ReturnSoulNum());
			outtextxy(300, 20, "你上次的存档角色是Elf-King");
		}
		settextcolor(LIGHTRED);
		outtextxy(965, 300, money);
		outtextxy(965, 250, soul);
		FlushBatchDraw();
		EndBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_LBUTTONDOWN && msg.x >= 100 && msg.x <= 360 && msg.y >= 100 && msg.y <= 440)
			{
				putimage(100, 100, &knight_1);
				playerIndex = 1;//1P
				group = 1;
				//choose the first player;
				Sleep(50);
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 360 && msg.x <= 620 && msg.y >= 100 && msg.y <= 440)
			{
				putimage(360, 100, &elf_1);
				playerIndex = 2;//2P;
				group = 2;
				//choose the second player;
				Sleep(50);
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 800 && msg.x <= 1000 && msg.y >= 0 && msg.y <= 120)
			{

				index = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index == 1)
			{
				putimage(800, -70, &menu_1, SRCPAINT);
				putimage(800, -70, &menu_3, SRCAND);
				// and then go into the menu
				Sleep(100);
				StartUI();
				index = 0;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 920 && msg.x <= 980 && msg.y >= 530 && msg.y <= 580)
			{
				shopIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && shopIndex == 1)
			{
				putimage(900, 500, &shop_1, SRCPAINT);
				putimage(900, 500, &shop_3, SRCAND);
				// and then go into the shop
				Sleep(100);
				Shop();
				shopIndex = 0;
			}
			//接下来，读档（shop上面）
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 900 + 20 && msg.x <= 1000 - 20 && msg.y >= 400 + 30 && msg.y <= 500 - 25)
			{
				resaveIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && resaveIndex == 1)
			{
				resaveIndex = 0;
				ShowWindow(GetHWnd(), SW_HIDE);
				int result = MessageBox(NULL, "你是否确定读取存档？", "询问", MB_YESNO | MB_ICONQUESTION);
				ShowWindow(GetHWnd(), SW_SHOW);
				if (result == IDYES)
				{

					putimage(900, 400, &save_1, SRCPAINT);
					putimage(900, 400, &save_3, SRCAND);
					Sleep(100);
					read = FileReadSystem();
					//提示玩家的存档人物
					if (read == 1)
					{
						MessageBox(GetHWnd(), "读档成功", "提示", MB_OK);
					}
					else {
						MessageBox(GetHWnd(), "读档失败", "提示", MB_OK);

					}

				}
				else {
					MessageBox(GetHWnd(), "玩家已取消", "提示", MB_OK);
				}

			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 890 && msg.x <= 970 && msg.y >= 110 && msg.y <= 190)
			{
				bookIndex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && bookIndex == 1)
			{
				bookIndex = 0;
				putimage(880, 100, &book_1, SRCPAINT);
				putimage(880, 100, &book_3, SRCAND);
				Sleep(100);
				Book();

			}

		}

	}
}
//选择地图
void ChooseScreen()
{
	settextcolor(YELLOW);
	settextstyle(50, 0, "字魂24号-镇魂手书");
	setbkmode(TRANSPARENT);
	int index = 0;
	while (1)
	{
		BeginBatchDraw();
		putimage(0, 0, &sun);
		putimage(80, 120, &star_1);
		putimage(580, 120, &mountion_1);

		putimage(910, 0, &returnPlay_1, SRCPAINT);
		putimage(910, 0, &returnPlay_2, SRCAND);

		settextcolor(YELLOW);
		settextstyle(50, 0, "字魂24号-镇魂手书");
		outtextxy(130, 420, "冰雪六芒星");
		outtextxy(640, 420, "失落之地");

		settextstyle(60, 0, "字魂24号-镇魂手书");
		outtextxy(370, 0, "请选择地图");

		FlushBatchDraw();
		EndBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_LBUTTONDOWN && msg.x >= 80 && msg.x < 80 + 350 && msg.y >= 120 && msg.y <= 120 + 300)
			{
				starMap = 1;
			}
			else if (msg.message == WM_LBUTTONUP && starMap == 1)
			{
				starMap = 0;
				map = 0;
				putimage(80, 120, &star_2);
				Sleep(100);
				MessageBox(GetHWnd(), "请等待进入...！", "提示", MB_OK);
				return;


			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 580 && msg.x <= 580 + 350 && msg.y >= 120 && msg.y <= 120 + 300)
			{
				mountionMap = 1;
			}
			else if (msg.message == WM_LBUTTONUP && mountionMap == 1)
			{
				mountionMap = 0;
				map = 1;
				putimage(580, 120, &mountion_2);
				Sleep(100);
				MessageBox(GetHWnd(), "请等待进入...！", "提示", MB_OK);
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 910 + 10 && msg.x <= 1000 - 10 && msg.y >= 0 + 10 && msg.y <= 100 - 10)
			{

				index = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index == 1)
			{
				putimage(910, 0, &returnPlay_1, SRCPAINT);
				putimage(910, 0, &returnPlay_3, SRCAND);
				// and then go into the player	
				index = 0;
				Sleep(100);
				ChoosePlayer();

			}
		}
	}
}
//初始化敌人
void InitPlayerAndEnemy()
{
	drawboss = 0;
	sign = 0;
	timecount = 0;
	tap = 0;
	tap_1 = 0;
	DieEnemy = 0;
	DieEnemyNum = 0;
	enemydieNUm = 0;
	FileReadSystem();
	if (IfGetTheFile == 1) {
		if (whatplayer == 1)
		{
			if (playerIndex == 1)
			{
				player_1.SetPlayerHP(sHP);
				player_1.SetPlayerMoveSpeed(sMoveSpeed);
				player_1.SetPlayerAggressivity(sAggressivity);
				player_1.SetPlayerWeaponNum(sWeaponNum);
				player_1.SetPlayerSurvive(survivE);
				player_1.SetPlayerhpnumber(hpnumber);
				player_1.SetPlayerXP(0);
				player_1.SetPlayerLevel(0);
				player_1.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
				player_1.SetPlayerHpBottleNum(0);
				if (game == 0 || game == 3) //一局输了之后如果则不会获得金币，以前存档的除外
				{
					player_1.SetPlayerMoneyNum(sMoneyNum);
					player_1.SetPlayerSoulNum(sSoulNum);
				}
				else if (game == 1)
				{//这个其实可以不写
					sMoneyNum = player_1.ReturnMoneyNum();
					sSoulNum = player_1.ReturnSoulNum();
					player_1.SetPlayerMoneyNum(sMoneyNum);
					player_1.SetPlayerSoulNum(sSoulNum);
				}


			}
			else if (playerIndex == 2)
			{
				player_2.SetPlayerHP(PlayerHP);
				player_2.SetPlayerXP(0);
				player_2.SetPlayerLevel(0);
				player_2.SetPlayerMoveSpeed(PlayerMoveSpeed);
				player_2.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
				player_2.SetPlayerAggressivity(PlayerAggressivity);
				player_2.SetPlayerHpBottleNum(0);
				if (game == 0 || game == 3)
				{
					player_2.SetPlayerMoneyNum(sMoneyNum);
					player_2.SetPlayerSoulNum(sSoulNum);
				}
				else if (game == 1)
				{
					onlymoney = player_2.ReturnMoneyNum();
					onlysoul = player_2.ReturnSoulNum();
					player_2.SetPlayerMoneyNum(onlymoney);
					player_2.SetPlayerSoulNum(onlysoul);
					player_1.MoneyChange(onlymoney);
					player_1.SoulChange(onlysoul);
				}

			}
		}
		else if (whatplayer == 2)
		{

			if (playerIndex == 2)
			{
				player_2.SetPlayerHP(sHP);
				player_2.SetPlayerMoveSpeed(sMoveSpeed);
				player_2.SetPlayerAggressivity(sAggressivity);
				player_2.SetPlayerWeaponNum(sWeaponNum);
				player_2.SetPlayerSurvive(survivE);
				player_2.SetPlayerhpnumber(hpnumber);
				player_2.SetPlayerXP(0);
				player_2.SetPlayerLevel(0);
				player_2.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
				player_2.SetPlayerHpBottleNum(0);
				if (game == 0 || game == 3) //一局输了之后如果则不会获得金币，以前存档的除外
				{
					player_2.SetPlayerMoneyNum(sMoneyNum);
					player_2.SetPlayerSoulNum(sSoulNum);
				}
				else if (game == 1)
				{//这个其实可以不写
					sMoneyNum = player_2.ReturnMoneyNum();
					sSoulNum = player_2.ReturnSoulNum();
					player_2.SetPlayerMoneyNum(sMoneyNum);
					player_2.SetPlayerSoulNum(sSoulNum);

				}

			}
			else if (playerIndex == 1)
			{
				player_1.SetPlayerHP(PlayerHP);
				player_1.SetPlayerXP(0);
				player_1.SetPlayerLevel(0);
				player_1.SetPlayerMoveSpeed(PlayerMoveSpeed);
				player_1.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
				player_1.SetPlayerAggressivity(PlayerAggressivity);
				player_1.SetPlayerHpBottleNum(0);
				if (game == 0 || game == 3)
				{
					player_1.SetPlayerMoneyNum(sMoneyNum);
					player_1.SetPlayerSoulNum(sSoulNum);
				}
				else if (game == 1)
				{
					onlymoney = player_1.ReturnMoneyNum();
					onlysoul = player_1.ReturnSoulNum();
					player_1.SetPlayerMoneyNum(onlymoney);
					player_1.SetPlayerSoulNum(onlysoul);
					player_2.MoneyChange(onlymoney);
					player_2.SoulChange(onlysoul);
				}

			}

		}
	}

	if (whatplayer == 0)
	{
		if (playerIndex == 2)
		{
			player_2.SetPlayerHP(PlayerHP);
			player_2.SetPlayerXP(0);
			player_2.SetPlayerLevel(0);
			player_2.SetPlayerMoveSpeed(PlayerMoveSpeed);
			player_2.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
			player_2.SetPlayerAggressivity(PlayerAggressivity);
			player_2.SetPlayerHpBottleNum(0);
			if (game == 0 || game == 3)
			{
				player_2.SetPlayerMoneyNum(onlymoney);
				player_2.SetPlayerSoulNum(onlysoul);
			}
			else if (game == 1)
			{
				onlymoney = player_2.ReturnMoneyNum();
				onlysoul = player_2.ReturnSoulNum();
				player_2.SetPlayerMoneyNum(onlymoney);
				player_2.SetPlayerSoulNum(onlysoul);
				player_1.MoneyChange(onlymoney);
				player_1.SoulChange(onlysoul);
			}
		}
		else if (playerIndex == 1)
		{
			player_1.SetPlayerHP(PlayerHP);
			player_1.SetPlayerXP(0);
			player_1.SetPlayerLevel(0);
			player_1.SetPlayerMoveSpeed(PlayerMoveSpeed);
			player_1.SetPlayerPosition(PlayerInitPositionX, PlayerInitPositionY);
			player_1.SetPlayerAggressivity(PlayerAggressivity);
			player_1.SetPlayerHpBottleNum(0);
			if (game == 0 || game == 3)
			{
				player_1.SetPlayerMoneyNum(onlymoney);
				player_1.SetPlayerSoulNum(onlysoul);
			}
			else if (game == 1)
			{
				onlymoney = player_1.ReturnMoneyNum();
				onlysoul = player_1.ReturnSoulNum();
				player_1.SetPlayerMoneyNum(onlymoney);
				player_1.SetPlayerSoulNum(onlysoul);
				player_2.MoneyChange(onlymoney);
				player_2.SoulChange(onlysoul);
			}
		}

	}
	//初始化敌人
	for (int i = 0; i < EnemyNum; i++)
	{
		enemy_blue[i].SetEnemyAggressivity(EnemyAggressivity);
		enemy_blue[i].SetEnemyHP(EnemyHP);
		enemy_blue[i].SetEnemyMoveSpeed(EnemyMoveSpeed);
		enemy_blue[i].SetEnemyPosition();
		enemy_blue[i].SetEnemyDrop();
		enemy_blue[i].SetEnemyFlag();
		enemy_blue[i].SetEnemyIndex();

		enemy_green[i].SetAttack();
		enemy_green[i].SetEnemyAggressivity(5 * EnemyAggressivity);
		enemy_green[i].SetEnemyHP(EnemyHP);
		enemy_green[i].SetEnemyMoveSpeed(EnemyMoveSpeed);
		enemy_green[i].SetEnemyPosition();
		enemy_green[i].SetEnemyDrop();
		enemy_green[i].SetEnemyFlag();
		enemy_green[i].SetEnemyIndex();
		enemy_green[i].SetBuffer();
		enemy_green[i].SetEnemyDx();
		enemy_green[i].SetEnemyDy();
		enemy_green[i].SetgetGreenxy();
	}
	enemy_boss.SetBossAggressivity(BossEnemyAggressivity);
	enemy_boss.SetBossHP(BossEnemyHP);
	enemy_boss.SetBossMoveSpeed(BossEnemyMoveSpeed);
	enemy_boss.SetBossPosition();
	enemy_boss.SetBossFlag();
	enemy_boss.SetEnemyIndex();
	enemy_boss.SetBossBuffer();
}
//选择重新开始游戏
void ChooseToRestartGame()
{
	// 清空游戏状态，重新初始化游戏界面
	closegraph();
	initgraph(WIDTH + LINEDISTANCE * 6, HEIGHT);
	InitPlayerAndEnemy();
	if (playerIndex == 1) player_1.SetPlayerHP(PlayerHP);
	else if (playerIndex == 2) player_2.SetPlayerHP(PlayerHP);
	ChoosePlayer();
	ChooseScreen();
	Music();
	while (1) {
		BeginBatchDraw();//开始在内存中绘制图像，进入双缓冲
		//画好后再移到这里，避免由于先后顺序带来的一闪一闪
		PaintPicture();

		sign++;
		Sleep(5);//（阻塞函数）注销以后可能会比较流畅，因为可能会阻塞整个程序，在操作中会比较卡

		EndBatchDraw();//结束绘制，将绘制后的完整图像输出到窗口
	}
	closegraph();
	// 重新开始游戏
}
//选择返回主菜单
void ChooseToReturnMenu()
{
	// 关闭当前游戏界面，显示主页面
	closegraph();
	initgraph(WIDTH + LINEDISTANCE * 6, HEIGHT);
	if (playerIndex == 1) player_1.SetPlayerHP(PlayerHP);
	else if (playerIndex == 2) player_2.SetPlayerHP(PlayerHP);
	InitPlayerAndEnemy();
	StartUI();
	ChoosePlayer();
	ChooseScreen();
	Music();

	while (1) {
		BeginBatchDraw();//开始在内存中绘制图像，进入双缓冲
		//画好后再移到这里，避免由于先后顺序带来的一闪一闪
		PaintPicture();
		sign++;
		Sleep(5);//（阻塞函数）注销以后可能会比较流畅，因为可能会阻塞整个程序，在操作中会比较卡

		EndBatchDraw();//结束绘制，将绘制后的完整图像输出到窗口
	}
	closegraph();
}
//游戏胜利
void GreatGame()
{
	//游戏结束后按空格键返回主菜单,怎么实现
	game = 1;
	FileSaveSystem();
	putimage(0, 0, &victory);
	mciSendString("open victory.mp3", 0, 0, 0);//media control interface
	mciSendString("play victory.mp3", 0, 0, 0);//circle reply
	FlushBatchDraw();//刷新缓冲区
	Sleep(1500);
	// 隐藏窗口
	ShowWindow(GetHWnd(), SW_HIDE);

	// 弹出提示框，询问玩家是否重新开始游戏
	int result = MessageBox(NULL, "恭喜你获得了胜利！是否重新开始游戏？", "游戏胜利", MB_YESNO | MB_ICONQUESTION);

	// 显示窗口
	ShowWindow(GetHWnd(), SW_SHOW);

	if (result == IDYES)  // 玩家选择重新开始游戏
	{
		ChooseToRestartGame();

	}
	else  // 玩家选择返回主页面
	{
		ChooseToReturnMenu();
	}

}
//游戏失败
void GameOver()
{
	game = 0;
	putimage(0, 0, &gameover);
	FlushBatchDraw();//刷新缓冲区
	Sleep(1500);
	// 隐藏窗口
	ShowWindow(GetHWnd(), SW_HIDE);

	// 弹出提示框，询问玩家是否重新开始游戏
	int result = MessageBox(NULL, "很遗憾你失败了！是否重新开始游戏？", "游戏失败", MB_YESNO | MB_ICONQUESTION);

	// 显示窗口
	ShowWindow(GetHWnd(), SW_SHOW);

	if (result == IDYES)  // 玩家选择重新开始游戏
	{
		ChooseToRestartGame();

	}
	else  // 玩家选择返回主页面
	{
		// 关闭当前游戏界面，显示主页面
		ChooseToReturnMenu();
	}
}
//判断物品拾取
bool PickUP()
{

	int d = 0;

	if (playerIndex == 1)
	{
		if (player_1.ReturnPlayerX() >= enemy_boss.ReturnBossX() - PlayerWidth / 2 && player_1.ReturnPlayerX() <= enemy_boss.ReturnBossX() + 100 - PlayerWidth / 2
			&& player_1.ReturnPlayerY() >= enemy_boss.ReturnBossY() - PlayerHeight / 2 && player_1.ReturnPlayerY() <= enemy_boss.ReturnBossY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}
	else if (playerIndex == 2)
	{
		if (player_2.ReturnPlayerX() >= enemy_boss.ReturnBossX() - PlayerWidth / 2 && player_2.ReturnPlayerX() <= enemy_boss.ReturnBossX() + 100 - PlayerWidth / 2
			&& player_2.ReturnPlayerY() >= enemy_boss.ReturnBossY() - PlayerHeight / 2 && player_2.ReturnPlayerY() <= enemy_boss.ReturnBossY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}


	if (d == 1)return true;
	else return false;

}
//画出boss
void DrawBoss()
{
	if (enemy_boss.Bossflag == 1)
	{
		settextcolor(BLACK);//设置文字颜色
		settextstyle(20, 0, "字魂24号-镇魂手书");//设置文字风格
		setbkmode(TRANSPARENT);

		outtextxy(enemy_boss.ReturnBossX() + LINEDISTANCE / 4, enemy_boss.ReturnBossY() - LINEDISTANCE - 5, "HP:");//输出文字到某一个坐标

		sprintf_s(bohp, "%d", enemy_boss.ReturnBossHP());
		outtextxy(enemy_boss.ReturnBossX() + LINEDISTANCE * 3 / 2, enemy_boss.ReturnBossY() - LINEDISTANCE - 5, bohp);

		putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossY(), &boss_1, SRCPAINT);
		putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossY(), &boss_3, SRCAND);

		setfillcolor(RED);
		fillrectangle(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossY() - LINEDISTANCE / 4, enemy_boss.ReturnBossX() + EnemyWidth - ((BossEnemyHP - enemy_boss.ReturnBossHP()) * EnemyWidth) / BossEnemyHP, enemy_boss.ReturnBossY());
		setfillcolor(LIGHTGRAY);
		fillrectangle(enemy_boss.ReturnBossX() + EnemyWidth - ((BossEnemyHP - enemy_boss.ReturnBossHP()) * EnemyWidth) / BossEnemyHP, enemy_boss.ReturnBossY() - LINEDISTANCE / 4, enemy_boss.ReturnBossX() + EnemyWidth, enemy_boss.ReturnBossY());

		enemy_boss.BossPosition();

		if (enemy_boss.ReturnBossHP() <= 0)
		{
			enemy_boss.Bossflag = 0;
		}
		if (enemy_boss.ReturnBossBufferLiveNum() < 400)
		{
			if (sign % 200 == 0)
			{
				enemy_boss.PlusLiveBufferNum();
			}
			enemy_boss.Bossability();
		}

	}
	else {

		if (!enemy_boss.ReturnIndex())//don't be picked
		{

			if (PickUP())//be picked
			{
				enemy_boss.ChangeIndex();//int the ground
				//player upuupup
				if (playerIndex == 1)
				{
					player_1.AddHpBottle(10);
					player_1.AddMoney(200);
					player_1.AddSoul(100);
				}
				else if (playerIndex == 2)
				{
					player_2.AddHpBottle(10);
					player_2.AddMoney(200);
					player_2.AddSoul(100);
				}

			}
			else {
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &money_1, SRCPAINT);
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &money_2, SRCAND);
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &soul_1, SRCPAINT);
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &soul_3, SRCAND);
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &medicineHP_1, SRCPAINT);
				putimage(enemy_boss.ReturnBossX(), enemy_boss.ReturnBossX(), &medicineHP_2, SRCAND);

			}
		}
	}


}
//打印倒计时
void PaintTime()
{
	settextcolor(RED);
	settextstyle(50, 0, "Consolas");
	setbkmode(TRANSPARENT);// transoarent print
	if (timecount == 0)
	{
	loop:
		minutes = 0;
		seconds = 0;
		InputBox(s, sizeof(s), "输入你的挑战时间：（分钟为单位）", "设定时间");
		sscanf_s(s, "%d", &minutes);
		sprintf_s(t, "%02d:%02d", minutes, seconds);
		outtextxy(900, 70, t);
		if (minutes != 0 || seconds != 0) timecount = 1;
		else {
			MessageBox(GetHWnd(), "挑战时间至少要大于等于一分钟", "提示", MB_OK);
			goto loop;
		}
	}
	else {
		if (minutes != 0 || seconds != 0)
		{
			sprintf_s(t, "%02d:%02d", minutes, seconds);
			outtextxy(900, 70, t);
			if (Timer(1000, 9))
			{

				if (seconds == 0)
				{
					seconds = 59;
					minutes--;

				}
				else {
					seconds--;
				}

				sprintf_s(t, "%02d:%02d", minutes, seconds);
				outtextxy(900, 70, t);

				if (playerIndex == 1 && player_1.ReturnPlayerHP() <= 0) GameOver();
				else player_1.MoneyChange(Moneynum_1);
				if (playerIndex == 2 && player_2.ReturnPlayerHP() <= 0) GameOver();
				else player_2.MoneyChange(Moneynum_1);
			}
			if (minutes == 0 && seconds <= 30)
			{
				drawboss = 1;
			}

		}
		else {

			outtextxy(340, 50, "Time's up!");
			if (playerIndex == 1 && player_1.ReturnPlayerHP() > 0) GreatGame();
			else if (playerIndex == 2 && player_2.ReturnPlayerHP() > 0) GreatGame();
			else GameOver();

		}
	}
}
//局内强化系统
void StrengthenPlayer()
{

	int index_1 = 0, index_2 = 0, index_3 = 0, index_4 = 0;
	int strength = rand() % 3;


	setbkmode(TRANSPARENT);//设置文字背景模式为透明
	while (1)
	{
		putimage(0, 0, &Strengthen);
		putimage(200, 100, &box_1, SRCPAINT);//200*200
		putimage(200, 100, &box_2, SRCAND);
		putimage(200, 350, &box_1, SRCPAINT);
		putimage(200, 350, &box_2, SRCAND);

		putimage(620, 100, &box_1, SRCPAINT);
		putimage(620, 100, &box_2, SRCAND);
		putimage(620, 350, &box_1, SRCPAINT);
		putimage(620, 350, &box_2, SRCAND);

		putimage(300, 0, &box_31, SRCPAINT);
		putimage(300, 0, &box_32, SRCAND);//430*100

		settextcolor(LIGHTRED);

		settextstyle(50, 0, "楷书");//设置文字风格
		outtextxy(337, 25, "请选择你的强化");

		settextcolor(BLACK);
		settextstyle(30, 0, "字魂24号-镇魂手书");//设置文字风格
		outtextxy(640, 150, "增加灵魂:");
		outtextxy(640, 400, "增加药水:");


		if (strength == 0)
		{
			outtextxy(220, 150, "强化人物:");
			outtextxy(220, 200, "提升血量.");

			outtextxy(220, 400, "强化武器:");
			settextstyle(25, 0, "字魂24号-镇魂手书");//设置文字风格
			outtextxy(220, 450, "增大伤害范围.");


		}
		else if (strength == 1)
		{
			settextstyle(30, 0, "字魂24号-镇魂手书");//设置文字风格
			outtextxy(220, 150, "强化人物:");

			outtextxy(220, 200, "提升攻击力.");

			outtextxy(220, 400, "强化武器:");
			settextstyle(25, 0, "字魂24号-镇魂手书");//设置文字风格
			outtextxy(220, 450, "减少冷却时间.");

		}
		else if (strength == 2)
		{
			settextstyle(30, 0, "字魂24号-镇魂手书");//设置文字风格
			outtextxy(220, 150, "强化人物:");
			outtextxy(220, 200, "提升速度.");

			outtextxy(220, 400, "强化武器:");
			settextstyle(25, 0, "字魂24号-镇魂手书");//设置文字风格
			outtextxy(220, 450, "增加持续时间.");

		}


		FlushBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{
			if (msg.message == WM_LBUTTONDOWN && msg.x >= 200 && msg.x <= 400 && msg.y >= 100 && msg.y <= 300)
			{
				index_1 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_1 == 1)
			{
				index_1 = 0;
				if (whatplayer == 1)
				{
					if (playerIndex == 1)
					{
						if (strength == 0)
						{
							//write
							player_1.StrengthenPlayerHP(sHP);

						}
						else if (strength == 1)
						{
							player_1.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_1.StrengthenPlayerMoveSpeed();

						}
						else;

					}
					else if (playerIndex == 2)
					{
						if (strength == 0)
						{
							player_2.StrengthenPlayerHP(PlayerHP);
						}
						else if (strength == 1)
						{
							player_2.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_2.StrengthenPlayerMoveSpeed();
						}
						else;
					}
				}

				else if (whatplayer == 2)
				{
					if (playerIndex == 2)
					{
						if (strength == 0)
						{
							player_2.StrengthenPlayerHP(sHP);
						}
						else if (strength == 1)
						{
							player_2.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_2.StrengthenPlayerMoveSpeed();
						}
						else;
					}
					else if (playerIndex == 1)
					{
						if (strength == 0)
						{
							//write
							player_1.StrengthenPlayerHP(PlayerHP);

						}
						else if (strength == 1)
						{
							player_1.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_1.StrengthenPlayerMoveSpeed();

						}
						else;
					}

				}
				else if (whatplayer == 0)
				{
					if (playerIndex == 1)
					{
						if (strength == 0)
						{
							//write
							player_1.StrengthenPlayerHP(PlayerHP);

						}
						else if (strength == 1)
						{
							player_1.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_1.StrengthenPlayerMoveSpeed();

						}
						else;
					}
					else if (playerIndex == 2)
					{
						if (strength == 0)
						{
							player_2.StrengthenPlayerHP(PlayerHP);
						}
						else if (strength == 1)
						{
							player_2.StrengthenPlayerAggressivity();
						}
						else if (strength == 2)
						{
							player_2.StrengthenPlayerMoveSpeed();
						}
						else;
					}

				}
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 200 && msg.x <= 400 && msg.y >= 350 && msg.y <= 550)
			{
				index_2 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_2 == 1)
			{
				index_2 = 0;
				//weapon strengthen//武器类(尚未完全实现)
				if (playerIndex == 1)
				{
					if (strength == 0)
					{
						//write
						player_1.StrengthenWeaponDamageArea(0);

					}
					else if (strength == 1)
					{
						player_1.StrengthenWeaponCoolingtime(0);
					}
					else if (strength == 2)
					{
						player_1.StrengthenWeaponDurition(0);

					}
					else;

				}
				else if (playerIndex == 2)
				{
					if (strength == 0)
					{
						player_2.StrengthenWeaponDamageArea(0);
					}
					else if (strength == 1)
					{
						player_2.StrengthenWeaponCoolingtime(0);
					}
					else if (strength == 2)
					{
						player_2.StrengthenWeaponDurition(0);
					}
					else;
				}

				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 620 && msg.x <= 820 && msg.y >= 100 && msg.y <= 300)
			{
				index_3 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_3 == 1)
			{
				index_3 = 0;
				if (playerIndex == 1)
				{
					player_1.StrengthenPlayerSoul();
				}
				else if (playerIndex == 2)
				{
					player_2.StrengthenPlayerSoul();
				}
				else;

				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 620 && msg.x <= 820 && msg.y >= 350 && msg.y <= 550)
			{
				index_4 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_4 == 1)
			{
				index_4 = 0;
				if (playerIndex == 1)
				{
					player_1.StrengthenPlayerHpBottle();
				}
				else if (playerIndex == 2)
				{
					player_2.StrengthenPlayerHpBottle();
				}
				else;
				return;
			}
			else;
		}
	}
}
//画出经验条
void PrintPlayerExp(int DieEnemy)
{

	if (DieEnemy % DieEnemyExp == 0 && DieEnemy != 0) DieEnemyNum = DieEnemyExp;
	else {
		DieEnemyNum = DieEnemy % DieEnemyExp;
	}

	setfillcolor(YELLOW);

	if (playerIndex == 1)
	{
		fillrectangle(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE, player_1.ReturnPlayerX() + (DieEnemyNum * PlayerWidth) / DieEnemyExp, player_1.ReturnPlayerY() - LINEDISTANCE / 2);
	}
	else if (playerIndex == 2)
	{
		fillrectangle(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE, player_2.ReturnPlayerX() + (DieEnemyNum * PlayerWidth) / DieEnemyExp, player_2.ReturnPlayerY() - LINEDISTANCE / 2);
	}
	setfillcolor(LIGHTGRAY);
	if (playerIndex == 1)
	{
		fillrectangle(player_1.ReturnPlayerX() + (DieEnemyNum * PlayerWidth) / DieEnemyExp, player_1.ReturnPlayerY() - LINEDISTANCE, player_1.ReturnPlayerX() + PlayerWidth, player_1.ReturnPlayerY() - LINEDISTANCE / 2);
	}
	else if (playerIndex == 2)
	{
		fillrectangle(player_2.ReturnPlayerX() + (DieEnemyNum * PlayerWidth) / DieEnemyExp, player_2.ReturnPlayerY() - LINEDISTANCE, player_2.ReturnPlayerX() + PlayerWidth, player_2.ReturnPlayerY() - LINEDISTANCE / 2);
	}


}
//打印等级图标
void PrintLevel()
{

	if (DieEnemy % DieEnemyExp == 0 && DieEnemy != 0)
	{
		if (playerIndex == 1)
		{
			if (enemydieNUm != DieEnemy)//in case to up forever
			{
				player_1.PlayerLevelUp();
				StrengthenPlayer();
				player_1.PlayerAttribute(player_1.ReturnPlayerLevel());

			}
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE * 5 / 2, &level_1, SRCPAINT);
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE * 5 / 2, &level_2, SRCAND);
		}
		else if (playerIndex == 2)
		{
			if (enemydieNUm != DieEnemy)
			{
				player_2.PlayerLevelUp();
				StrengthenPlayer();
				player_2.PlayerAttribute(player_2.ReturnPlayerLevel());

			}
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE * 5 / 2, &level_1, SRCPAINT);
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE * 5 / 2, &level_2, SRCAND);
		}


	}
	enemydieNUm = DieEnemy;

}
//控制人物移动，仅支持上下箭头
void KeyDown_1()
{
	//异步按键处理，不会影响其他的物体
	if (GetAsyncKeyState(VK_UP))//按上下左右箭头
	{
		if (playerIndex == 1)
		{
			player_1.PlayerPositionChange(72);

		}
		else if (playerIndex == 2)
		{
			player_2.PlayerPositionChange(72);

		}
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		if (playerIndex == 1) {
			player_1.PlayerPositionChange(80);

		}
		else if (playerIndex == 2)
		{
			player_2.PlayerPositionChange(80);

		}
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		if (playerIndex == 1)
		{
			player_1.PlayerPositionChange(75);

		}
		else if (playerIndex == 2)
		{
			player_2.PlayerPositionChange(75);

		}

		if (GetAsyncKeyState(VK_SPACE))
		{
			if (moLimit == 1)
			{
				if (playerIndex == 1)
				{

					blueswordX = player_1.ReturnPlayerX();
					blueswordY = player_1.ReturnPlayerY();
					putimage(blueswordX - PlayerWidth + LINEDISTANCE, blueswordY, &Allsword_1, SRCPAINT);
					putimage(blueswordX - PlayerWidth + LINEDISTANCE, blueswordY, &purplesword_2, SRCAND);

				}
				else if (playerIndex == 2)
				{
					blueswordX = player_2.ReturnPlayerX();
					blueswordY = player_2.ReturnPlayerY();
					putimage(blueswordX - PlayerWidth + LINEDISTANCE, blueswordY, &Allsword_1, SRCPAINT);
					putimage(blueswordX - PlayerWidth + LINEDISTANCE, blueswordY, &purplesword_2, SRCAND);

				}
			}
		}

	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		if (playerIndex == 1)
		{
			player_1.PlayerPositionChange(77);

		}
		else if (playerIndex == 2)
		{
			player_2.PlayerPositionChange(77);

		}
		if (GetAsyncKeyState(VK_SPACE))
		{
			if (whatplayer != 0)
			{
				if (dragonLimit == 1)//after buy dragonSword ,you can get this ability
				{
					if (playerIndex == 1)
					{

						putimage(player_1.ReturnPlayerX() + LINEDISTANCE, player_1.ReturnPlayerY(), &sword_1, SRCPAINT);
						putimage(player_1.ReturnPlayerX() + LINEDISTANCE, player_1.ReturnPlayerY(), &sword_2, SRCAND);

					}
					if (playerIndex == 2)
					{
						// 创建双缓冲区
						IMAGE backBuffer;
						getimage(&backBuffer, 0, 0, WIDTH, HEIGHT);

						if (Timer(3000, 15))
						{
							int x = player_2.ReturnPlayerX() + LINEDISTANCE;
							int y = player_2.ReturnPlayerY();
							//	BeginBatchDraw();
							for (int i = 0; i < 16; i++)
							{

								// 将缓冲区恢复为初始状态
								putimage(0, 0, &backBuffer, SRCCOPY);

								putimage(x + i * LINEDISTANCE / 2, y, &sword_1, SRCPAINT);
								putimage(x + i * LINEDISTANCE / 2, y, &sword_2, SRCAND);

								FlushBatchDraw();

								Sleep(20);
							}
							//EndBatchDraw();
							for (int i = 0; i < tap; i++)
							{
								if (enemy_blue[i].flag == 1 && enemy_blue[i].ReturnEnemyX() >= x && enemy_blue[i].ReturnEnemyX() <= x + PlayerWidth * 2
									&& enemy_blue[i].ReturnEnemyY() >= y - PlayerHeight / 2 && enemy_blue[i].ReturnEnemyY() <= y + PlayerHeight / 2)
								{
									enemy_blue[i].EnemyHpChange(400);
									PrintPlayerExp(DieEnemy);
									PrintLevel();
								}
							}
							for (int i = 0; i < tap_1; i++)
							{
								if (enemy_green[i].flag == 1 && enemy_green[i].ReturnEnemyX() >= x && enemy_green[i].ReturnEnemyX() <= x + PlayerWidth * 2
									&& enemy_green[i].ReturnEnemyY() >= y - PlayerHeight / 2 && enemy_green[i].ReturnEnemyY() <= y + PlayerHeight / 2)
								{

									enemy_green[i].EnemyHpChange(400);
									PrintPlayerExp(DieEnemy);
									PrintLevel();
								}
							}


							if (drawboss == 1 && enemy_boss.Bossflag == 1 && enemy_boss.ReturnBossX() >= x && enemy_boss.ReturnBossX() <= x + PlayerWidth * 2 &&
								enemy_boss.ReturnBossY() >= y - PlayerHeight / 2 && enemy_boss.ReturnBossY() <= y + PlayerHeight / 2)
							{

								enemy_boss.BossHPchange(300);
								PrintPlayerExp(DieEnemy);
								PrintLevel();
							}

						}


					}
				}
			}



		}

	}
	if (GetAsyncKeyState(VK_SHIFT))
	{
		if (whatplayer != 0)
		{
			if (hammerLimit == 1)//you can get this ability only you buy hammer
			{
				if (playerIndex == 2)
				{
					int num = 0, move = 0;
					int i = 1;//反应连续按键移动的循环开关
					//	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
					if (Timer(8000, 16))
					{


						for (num = 0; num <= 15; num++)
						{
							fflush(stdin);

							if (playerDirection == 1)
							{
								putimage(player_2.ReturnPlayerX() - 37, player_2.ReturnPlayerY() - 72, &Helix_attacky[0][num], SRCAND);
								putimage(player_2.ReturnPlayerX() - 37, player_2.ReturnPlayerY() - 72, &Helix_attack[0][num], SRCPAINT);
							}
							if (playerDirection == 0)
							{
								putimage(player_2.ReturnPlayerX() - 365, player_2.ReturnPlayerY() - 72, &Helix_attacky[1][num], SRCAND);
								putimage(player_2.ReturnPlayerX() - 365, player_2.ReturnPlayerY() - 72, &Helix_attack[1][num], SRCPAINT);
							}
							FlushBatchDraw();

							Sleep(100);
							if (num == 5)//爆炸音效
							{
								mciSendString("close qibo", 0, 0, 0);
								mciSendString("open ./res/music/qibo.mp3 alias qibo", 0, 0, 0);
								mciSendString("play qibo", 0, 0, 0);
							}
						}

						for (int i = 0; i < tap; i++)
						{
							if (enemy_blue[i].flag == 1 && enemy_blue[i].ReturnEnemyX() >= player_2.ReturnPlayerX() - PlayerWidth - LINEDISTANCE * 2 && enemy_blue[i].ReturnEnemyX() <= player_2.ReturnPlayerX() + LINEDISTANCE + PlayerWidth * 2 &&
								enemy_blue[i].ReturnEnemyY() >= player_2.ReturnPlayerY() - PlayerHeight * 2 && enemy_blue[i].ReturnEnemyY() <= player_2.ReturnPlayerY() + PlayerHeight * 2)
							{

								enemy_blue[i].EnemyHpChange(500);
								PrintPlayerExp(DieEnemy);
								PrintLevel();
							}
						}
						for (int i = 0; i < tap_1; i++)
						{
							if (enemy_green[i].flag == 1 && enemy_green[i].ReturnEnemyX() >= player_2.ReturnPlayerX() - PlayerWidth - LINEDISTANCE * 2 && enemy_green[i].ReturnEnemyX() <= player_2.ReturnPlayerX() + LINEDISTANCE + PlayerWidth * 2 &&
								enemy_green[i].ReturnEnemyY() >= player_2.ReturnPlayerY() - PlayerHeight * 2 && enemy_green[i].ReturnEnemyY() <= player_2.ReturnPlayerY() + PlayerHeight * 2)
							{

								enemy_green[i].EnemyHpChange(500);
								PrintPlayerExp(DieEnemy);
								PrintLevel();
							}
						}


						if (drawboss == 1 && enemy_boss.Bossflag == 1 && enemy_boss.ReturnBossX() >= player_2.ReturnPlayerX() - PlayerWidth && enemy_boss.ReturnBossX() <= player_2.ReturnPlayerX() + PlayerWidth * 2 &&
							enemy_boss.ReturnBossY() >= player_2.ReturnPlayerY() - PlayerHeight * 2 && enemy_boss.ReturnBossY() <= player_2.ReturnPlayerY() + PlayerHeight * 2)
						{

							enemy_boss.BossHPchange(500);
							PrintPlayerExp(DieEnemy);
							PrintLevel();
						}


					}

				}
				if (playerIndex == 1)
				{
					// 创建双缓冲区
					IMAGE backBuffer;
					getimage(&backBuffer, 0, 0, WIDTH, HEIGHT);

					if (Timer(15000, 15))
					{
						int x = WIDTH - 340;
						int y = 0;

						for (int i = 0; i <= 30; i++)
						{

							// 将缓冲区恢复为初始状态
							putimage(0, 0, &backBuffer, SRCCOPY);

							putimage(x - i * LINEDISTANCE, y, &dian_1, SRCPAINT);
							putimage(x - i * LINEDISTANCE, y, &dian_2, SRCAND);
							putimage(x - i * LINEDISTANCE, y + 140, &dian_1, SRCPAINT);
							putimage(x - i * LINEDISTANCE, y + 140, &dian_2, SRCAND);
							putimage(x - i * LINEDISTANCE, y + 280, &dian_1, SRCPAINT);
							putimage(x - i * LINEDISTANCE, y + 280, &dian_2, SRCAND);
							putimage(x - i * LINEDISTANCE, y + 420, &dian_1, SRCPAINT);
							putimage(x - i * LINEDISTANCE, y + 420, &dian_2, SRCAND);
							putimage(x - i * LINEDISTANCE, y + 560, &dian_1, SRCPAINT);
							putimage(x - i * LINEDISTANCE, y + 560, &dian_2, SRCAND);


							FlushBatchDraw();

							Sleep(20);
						}
						for (int i = 0; i < tap; i++)
						{
							if (enemy_blue[i].flag == 1 && enemy_blue[i].ReturnEnemyX() <= WIDTH && enemy_blue[i].ReturnEnemyX() >= 0
								&& enemy_blue[i].ReturnEnemyY() >= 0 && enemy_blue[i].ReturnEnemyY() <= HEIGHT)
							{
								enemy_blue[i].EnemyHpChange(500);
								PrintPlayerExp(DieEnemy);
								PrintLevel();
							}
						}
						for (int i = 0; i < tap_1; i++)
						{
							if (enemy_green[i].flag == 1 && enemy_green[i].ReturnEnemyX() <= WIDTH && enemy_green[i].ReturnEnemyX() >= 0
								&& enemy_green[i].ReturnEnemyY() >= 0 && enemy_green[i].ReturnEnemyY() <= HEIGHT)
							{
								enemy_green[i].EnemyHpChange(500);
								PrintPlayerExp(DieEnemy);
								PrintLevel();
							}
						}

						if (drawboss == 1 && enemy_boss.Bossflag == 1 && enemy_boss.ReturnBossX() <= WIDTH && enemy_boss.ReturnBossX() >= 0
							&& enemy_boss.ReturnBossY() >= 0 && enemy_boss.ReturnBossY() <= HEIGHT)
						{
							enemy_boss.BossHPchange(800);
							PrintPlayerExp(DieEnemy);
							PrintLevel();
						}

					}
				}
			}
		}


	}
}
//打印障碍物
void PutimageOb()
{

	putimage(Obstacle1X, Obstacle1Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle1X, Obstacle1Y, &img_obstacle_2, SRCAND);

	putimage(Obstacle2X, Obstacle2Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle2X, Obstacle2Y, &img_obstacle_2, SRCAND);

	putimage(Obstacle3X, Obstacle3Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle3X, Obstacle3Y, &img_obstacle_2, SRCAND);

	putimage(Obstacle4X, Obstacle4Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle4X, Obstacle4Y, &img_obstacle_2, SRCAND);

	putimage(Obstacle5X, Obstacle5Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle5X, Obstacle5Y, &img_obstacle_2, SRCAND);

	putimage(Obstacle6X, Obstacle6Y, &img_obstacle_1, SRCPAINT);
	putimage(Obstacle6X, Obstacle6Y, &img_obstacle_2, SRCAND);
}
//游戏介绍
void Manual()
{
	BeginBatchDraw();
	putimage(0, 0, &menun);
	putimage(910, -10, &return_21, SRCPAINT);
	putimage(910, -10, &return_22, SRCAND);
	putimage(50, 100, &board_1);
	putimage(50, 170, &board_2);
	putimage(50, 240, &board_3);
	putimage(50, 310, &board_4);
	putimage(40, 310, &BlackSpace_1, SRCPAINT);
	putimage(40, 310, &BlackSpace_2, SRCAND);

	EndBatchDraw();

	settextcolor(BLUE);//设置文字颜色
	settextstyle(40, 0, "字魂24号-镇魂手书");//设置文字风格
	setbkmode(TRANSPARENT);//设置文字背景透明
	outtextxy(100, 100, ':');
	outtextxy(100, 170, ':');
	outtextxy(100, 240, ':');
	outtextxy(100, 310, ':');
	outtextxy(110, 100, "向上移动");
	outtextxy(110, 170, "向左移动");
	outtextxy(110, 240, "向下移动");
	outtextxy(110, 310, "向右移动");
	outtextxy(220, 390, ':');
	outtextxy(230, 390, "按空格攻击");
	settextstyle(23, 0, "字魂24号-镇魂手书");//设置文字风格
	settextcolor(LIGHTRED);//设置文字颜色
	outtextxy(400, 110, "1.按空格键  :开启火焰护甲防身(怪兽靠近人物特定距离时)");
	outtextxy(400, 165, "2.空格+左键 :释放紫色剑气杀敌");
	outtextxy(400, 220, "3.空格+右键 :释放蓝色十字斩(Elf-King支持远程十字斩)");
	outtextxy(400, 275, "4.左/右shift:召唤鸣人助阵（仅限于Elf-King）");
	outtextxy(544, 330, ":释放雷霆万钧 (仅限于Death-Knight)");
	//settextcolor(YELLOW);//设置文字颜色
	outtextxy(15, 75, "操作介绍");
	outtextxy(15, 0, "游戏介绍");
	outtextxy(400, 75, "人物技能");
	settextcolor(BLACK);
	outtextxy(540, 135, "CD:0s 初始技能");
	outtextxy(540, 190, "CD:0s 购买魔剑后解锁");
	outtextxy(540, 245, "CD:D-K:0s/E-K:3s 购买屠龙刀后解锁");
	outtextxy(540, 300, "CD:8s 购买雷神之锤后解锁");
	outtextxy(540, 355, "CD:15s 购买雷神之锤后解锁");
	outtextxy(540, 410, "注:武器对任意角色都适用");
	settextcolor(GREEN);//设置文字颜色
	outtextxy(15, 490, "其他");
	outtextxy(15, 35, "22级技科大作业--类幸存者游戏.(此游戏利用easyx图形库实现)");
	outtextxy(15, 515, "游戏中的音乐(Children of the Dark)来自于QQ音乐，版权归原作者所有");
	outtextxy(15, 540, "邮箱：221900437@smail.nju.edu.cn");
	outtextxy(15, 565, "欢迎各位有想法的朋友前来交流!");
	int index = 0;
	//为什么我这里return之后不会回到主界面
	while (1)
	{
		ExMessage msg;
		if (peekmessage(&msg))
		{

			if (msg.message == WM_LBUTTONDOWN && msg.x >= 910 + 10 && msg.x <= 1010 - 10 && msg.y >= 0 && msg.y <= 90 - 10)
			{
				index = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index == 1)
			{
				putimage(910, -10, &return_21, SRCPAINT);
				putimage(910, -10, &return_23, SRCAND);
				Sleep(100);
				return;
			}
		}
	}

}
//主界面
void StartUI()
{

	int value = 0;
	int flag = 0;
	IMAGE skyCountry, start_1, start_2, start_3;
	IMAGE  SlimeHunter_1, SlimeHunter_4;

	loadimage(&skyCountry, "./res/skyCountry.jpg", WIDTH + LINEDISTANCE * 6, HEIGHT);
	loadimage(&start_1, "./res/start_1.jpg", 320, 360);
	loadimage(&start_2, "./res/start_2.jpg", 320, 360);
	loadimage(&start_3, "./res/start_3.jpg", 320, 360);

	loadimage(&SlimeHunter_1, "./res/SlimeHunter_1.jpg", 700, 150);
	loadimage(&SlimeHunter_4, "./res/SlimeHunter_4.jpg", 700, 150);


	while (1)
	{
		//print should be put in the loop in case to not be covered by other images
		BeginBatchDraw();
		putimage(0, 0, &skyCountry);//tu
		putimage(200, 50, &SlimeHunter_1, SRCPAINT);
		putimage(200, 50, &SlimeHunter_4, SRCAND);

		putimage(0, 500, &question_1, SRCPAINT);
		putimage(0, 500, &question_2, SRCAND);

		putimage(350, 400, &start_1, SRCPAINT);
		putimage(350, 400, flag ? &start_3 : &start_2, SRCAND);
		EndBatchDraw();

		ExMessage msg;
		if (peekmessage(&msg))
		{

			if (msg.message == WM_LBUTTONDOWN && msg.x >= 0 && msg.x <= 100 && msg.y >= 500 && msg.y <= 600)
			{
				value = 1;
			}
			else if (msg.message == WM_LBUTTONDOWN
				&& msg.x >= 420 && msg.x <= 600
				&& msg.y >= 510 && msg.y <= 640)
			{
				flag = 1;
			}

			else if (msg.message == WM_LBUTTONUP && flag == 1)
			{
				putimage(350, 400, flag ? &start_3 : &start_2, SRCAND);
				Sleep(100);
				flag = 0;
				return;
			}
			else if (msg.message == WM_LBUTTONUP && value == 1)
			{
				putimage(0, 500, &question_1, SRCPAINT);
				putimage(0, 500, &question_3, SRCAND);
				value = 0;
				Sleep(100);
				Manual();

			}



		}

	}


}
//局内暂停
void PauseForOperator()
{


	int index_1 = 0;
	int index_2 = 0;
	int index_3 = 0;
	int index_4 = 0;
	int index_5 = 0;
	while (1)
	{
		putimage(0, 0, &Pause);
		settextcolor(BLACK);//设置文字颜色
		settextstyle(50, 0, "字魂24号-镇魂手书");//设置文字风格
		setbkmode(TRANSPARENT);
		outtextxy(400, 100, "继续游戏");
		outtextxy(400, 170 + 10, "打开音乐");
		outtextxy(400, 240 + 10, "关闭音乐");
		outtextxy(400, 310 + 10, "返回主菜单");
		outtextxy(400, 380 + 10, "退出游戏");
		FlushBatchDraw();//这个函数是刷新缓冲区，不然文字，图像不会显示，还会卡住

		ExMessage msg;

		if (peekmessage(&msg))
		{

			if (msg.message == WM_LBUTTONDOWN && msg.x >= 400 && msg.x <= 600 && msg.y >= 100 && msg.y <= 150)
			{
				index_1 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_1 == 1)
			{
				index_1 = 0;
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 400 && msg.x <= 600 && msg.y >= 170 + 10 && msg.y <= 220 + 10)
			{
				index_2 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_2 == 1)
			{
				index_2 = 0;
				play = 1;
				Music();
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 400 && msg.x <= 600 && msg.y >= 240 + 10 && msg.y <= 290 + 10)
			{
				index_3 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_3 == 1)
			{
				index_3 = 0;
				play = 0;
				Music();
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 400 && msg.x <= 600 && msg.y >= 310 + 10 && msg.y <= 360 + 10)
			{
				index_4 = 1;

			}
			else if (msg.message == WM_LBUTTONUP && index_4 == 1)
			{
				index_4 = 0;
				game = 3;
				ChooseToReturnMenu();
				return;
			}
			else if (msg.message == WM_LBUTTONDOWN && msg.x >= 400 && msg.x <= 600 && msg.y >= 380 + 10 && msg.y <= 430 + 10)
			{
				index_5 = 1;
			}
			else if (msg.message == WM_LBUTTONUP && index_5 == 1)
			{
				index_5 = 0;
				FileSaveSystem();
				exit(EXIT_SUCCESS);
			}
			else;

		}
	}

}
//背包
void Bag()
{
	int reindex = 0;
	while (1)
	{
		//please pay attition to the order of the putimage
		putimage(0, 0, &abilityUI);
		putimage(910, 0, &returnPlay_1, SRCPAINT);
		putimage(910, 0, &returnPlay_2, SRCAND);

		settextcolor(BLACK);//设置文字颜色
		settextstyle(30, 0, "字魂24号-镇魂手书");//设置文字风格
		setbkmode(TRANSPARENT);//设置文字背景透明
		outtextxy(200, 300, "一本神奇的书，但是现在上面好像什么也没有。");


		FlushBatchDraw();
		ExMessage msg;
		if (peekmessage(&msg))
		{

			if (msg.message == WM_LBUTTONDOWN && msg.x >= 910 + 10 && msg.x <= 1000 - 10 && msg.y >= 0 + 10 && msg.y <= 100 - 10)
			{

				reindex = 1;
			}
			else if (msg.message == WM_LBUTTONUP && reindex == 1)
			{
				putimage(910, 0, &returnPlay_1, SRCPAINT);
				putimage(910, 0, &returnPlay_3, SRCAND);

				// and then go into the start	
				reindex = 0;
				Sleep(100);
				return;

			}
		}

	}

}
//局内操作函数
void PutGameCursor()
{

	putimage(900, 400, &bag_1, SRCPAINT);
	putimage(900, 400, &bag_2, SRCAND);

	putimage(880, 220, &medicineHP_1, SRCPAINT);
	putimage(880, 220, &medicineHP_2, SRCAND);

	putimage(940, 220, &medicinePP_1, SRCPAINT);
	putimage(940, 220, &medicinePP_2, SRCAND);

	putimage(910, 340, &money_1, SRCPAINT);
	putimage(910, 340, &money_2, SRCAND);

	putimage(970, 340, &soul_1, SRCPAINT);
	putimage(970, 340, &soul_3, SRCAND);

	putimage(960, 0, &pause_1, SRCPAINT);
	putimage(960, 0, &pause_2, SRCAND);

	putimage(910, 500, &save_1, SRCPAINT);
	putimage(910, 500, &save_2, SRCAND);




	ExMessage msg_2;
	if (peekmessage(&msg_2))
	{

		if (msg_2.message == WM_LBUTTONDOWN && msg_2.x >= 960 && msg_2.x <= 1010 && msg_2.y >= 0 && msg_2.y <= 50)
		{
			Pauseindex = 1;
		}
		else if (msg_2.message == WM_LBUTTONUP && Pauseindex == 1)
		{
			Pauseindex = 0;
			putimage(960, 0, &pause_1, SRCPAINT);
			putimage(960, 0, &pause_3, SRCAND);
			Sleep(100);

			PauseForOperator();

			return;
		}
		else if (msg_2.message == WM_LBUTTONDOWN && msg_2.x >= 880 + 10 && msg_2.x <= 980 - 10 && msg_2.y >= 220 + 10 && msg_2.y <= 320 - 10)
		{
			HPindex = 1;
		}
		else if (msg_2.message == WM_LBUTTONUP && HPindex == 1)
		{
			HPindex = 0;
			putimage(880, 220, &medicineHP_1, SRCPAINT);
			putimage(880, 220, &medicineHP_3, SRCAND);
			Sleep(100);
			if (playerIndex == 1)
			{
				player_1.HpBottleChange();
			}
			else if (playerIndex == 2)
			{
				player_2.HpBottleChange();
			}
			else;
			return;
		}

		else if (msg_2.message == WM_LBUTTONDOWN && msg_2.x >= 910 + 10 && msg_2.x <= 1010 - 10 && msg_2.y >= 500 + 10 && msg_2.y <= 600 - 10)
		{
			Saveindex = 1;
		}
		else if (msg_2.message == WM_LBUTTONUP && Saveindex == 1)
		{
			Saveindex = 0;
			putimage(910, 500, &save_1, SRCPAINT);
			putimage(910, 500, &save_3, SRCAND);
			Sleep(100);
			FileSaveSystem();
		}
		else if (msg_2.message == WM_LBUTTONDOWN && msg_2.x >= 900 + 10 && msg_2.x <= 1000 - 10 && msg_2.y >= 400 + 10 && msg_2.y <= 500 - 10)
		{
			bagIndex = 1;
		}
		else if (msg_2.message == WM_LBUTTONUP && bagIndex == 1)
		{
			bagIndex = 0;
			putimage(900, 400, &bag_1, SRCPAINT);
			putimage(900, 400, &bag_3, SRCAND);
			Sleep(100);
			Bag();

		}
	}


}
//蓝色史莱姆的拾取函数
bool PickUP_BLUE(int i)
{
	int d = 0;

	if (playerIndex == 1)
	{
		if (player_1.ReturnPlayerX() >= enemy_blue[i].ReturnEnemyX() - PlayerWidth / 2 && player_1.ReturnPlayerX() <= enemy_blue[i].ReturnEnemyX() + 100 - PlayerWidth / 2
			&& player_1.ReturnPlayerY() >= enemy_blue[i].ReturnEnemyY() - PlayerHeight / 2 && player_1.ReturnPlayerY() <= enemy_blue[i].ReturnEnemyY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}
	else if (playerIndex == 2)
	{
		if (player_2.ReturnPlayerX() >= enemy_blue[i].ReturnEnemyX() - PlayerWidth / 2 && player_2.ReturnPlayerX() <= enemy_blue[i].ReturnEnemyX() + 100 - PlayerWidth / 2
			&& player_2.ReturnPlayerY() >= enemy_blue[i].ReturnEnemyY() - PlayerHeight / 2 && player_2.ReturnPlayerY() <= enemy_blue[i].ReturnEnemyY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}


	if (d == 1)return true;
	else return false;
}
//绿色史莱姆的拾取函数
bool PickUP_GREEN(int i)
{
	int d = 0;

	if (playerIndex == 1)
	{
		if (player_1.ReturnPlayerX() >= enemy_green[i].ReturnEnemyX() - PlayerWidth / 2 && player_1.ReturnPlayerX() <= enemy_green[i].ReturnEnemyX() + 100 - PlayerWidth / 2
			&& player_1.ReturnPlayerY() >= enemy_green[i].ReturnEnemyY() - PlayerHeight / 2 && player_1.ReturnPlayerY() <= enemy_green[i].ReturnEnemyY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}
	else if (playerIndex == 2)
	{
		if (player_2.ReturnPlayerX() >= enemy_green[i].ReturnEnemyX() - PlayerWidth / 2 && player_2.ReturnPlayerX() <= enemy_green[i].ReturnEnemyX() + 100 - PlayerWidth / 2
			&& player_2.ReturnPlayerY() >= enemy_green[i].ReturnEnemyY() - PlayerHeight / 2 && player_2.ReturnPlayerY() <= enemy_green[i].ReturnEnemyY() + 100 - PlayerHeight / 2)
		{
			d = 1;

		}
	}


	if (d == 1)return true;
	else return false;
}
//打印敌人
void PaintEnemy()
{
	//blue
	if (tap < EnemyNum) {
		for (int i = 0; i < tap; i++)
		{//原来的
			if (enemy_blue[i].flag == 1)
			{
				putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &img_enemy_b_1, SRCPAINT);
				putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &img_enemy_b_2, SRCAND);

				setfillcolor(RED);
				fillrectangle(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY() - LINEDISTANCE / 4, enemy_blue[i].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_blue[i].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_blue[i].ReturnEnemyY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(enemy_blue[i].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_blue[i].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_blue[i].ReturnEnemyY() - LINEDISTANCE / 4, enemy_blue[i].ReturnEnemyX() + EnemyWidth, enemy_blue[i].ReturnEnemyY());

				enemy_blue[i].EnemyPosition();




			}
			else {

				if (enemy_blue[i].ReturnEnemyDrop() == 0)//p=1/8
				{
					if (!enemy_blue[i].ReturnIndex())//don't be picked
					{

						if (PickUP_BLUE(i))
						{
							enemy_blue[i].ChangeIndex();//int the ground
							//player upuupup
							if (playerIndex == 1)
							{
								player_1.SoulChange(1);
								player_1.MoneyChange(1);
							}
							else if (playerIndex == 2)
							{
								player_2.SoulChange(1);
								player_2.MoneyChange(1);
							}

						}
						else {
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &money_1, SRCPAINT);
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &money_2, SRCAND);

							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_1, SRCPAINT);
							//	putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_2, SRCAND);
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_3, SRCAND);


						}
					}

				}
				else if (enemy_blue[i].ReturnEnemyDrop() == 1 || enemy_blue[i].ReturnEnemyDrop() == 2)
				{
					if (!enemy_blue[i].ReturnIndex())//don't be picked
					{

						if (PickUP_BLUE(i))
						{
							enemy_blue[i].ChangeIndex();//int the ground
							if (playerIndex == 1)
							{
								player_1.SoulChange(1);

							}
							else if (playerIndex == 2)
							{
								player_2.SoulChange(1);

							}


						}
						else {
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_1, SRCPAINT);
							//	putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_2, SRCAND);
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_3, SRCAND);
						}
					}
				}
				else if (enemy_blue[i].ReturnEnemyDrop() >= 3 && enemy_blue[i].ReturnEnemyDrop() <= 6)
				{
					if (!enemy_blue[i].ReturnIndex())//don't be picked
					{

						if (PickUP_BLUE(i))
						{
							enemy_blue[i].ChangeIndex();//int the ground
							if (playerIndex == 1)
							{
								player_1.MoneyChange(1);

							}
							else if (playerIndex == 2)
							{
								player_2.MoneyChange(1);

							}

						}
						else {
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &money_1, SRCPAINT);
							putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &money_2, SRCAND);

						}

					}
				}
				else;


			}

		}
	}
	//green
	if (tap_1 < EnemyNum) {
		for (int i = 0; i < tap_1; i++)
		{//原来的
			if (enemy_green[i].flag == 1)
			{
				putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &img_enemy_g_1, SRCPAINT);
				putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &img_enemy_g_2, SRCAND);

				setfillcolor(RED);
				fillrectangle(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY() - LINEDISTANCE / 4, enemy_green[i].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_green[i].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_green[i].ReturnEnemyY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(enemy_green[i].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_green[i].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_green[i].ReturnEnemyY() - LINEDISTANCE / 4, enemy_green[i].ReturnEnemyX() + EnemyWidth, enemy_green[i].ReturnEnemyY());

				enemy_green[i].EnemyPosition();



				if (enemy_green[i].ReturnBufferLiveNum() < 200)
				{
					if (sign % 400 == 0)
					{
						enemy_green[i].PlusLiveBufferNum();
					}

					enemy_green[i].ability();
				}


			}
			else {

				if (enemy_green[i].ReturnEnemyDrop() == 0)
				{
					if (!enemy_green[i].ReturnIndex())//don't be picked
					{

						if (PickUP_GREEN(i))//be picked
						{
							enemy_green[i].ChangeIndex();//int the ground
							//player upuupup
							if (playerIndex == 1)
							{
								player_1.SoulChange(1);
								player_1.MoneyChange(1);
							}
							else if (playerIndex == 2)
							{
								player_2.SoulChange(1);
								player_2.MoneyChange(1);
							}

						}
						else {
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &money_1, SRCPAINT);
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &money_2, SRCAND);

							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &soul_1, SRCPAINT);
							//	putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_2, SRCAND);
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &soul_3, SRCAND);
						}
					}

				}
				else if (enemy_green[i].ReturnEnemyDrop() == 1)
				{
					if (!enemy_green[i].ReturnIndex())//don't be picked
					{

						if (PickUP_GREEN(i))
						{
							enemy_green[i].ChangeIndex();//int the ground
							if (playerIndex == 1)
							{
								player_1.SoulChange(1);

							}
							else if (playerIndex == 2)
							{
								player_2.SoulChange(1);

							}


						}
						else {
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &soul_1, SRCPAINT);
							//	putimage(enemy_blue[i].ReturnEnemyX(), enemy_blue[i].ReturnEnemyY(), &soul_2, SRCAND);
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &soul_3, SRCAND);
						}
					}
				}
				else if (enemy_green[i].ReturnEnemyDrop() == 2)
				{
					if (!enemy_green[i].ReturnIndex())//don't be picked
					{

						if (PickUP_GREEN(i))
						{
							enemy_green[i].ChangeIndex();//int the ground
							if (playerIndex == 1)
							{
								player_1.MoneyChange(1);

							}
							else if (playerIndex == 2)
							{
								player_2.MoneyChange(1);

							}

						}
						else {
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &money_1, SRCPAINT);
							putimage(enemy_green[i].ReturnEnemyX(), enemy_green[i].ReturnEnemyY(), &money_2, SRCAND);

						}

					}
				}
				else;
			}
		}
	}

	if (playerIndex == 2)  Player_2ability();


	if (sign % 400 == 0)
	{//新的  pay attation every 1 second develop an enemy,Num is 400,it enough

		putimage(enemy_blue[tap].ReturnEnemyX(), enemy_blue[tap].ReturnEnemyY(), &img_enemy_b_1, SRCPAINT);
		putimage(enemy_blue[tap].ReturnEnemyX(), enemy_blue[tap].ReturnEnemyY(), &img_enemy_b_2, SRCAND);
		setfillcolor(RED);
		fillrectangle(enemy_blue[tap].ReturnEnemyX(), enemy_blue[tap].ReturnEnemyY() - LINEDISTANCE / 4, enemy_blue[tap].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_blue[tap].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_blue[tap].ReturnEnemyY());
		setfillcolor(LIGHTGRAY);
		fillrectangle(enemy_blue[tap].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_blue[tap].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_blue[tap].ReturnEnemyY() - LINEDISTANCE / 4, enemy_blue[tap].ReturnEnemyX() + EnemyWidth, enemy_blue[tap].ReturnEnemyY());
		enemy_blue[tap].EnemyPosition();
		tap++;

	}

	if (sign % 600 == 0)
	{
		putimage(enemy_green[tap_1].ReturnEnemyX(), enemy_green[tap_1].ReturnEnemyY(), &img_enemy_g_1, SRCPAINT);
		putimage(enemy_green[tap_1].ReturnEnemyX(), enemy_green[tap_1].ReturnEnemyY(), &img_enemy_g_2, SRCAND);

		setfillcolor(RED);
		fillrectangle(enemy_green[tap_1].ReturnEnemyX(), enemy_green[tap_1].ReturnEnemyY() - LINEDISTANCE / 4, enemy_green[tap_1].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_green[tap_1].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_green[tap_1].ReturnEnemyY());
		setfillcolor(LIGHTGRAY);
		fillrectangle(enemy_green[tap_1].ReturnEnemyX() + EnemyWidth - ((EnemyHP - enemy_green[tap_1].ReturnEnemyHp()) * EnemyWidth) / EnemyHP, enemy_green[tap_1].ReturnEnemyY() - LINEDISTANCE / 4, enemy_green[tap_1].ReturnEnemyX() + EnemyWidth, enemy_green[tap_1].ReturnEnemyY());
		enemy_green[tap_1].EnemyPosition();
		if (enemy_green[tap_1].ReturnBufferLiveNum() < 200)
		{
			if (sign % 400 == 0)
			{
				enemy_green[tap_1].PlusLiveBufferNum();
			}
			enemy_green[tap_1].ability();
		}
		tap_1++;
	}
	if (drawboss == 1)
	{

		DrawBoss();

	}

	if (tap >= EnemyNum / 2)
	{
		for (int i = 0; i < tap; i++)
		{
			if (enemy_blue[i].flag == 0)
			{
				enemy_blue[i].SetEnemyAggressivity(EnemyAggressivity);
				enemy_blue[i].SetEnemyHP(EnemyHP);
				enemy_blue[i].SetEnemyMoveSpeed(EnemyMoveSpeed);
				enemy_blue[i].SetEnemyPosition();
				enemy_blue[i].SetEnemyDrop();
				enemy_blue[i].SetEnemyFlag();
				enemy_blue[i].SetEnemyIndex();
			}
		}
	}
	if (tap_1 >= EnemyNum / 2)
	{

		for (int i = 0; i < tap_1; i++)
		{
			if (enemy_green[i].flag == 0)
			{
				enemy_green[i].SetAttack();
				enemy_green[i].SetEnemyAggressivity(EnemyAggressivity * 5);
				enemy_green[i].SetEnemyHP(EnemyHP);
				enemy_green[i].SetEnemyMoveSpeed(EnemyMoveSpeed);
				enemy_green[i].SetEnemyPosition();
				enemy_green[i].SetEnemyDrop();
				enemy_green[i].SetEnemyFlag();
				enemy_green[i].SetEnemyIndex();
				enemy_green[i].SetBuffer();
				enemy_green[i].SetEnemyDx();
				enemy_green[i].SetEnemyDy();
				enemy_green[i].SetgetGreenxy();
			}

		}
	}
}
//画出人物血条
void DrawPlayerHpLine()
{
	//还存在问题

	if (IfGetTheFile == 1)
	{
		if (whatplayer == 1)
		{
			if (playerIndex == 1)
			{
				setfillcolor(LIGHTGREEN);
				fillrectangle(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth - ((sHP - player_1.ReturnPlayerHP()) * PlayerWidth) / sHP, player_1.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_1.ReturnPlayerX() + PlayerWidth - ((sHP - player_1.ReturnPlayerHP()) * PlayerWidth) / sHP, player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth, player_1.ReturnPlayerY());


			}
			else if (playerIndex == 2)
			{

				setfillcolor(LIGHTRED);
				fillrectangle(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth, player_2.ReturnPlayerY());

			}


		}
		else if (whatplayer == 2)
		{
			if (playerIndex == 1)
			{
				setfillcolor(LIGHTGREEN);
				fillrectangle(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth, player_1.ReturnPlayerY());

			}
			else if (playerIndex == 2)
			{
				setfillcolor(LIGHTRED);
				fillrectangle(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth - ((sHP - player_2.ReturnPlayerHP()) * PlayerWidth) / sHP, player_2.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_2.ReturnPlayerX() + PlayerWidth - ((sHP - player_2.ReturnPlayerHP()) * PlayerWidth) / sHP, player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth, player_2.ReturnPlayerY());

			}



		}
		else if (whatplayer == 0)
		{
			if (playerIndex == 1) {
				setfillcolor(LIGHTGREEN);
				fillrectangle(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth, player_1.ReturnPlayerY());

			}
			else if (playerIndex == 2)
			{

				setfillcolor(LIGHTRED);
				fillrectangle(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY());
				setfillcolor(LIGHTGRAY);
				fillrectangle(player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth, player_2.ReturnPlayerY());

			}
		}
	}
	else
	{
		if (playerIndex == 1) {
			setfillcolor(LIGHTGREEN);
			fillrectangle(player_1.ReturnPlayerX(), player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY());
			setfillcolor(LIGHTGRAY);
			fillrectangle(player_1.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_1.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_1.ReturnPlayerY() - LINEDISTANCE / 2, player_1.ReturnPlayerX() + PlayerWidth, player_1.ReturnPlayerY());

		}
		else if (playerIndex == 2)
		{

			setfillcolor(LIGHTRED);
			fillrectangle(player_2.ReturnPlayerX(), player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY());
			setfillcolor(LIGHTGRAY);
			fillrectangle(player_2.ReturnPlayerX() + PlayerWidth - ((PlayerHP - player_2.ReturnPlayerHP()) * PlayerWidth) / PlayerHP, player_2.ReturnPlayerY() - LINEDISTANCE / 2, player_2.ReturnPlayerX() + PlayerWidth, player_2.ReturnPlayerY());

		}

	}
}
//玩家移动改变样貌
void ControlPlayerMove()
{
	if (!(GetAsyncKeyState(VK_LEFT)) && !(GetAsyncKeyState(VK_UP)) && !(GetAsyncKeyState(VK_RIGHT)) && !(GetAsyncKeyState(VK_DOWN)))
	{
		playerDirection = 0;
		if (playerIndex == 1)
		{
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdleft_1, SRCPAINT);
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdleft_2, SRCAND);

		}
		else if (playerIndex == 2)
		{
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddnessleft_1, SRCPAINT);
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddnessleft_2, SRCAND);

		}
	}


	if (GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState(VK_UP) || GetAsyncKeyState(VK_DOWN))
	{
		playerDirection = 0;
		if (playerIndex == 1)
		{
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdleft_1, SRCPAINT);
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdleft_2, SRCAND);

		}
		else if (playerIndex == 2)
		{
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddnessleft_1, SRCPAINT);
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddnessleft_2, SRCAND);

		}
	}

	else if (GetAsyncKeyState(VK_RIGHT))
	{
		playerDirection = 1;
		if (playerIndex == 1)
		{
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdright_1, SRCPAINT);
			putimage(player_1.ReturnPlayerX(), player_1.ReturnPlayerY(), &img_hdright_2, SRCAND);

		}
		else if (playerIndex == 2)
		{
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddness_1, SRCPAINT);
			putimage(player_2.ReturnPlayerX(), player_2.ReturnPlayerY(), &goddness_2, SRCAND);

		}

	}

}
//打印图片主函数
void PaintPicture() {

	cleardevice();//刷新

	if (map == 0)
	{
		//putimage(0, 0, &star);
		putimage(mapX, mapY, &MAllstar);
		DrawLine();//画格子
	}
	else if (map == 1)
	{
		//putimage(0, 0, &mountion);
		putimage(mapX, mapY, &Allmountion);
	}
	putimage(WIDTH, 0, &Allgrass);
	DrawObstacleRange();
	//draw in the same position    
	//透明绘图  两张照片  黑（白）底白（黑）面（背景图）SRCPAINT
	//                    白底彩面（遮罩图）（掩码图）SRCAND
	PutimageOb();
	PaintWord();//输出文字
	PaintTime();//panit time
	PaintEnemy();
	DrawPlayerHpLine();
	PrintPlayerExp(DieEnemy);
	PrintLevel();
	ControlPlayerMove();

	if (Timer(20, 0))//一般移动用定时器来实现
	{
		KeyDown_1();//异步,比较流畅，再加上时间处理就更好了
	}
	PutGameCursor();
	FlushBatchDraw();//显示每一帧	
}

int main(void) {
	initgraph(WIDTH + LINEDISTANCE * 6, HEIGHT);
	srand(time(0));
	DrawGameCursor();
	SetBackground();//背景
	DrawObstacle();//障碍物
	LoadMyhd();//人
	DrawEnemy();
	StartUI();//初始界面	
	//load picture
	 //存档界面
	ChoosePlayer();//选择人物
	ChooseScreen();
	Music();//放音乐	 
	while (1) {
		BeginBatchDraw();//开始在内存中绘制图像，进入双缓冲
		//画好后再移到这里，避免由于先后顺序带来的一闪一闪			
		PaintPicture();
		sign++;//调控时间
		Sleep(5);//（阻塞函数）注销以后可能会比较流畅，因为可能会阻塞整个程序，在操作中会比较卡
		EndBatchDraw();//结束绘制，将绘制后的完整图像输出到窗口
	}
	closegraph();
	return 0;
}