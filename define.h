#pragma once
#define WIDTH 900
#define HEIGHT 600
#define LINEDISTANCE 20
//player   hp%80=0

#define HPnumber 100
#define Attacknum 2
#define Speednum 1

#define Player_2BufferAttack 50

#define PlayerHP (800+hpnumber*100)
#define PlayerHPadd 50

#define PlayerAggressivity 10
#define PlayerMoveSpeed 8
//enemy
#define EnemyHP 400
#define EnemyAggressivity 4
#define EnemyMoveSpeed 1
#define EnemyAttackDistance 40

#define BossEnemyHP 4000
#define BossEnemyAggressivity 50
#define BossEnemyMoveSpeed 1
#define BossEnemyAttackDistance 80





#define PlayerInitPositionX WIDTH / 2 - LINEDISTANCE * 2
#define PlayerInitPositionY HEIGHT / 2 - LINEDISTANCE * 2

#define Obstacle1X WIDTH / 3 - LINEDISTANCE*3
#define Obstacle1Y HEIGHT / 3 - LINEDISTANCE*3
#define Obstacle2X WIDTH / 3 * 2
#define Obstacle2Y HEIGHT / 3 * 2 
#define Obstacle3X WIDTH / 3 - LINEDISTANCE*3
#define Obstacle3Y HEIGHT / 3 * 2 
#define Obstacle4X WIDTH / 3 * 2 
#define Obstacle4Y HEIGHT / 3 - LINEDISTANCE*3
#define Obstacle5X WIDTH / 6 - LINEDISTANCE *3
#define Obstacle5Y HEIGHT / 2-LINEDISTANCE*2
#define Obstacle6X WIDTH /6 * 5
#define Obstacle6Y HEIGHT /2-LINEDISTANCE*2

#define Obstacle1_LeftLimit Obstacle1X
#define Obstacle1_RightLimit Obstacle1X+LINEDISTANCE*3
#define Obstacle2_LeftLimit Obstacle2X
#define Obstacle2_RightLimit Obstacle2X+LINEDISTANCE*3
#define Obstacle3_LeftLimit Obstacle3X
#define Obstacle3_RightLimit Obstacle3X+LINEDISTANCE*3
#define Obstacle4_LeftLimit Obstacle4X
#define Obstacle4_RightLimit Obstacle4X+LINEDISTANCE*3
#define Obstacle5_LeftLimit Obstacle5X
#define Obstacle5_RightLimit Obstacle5X+LINEDISTANCE*3
#define Obstacle6_LeftLimit Obstacle6X
#define Obstacle6_RightLimit Obstacle6X+LINEDISTANCE*3


#define Obstacle1_UpperLimit Obstacle1Y+LINEDISTANCE*3
#define Obstacle1_BelowLimit Obstacle1Y
#define Obstacle2_UpperLimit Obstacle2Y+LINEDISTANCE*3
#define Obstacle2_BelowLimit Obstacle2Y
#define Obstacle3_UpperLimit Obstacle3Y+LINEDISTANCE*3
#define Obstacle3_BelowLimit Obstacle3Y
#define Obstacle4_UpperLimit Obstacle4Y+LINEDISTANCE*3
#define Obstacle4_BelowLimit Obstacle4Y
#define Obstacle5_UpperLimit Obstacle5Y+LINEDISTANCE*3
#define Obstacle5_BelowLimit Obstacle5Y
#define Obstacle6_UpperLimit Obstacle6Y+LINEDISTANCE*3
#define Obstacle6_BelowLimit Obstacle6Y

#define PlayNum 2
#define EnemyNum 300
#define DieEnemyExp 16
#define EnemyWidth LINEDISTANCE * 4
#define EnemyHeight LINEDISTANCE * 3
#define PlayerWidth LINEDISTANCE * 4
#define PlayerHeight LINEDISTANCE * 4
#define ObstacleWidth LINEDISTANCE * 3
#define ObstacleHeight LINEDISTANCE * 3
#define XYDISTANCE LINEDISTANCE

#define PlayerEnemyXD ((player_1.ReturnPlayerX() + PlayerWidth / 2) - (x + EnemyWidth / 2))
#define PlayerEnemyYD ((player_1.ReturnPlayerY() + PlayerHeight / 2) - (y + EnemyHeight / 2))
#define PlayerBossXD (player_1.ReturnPlayerX()- bossx )
#define Player_2BossXD (player_2.ReturnPlayerX()- bossx )


#define Player2EnemyXD ((player_2.ReturnPlayerX() + PlayerWidth / 2) - (x + EnemyWidth / 2))
#define Player2EnemyYD ((player_2.ReturnPlayerY() + PlayerHeight / 2) - (y + EnemyHeight / 2))
#define PlayerBossYD ((player_1.ReturnPlayerY() + PlayerHeight / 2) - (bossy + EnemyHeight/2))
#define Player_2BossYD ((player_2.ReturnPlayerY() + PlayerHeight / 2) - (bossy + EnemyHeight/2))



#define PEheartDistanceX ((PlayerWidth + EnemyWidth) / 2)
#define PEheartDistanceY ((PlayerHeight + EnemyHeight) / 2)
#define PEheartBossDistanceX ((PlayerWidth + EnemyWidth) / 2)
#define PEheartBossDistanceY ((PlayerHeight + EnemyHeight*2) / 2)

#define PEheartDistanceX_2p ((PlayerWidth + EnemyWidth) )
#define PEheartDistanceY_2p ((PlayerHeight + EnemyHeight) )


#define Moneynum_1 1+Moneynumber_1


