#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
//#include <MMsystem.h>

class Eff {
	private:
		int chance;
		int out;
	public:
		void setChance (int C) {
			chance = C;
		}
		int getChance () {
			return chance;
	    }
	    int random () {
	    	srand(time(NULL));
	    	Sleep(1000);
	    	out = rand() % 10 + 1;
			return out;
		}
};

class EnemyHeroAttack {
	private:
		int HeroChance;
		int HeroOut;
	public:
		void setHeroChance (int HC) {
			HeroChance = HC;
		}
		int getHeroChance () {
			return HeroChance;
	    }
		int BossRandom() {
			srand(time(NULL));
			Sleep(1000);
	    	HeroOut = rand() % 4 + 1;
			return HeroOut;
		}
};

class Warrior {
	private:
		std :: string WarName;
		int WarDmgChance;
		int WarDmg;
		bool WarAlive;
		
    public:
    	void SetWarName () {
    		std :: cin >> WarName;
		}
		std :: string GetWarName() {
			return WarName;
		}
		int SetWarDmgChance (int SWDC) {
			WarDmgChance = SWDC;
		}
		int GetWarDmgChance () {
			return WarDmgChance;
		}
		int SetWarDmg (int WD) {
			WarDmg = WD;
		}
		int GetWarDmg () {
			return WarDmg;
		}
		bool SetWarAlive (bool SWA) {
			WarAlive = SWA;
		}
		bool GetWarAlive () {
			return WarAlive;
		}
};

class Thief {
	private:
		std :: string ThName;
		int ThDmgChance;
		int ThDmg;
		bool ThAlive;
		
    public:
    	void SetThName () {
    		std :: cin >> ThName;
		}
		std :: string GetThName() {
			return ThName;
		}
		int SetThDmgChance (int STDC) {
			ThDmgChance = STDC;
		}
		int GetThDmgChance () {
			return ThDmgChance;
		}
		int SetThDmg (int TD) {
			ThDmg = TD;
		}
		int GetThDmg () {
			return ThDmg;
		}
		bool SetThAlive (bool STA) {
			ThAlive = STA;
		}
		bool GetThAlive () {
			return ThAlive;
		}
};

class LightMage {
	private:
		std :: string LMName;
		int LMHealChance;
		int LMHeal;
		bool LMAlive;
		
    public:
    	void SetLMName () {
    		std :: cin >> LMName;
		}
		std :: string GetLMName() {
			return LMName;
		}
		int SetLMHealChance (int SLMDC) {
			LMHealChance = SLMDC;
		}
		int GetLMHealChance () {
			return LMHealChance;
		}
		int SetLMHeal (int LMHe) {
			LMHeal = LMHe;
		}
		int GetLMHeal () {
			return LMHeal;
		}
		bool SetLMAlive (bool SLA) {
			LMAlive = SLA;
		}
		bool GetLMAlive () {
			return LMAlive;
		}
};

class DarkMage {
	private:
		std :: string DMName;
		int DMBuffChance;
		int DMB;
		bool BuffOn;
		bool DMAlive;
		
    public:
    	void SetDMName () {
    		std :: cin >> DMName;
		}
		std :: string GetDMName() {
			return DMName;
		}
		int SetDMBuffChance (int SDMDC) {
			DMBuffChance = SDMDC;
		}
		int GetDMBuffChance () {
			return DMBuffChance;
		}
		int SetDMBuff (int Buff) {
			DMB = Buff;
		}
		int GetDMBuff () {
			return DMB;
		}
		bool SetDMAlive (bool SDA) {
			DMAlive = SDA;
		}
		bool GetDMAlive () {
			return DMAlive;
		}
};

class Boss {
	private:
		std :: string BossName;
		int BossDmg;
		int BossDmgChance;
		bool BossMove;
		int BossHeroPicker;
		int BossAC;
		bool BossEncounter;
		bool BossAlive;
		
	public:
	    void SetBossName (std :: string BN) {
	    	BossName = BN;
		}
		std :: string getBossName () {
			return BossName;
		}
		bool setBossMove (bool SBM) {
			BossMove = SBM;
		}
		bool getBossMove () {
			return BossMove;
		}
		int setBossAttackCounter(double BAC) {
			BossAC = BAC;
		}
		int getBossAttackCounter() {
			return BossAC;
		}
		int SetBossDmgChance (int SBDC) {
			BossDmgChance = SBDC;
		}
		int GetBossDmgChance () {
			return BossDmgChance;
		}
		int SetBossDmg (int BD) {
			BossDmg = BD;
		}
		int GetBossDmg () {
			return BossDmg;
		}
		int setHeroPicker (int SHP) {
			BossHeroPicker = SHP;
		}
		int getHeroPicker () {
			return BossHeroPicker;
		}
		bool setBossEncounter (bool SBE) {
			BossEncounter = SBE;
		}
		bool getBossEncounter () {
			return BossEncounter;
		}
		bool setBossAlive (bool BA) {
			BossAlive = BA;
		}
		bool getBossAlive () {
			return BossAlive;
		}
};

void EncouterChoice (class Warrior, class Thief, class LightMage, class DarkMage, class Eff, class Boss, class EnemyHeroAttack);
void BattleChoice (class Warrior, class Thief, class LightMage, class DarkMage, class Eff, class Boss, class EnemyHeroAttack);
void WarriorAttack (class Warrior, class DarkMage, class Thief, class LightMage, class Eff, class Boss);
void ThiefAttack (class Thief, class DarkMage, class Warrior, class LightMage, class Eff, class Boss);
void LightMageHeal (class LightMage, class Warrior, class Thief, class DarkMage, class Eff);
void DarkMageBuff (class DarkMage, class Warrior, class Thief, class LightMage, class Eff);
void BossAttack (class Boss, class Warrior, class Thief, class LightMage, class DarkMage, class Eff, class EnemyHeroAttack);
void BossAttackHero (class Boss, class Warrior, class Thief, class LightMage, class DarkMage, class Eff, class EnemyHeroAttack);
void BATTLESTATUS (class Warrior, class Thief, class LightMage, class DarkMage);

int WarHp = 1500, ThHp = 1000, LMHp = 500, DMHp = 750, BossHp = 5000;
int xDMBuff;
bool DMBuffOn;
//value of DarkMage's buff duration
int DMBuffDuration = 0;
//conts how many timed the heros have moved
int HEROMOVE = 0;
//bool WARALIVE;

std :: ifstream draft;
std :: ofstream drafts;

int main () {
	
    //Enemy hero picker
	EnemyHeroAttack d4;
	d4.setHeroChance(4);
	
	//public attack dice
	Eff d10;
	d10.setChance(10);
	
	Warrior P1;
	P1.SetWarAlive(true);
	P1.SetWarDmg(0);
		
	Thief P2;
	P2.SetThAlive(true);
	P2.SetThDmg(0);
	
	LightMage P3;
	P3.SetLMAlive(true);
	P3.SetLMHeal(0);
	
    DarkMage P4;
    P4.SetDMAlive(true);
    DMBuffOn = false;

	
	Boss Fluffy;
	Fluffy.SetBossName("Fluffy");
	Fluffy.setBossMove(false);
	Fluffy.setBossEncounter(false);
	Fluffy.setBossAlive(true);
    
    //LOGO
    draft.open("logoscreen.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	draft.close();
	std :: cout << "\n"<< "\n";
	
	std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
	std :: cin.get();
	system("cls");

	std :: cout << "Name your warrior" << "\n";
	P1.SetWarName();
	std :: cout << "\n";
	
	std :: cout << "Name your Thief" << "\n";
	P2.SetThName();
	std :: cout << "\n";
	
	std :: cout << "Name your LightMage" << "\n";
	P3.SetLMName();
	std :: cout << "\n";
	
	std :: cout << "Name your DarkMage" << "\n";
	P4.SetDMName();
	std :: cout << "\n";
	
//	std :: cout << "MINION ENCOUNTER!" << "\n";
	    
	
	std :: cout << "!WARNING BOSS!" << "\n" << "\n";
	std :: cin.ignore();
	std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
	std :: cin.get();
	Fluffy.setBossEncounter(true);
	system("cls");
	    
//	for (int i = 1; i < BossHp; i++) {
//	    EncouterChoice(P1, P2, P3, P4, d10, Fluffy, d4);  
//	}
	while (Fluffy.getBossAlive() == true) {
		 EncouterChoice(P1, P2, P3, P4, d10, Fluffy, d4);  
	}
	
}

//encountered an enemy
void EncouterChoice (Warrior P1, Thief P2, LightMage P3, DarkMage P4, Eff d10, Boss Fluffy, EnemyHeroAttack d4) {
	char CC;
	
//	if (PreBossEncounter == true) {
//	    for (int i = 1; i < Fluffy.getBossHP(); i++) {
//	    	std :: cout << P1.GetWarName()<< ": "<<P1.GetWarHealth() << "\n";
//	    	std :: cout << P2.GetThName()<< ": "<<P2.GetThHealth() << "\n";
//	    	std :: cout << P3.GetLMName()<< ": "<<P3.GetLMHealth() << "\n";
//	    	std :: cout << P4.GetDMName()<< ": "<<P4.GetDMHealth() << "\n";
//		
//	        std :: cout << "\n";
//	        std :: cout << "1 Fight    ||    2 Run" << "\n" << "\n";
//        	std :: cout << "Enter Number: ";
//          	std :: cin >> CC;
//        	std :: cout << "\n";
//	    
//	        if (CC == '1') {
//                Fight(P1, P2, P3, P4, d10, Fluffy, d4);
//	        }   
//            if (CC == '2') {
//    		    std :: cout << "You ran away" << "\n";
//		        exit(1);
//	        }
//	        if ( CC < '1' || CC > '2') {
//	    	    std :: cout << "invalid input" << "\n";
//    	    	std :: cout << "try again" << "\n" << "\n" ;
//	    	    EncouterChoice (P1, P2, P3, P4, d10, Fluffy, d4);
//	        } 
//        }
//    }
    	if (WarHp <= 0) {
    		P1.SetWarAlive(false);
    		WarHp = 0;
		}
		if (ThHp <= 0) {
    		P2.SetThAlive(false);
    		ThHp = 0;
		}
		if (LMHp <= 0) {
    		P3.SetLMAlive(false);
    		LMHp = 0;
		}
		if (DMHp <= 0) {
    		P4.SetDMAlive(false);
    		DMHp = 0;
		}
		
    if (Fluffy.getBossEncounter() == true) {
    	
		
		BATTLESTATUS (P1, P2, P3, P4);
		
		std :: cout << Fluffy.getBossName() << ": "<< BossHp << "\n" << "\n";
	   	std :: cout << P1.GetWarName()<< ": "<< WarHp << "\n";
	    std :: cout << P2.GetThName()<< ": "<< ThHp << "\n";
	    std :: cout << P3.GetLMName()<< ": "<< LMHp << "\n";
	    std :: cout << P4.GetDMName()<< ": "<< DMHp << "\n";
		
        std :: cout << "\n";
        std :: cout << "1 Fight    ||    2 Run" << "\n" << "\n";
       	std :: cout << "Enter Number: ";
       	std :: cin >> CC;
       	std :: cout << "\n";
	    
        if (CC == '1') {
        	Sleep(1000);
        	system("cls");
            BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);
            
//            if (BossHp > 0)
//            {
//            	Fluffy.setBossEncounter(true);
//			}
        }   
        if (CC == '2') {
   		    std :: cout << "You ran away" << "\n";
	        exit(1);
        }
        if ( CC < '1' || CC > '2') {
   	    	system("cls");
    	    EncouterChoice (P1, P2, P3, P4, d10, Fluffy, d4); 
        }         
    }
}


void BattleChoice (Warrior P1, Thief P2, LightMage P3, DarkMage P4, Eff d10, Boss Fluffy, EnemyHeroAttack d4) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	char F;
    std :: cout << "Pick Hero To Move" << "\n" << "\n";
    std :: cout << "1 Warrior    ||  2 Thief" << "\n";
    std :: cout << "3 White Mage ||  4 Dark Mage" << "\n" << "\n";
    std :: cout << "Enter Number: ";
    std :: cin >> F;
    std :: cout << "\n" << "\n";
    
    if (F == '1') {
		if (P1.GetWarAlive() == true) {
			Sleep(1000);
	        system("cls");
			HEROMOVE = HEROMOVE + 1;
    	    WarriorAttack(P1, P4, P2, P3, d10, Fluffy);
    	    //if Darkmage buff is activated +1 to duration every time a hero moves
	        if (DMBuffOn == true)
	        {
	        	DMBuffDuration = DMBuffDuration + 1;
			}
	    }
	    //if this hero is dead it will retart the function to pick a different hero
	    else if (P1.GetWarAlive() == false) {
	    	std :: cout << P1.GetWarName() << " is dead" << "\n";
	    	std :: cout << "Try a different hero" << "\n" << "\n";
	    	std :: cin.ignore();
            std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	        std :: cin.get();
			system("cls");
	    	BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);	    	
		}
	}
	if (F == '2') {
		if (P2.GetThAlive() == true) {
			Sleep(1000);
			HEROMOVE = HEROMOVE + 1;
			system("cls");
    	    ThiefAttack(P2, P4, P1, P3, d10, Fluffy);
	        Fluffy.setBossAttackCounter(Fluffy.getBossAttackCounter() + 1);
	        //if Darkmage buff is activated +1 to duration every time a hero moves
	        if (DMBuffOn == true)
	        {
	        	DMBuffDuration = DMBuffDuration + 1;
			}
	    }
	    //if this hero is dead it will retart the function to pick a different hero
	    else if (P2.GetThAlive() == false) {
	    	std :: cout << P2.GetThName() << " is dead" << "\n";
	    	std :: cout << "Try a different hero" << "\n" << "\n";
	    	std :: cin.ignore();
            std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	        std :: cin.get();
	    	system("cls");
	    	BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);	    	
		}
	}
    if (F == '3') {
    	HEROMOVE = HEROMOVE + 1;
    	if (P3.GetLMAlive() == true) {
    		Sleep(1000);
    		system("cls");
    	    LightMageHeal(P3, P1, P2, P4, d10);
    	    //if Darkmage buff is activated +1 to duration every time a hero moves
	        Fluffy.setBossAttackCounter(Fluffy.getBossAttackCounter() + 1);
	        if (DMBuffOn == true)
	        {
	        	DMBuffDuration = DMBuffDuration + 1;
			}
	    }
	    //if this hero is dead it will retart the function to pick a different hero
	    else if (P3.GetLMAlive() == false) {
	    	std :: cout << P3.GetLMName() << " is dead" << "\n";
	    	std :: cout << "Try a different hero" << "\n" << "\n";
	    	std :: cin.ignore();
            std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	        std :: cin.get();
	    	system("cls");
	    	BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);
		}
	}
	if (F == '4') {
		HEROMOVE = HEROMOVE + 1;
    	if (P4.GetDMAlive() == true) {
    		Sleep(1000);
    		system("cls");
    	    DarkMageBuff(P4, P1, P2, P3, d10);
    	    //if Darkmage buff is activated +1 to duration every time a hero moves
	        Fluffy.setBossAttackCounter(Fluffy.getBossAttackCounter() + 1);
	        if (DMBuffOn == true)
	        {
	        	DMBuffDuration = DMBuffDuration + 1;
			}
	    }
	    //if this hero is dead it will retart the function to pick a different hero
	    else if (P4.GetDMAlive() == false) {
	    	std :: cout << P4.GetDMName() << " is dead" << "\n";
	    	std :: cout << "Try a different hero" << "\n" << "\n";
	    	std :: cin.ignore();
            std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	        std :: cin.get();
	    	system("cls");
	    	BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);
	    }
    }
    if (F > '4' || F < '1') {
    	system("cls");
		BattleChoice(P1, P2, P3, P4, d10, Fluffy, d4);
	}
	
	//if heros moved 2 times boss will attack
	if (HEROMOVE == 1) {
    	    Fluffy.setBossMove(true);
	   	    //resets hero move counter
	   		HEROMOVE = 0;
	   	    if (Fluffy.getBossMove() == true) {
	   	    	BATTLESTATUS (P1, P2, P3, P4);
	   	    	std :: cout << Fluffy.getBossName() << " Will Attack" << "\n" << "\n";
                std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	            std :: cin.get();
	   	    	system("cls");
	   		    BossAttack (Fluffy, P1, P2, P3, P4, d10, d4);
	    	}
	    }

    //restart DarkMage Damage buff
    if (DMBuffDuration  == 2) {
    	DMBuffOn = false;
		if (DMBuffOn == false) {
			std :: cout << P4.GetDMName() << "'s Damage Buff Faded"<< "\n";
			xDMBuff = 0;
		}
	}
}

void WarriorAttack (Warrior P1, DarkMage P4, Thief P2, LightMage P3, Eff d10, Boss Fluffy) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	int WarBDmg = 100;
	int WarTotalDmg;
	//picks numbers from 1 - 10
	P1.SetWarDmgChance(d10.random());
	//generates Warriors damage
	
	if (P1.GetWarDmgChance() == 1) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 0;
		P1.SetWarDmg(WarTotalDmg);
		std :: cout << "Attack missed" << "\n" << "\n";
	}
	if (P1.GetWarDmgChance() == 2 || P1.GetWarDmgChance() == 3 || P1.GetWarDmgChance() == 4) {
	   	WarTotalDmg = (WarBDmg + xDMBuff) * 1;
	   	P1.SetWarDmg(WarTotalDmg);
	}
	if (P1.GetWarDmgChance() == 5 || P1.GetWarDmgChance() == 6) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 2;
		P1.SetWarDmg(WarTotalDmg);
	    std :: cout << "x2 Critical HIT" << "\n" << "\n";
	}
	if (P1.GetWarDmgChance() == 7) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 2.5;
		P1.SetWarDmg(WarTotalDmg);
		std :: cout << "x2.5 Critical HIT" << "\n" << "\n";
	}
	if (P1.GetWarDmgChance() == 8) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 3;
		P1.SetWarDmg(WarTotalDmg);
		std :: cout << "x3 Critical HIT" << "\n" << "\n";
	}
	if (P1.GetWarDmgChance() == 9) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 3.5;
		P1.SetWarDmg(WarTotalDmg);
		std :: cout << "x3.5 Critical HIT" << "\n" << "\n";
	}
	if (P1.GetWarDmgChance() == 10) {
		WarTotalDmg = (WarBDmg + xDMBuff) * 5;
		P1.SetWarDmg(WarTotalDmg);
		std :: cout << "x5 Critical HIT" << "\n" << "\n";
	}	
	
	if (Fluffy.getBossEncounter() == true) {
		BossHp =  BossHp - P1.GetWarDmg();
	    std :: cout << P1.GetWarName() << " Deals "  << P1.GetWarDmg() <<" Damage To " << Fluffy.getBossName()<< "\n";
		if (BossHp <= 0) {
			BossHp = 0;
			Fluffy.setBossAlive(false);
		}	
		std :: cout << Fluffy.getBossName() << ": " << BossHp << "\n" << "\n";
		if (Fluffy.getBossAlive() == false) {
			system("cls");
			std :: cout << "YOU WIN" << "\n" << "\n";
			draft.open("credits.txt");	
        	std :: string design;
		
         	while(!draft.eof())
	        {
	        	getline(draft,design);
		        std :: cout << design << "\n";
	        }
	        draft.close();
	        exit(1);
	    }
	} 
	std :: cin.ignore();
    std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	std :: cin.get();
   	system("cls");
}

void ThiefAttack (Thief P2, DarkMage P4, Warrior P1, LightMage P3, Eff d10, Boss Fluffy) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	int ThBDmg = 150;
	int ThTotalDmg;
	//picks numbers from 1 - 10
	P2.SetThDmgChance(d10.random());
	//generates thiefs damage
	if (P2.GetThDmgChance() == 1) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 0;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "Attack missed" << "\n" << "\n";
	}
	if (P2.GetThDmgChance() == 2 || P2.GetThDmgChance() == 3 || P2.GetThDmgChance() == 4) {
	   	ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 1;
		P2.SetThDmg(ThTotalDmg);
	}
	if (P2.GetThDmgChance() == 5 || P2.GetThDmgChance() == 6) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 2;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "x2 Critical HIT" << "\n" << "\n";
	}
	if (P2.GetThDmgChance() == 7) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 2.5;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "x2.5 Critical HIT" << "\n" << "\n";
	}
	if (P2.GetThDmgChance() == 8) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 3;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "x3 Critical HIT" << "\n" << "\n";
	}
	if (P2.GetThDmgChance() == 9) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 3.5;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "x3.5 Critical HIT" << "\n" << "\n";
	}
	if (P2.GetThDmgChance() == 10) {
		ThTotalDmg = (ThBDmg + P4.GetDMBuff()) * 5;
		P2.SetThDmg(ThTotalDmg);
		std :: cout << "x5 Critical HIT" << "\n" << "\n";
	}
	//will only attack boss if boss is encountered
	if (Fluffy.getBossEncounter() == true) {
		BossHp =  BossHp - P2.GetThDmg();		
	    std :: cout << P2.GetThName() << " Deals "  << P2.GetThDmg() <<" Damage To " << Fluffy.getBossName()<< "\n";	    	
		if (BossHp <= 0) {
			BossHp = 0;
			Fluffy.setBossAlive(false);
		}	
		std :: cout << Fluffy.getBossName() << ": " << BossHp << "\n" << "\n";
		if (Fluffy.getBossAlive() == false) {
			system("cls");
			std :: cout << "YOU WIN" << "\n" << "\n";
			draft.open("credits.txt");	
        	std :: string design;
		
         	while(!draft.eof())
	        {
	        	getline(draft,design);
		        std :: cout << design << "\n";
	        }
	        draft.close();
	        exit(1);
		} 
	}
	
	std :: cin.ignore();
    std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	std :: cin.get();
   	system("cls");
}

void LightMageHeal (LightMage P3, Warrior P1, Thief P2, DarkMage P4,  Eff d10) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	//base heal of Light Mage
	int LMBHeal = 20;
	//base health of all heros
	int WarBHp = 1500, ThBHp = 1000, LMBHp = 500, DMBHp = 750;
	//picks numbers from 1 - 10
	P3.SetLMHealChance(d10.random());
	//generates healing buff for all heros
	if (P3.GetLMHealChance() == 1) {
		P3.SetLMHeal(LMBHeal * 0);
		std :: cout << "Healing Spell Failed" << "\n" << "\n";
	}
	if (P3.GetLMHealChance() == 2 || P3.GetLMHealChance() == 3 || P3.GetLMHealChance() == 4) {
	   	P3.SetLMHeal(LMBHeal * 1);
	}
	if (P3.GetLMHealChance() == 5 || P3.GetLMHealChance() == 6) {
		P3.SetLMHeal(LMBHeal * 2);
		std :: cout << "Healing Spell x2 Boost" << "\n" << "\n";
	}
	if (P3.GetLMHealChance() == 7) {
		P3.SetLMHeal(LMBHeal * 2.5);
		std :: cout << "Healing Spell x2.5 Boost" << "\n" << "\n";
	}
	if (P3.GetLMHealChance() == 8) {
		P3.SetLMHeal(LMBHeal * 3);
		std :: cout << "Healing Spell x3 Boost" << "\n" << "\n";
	}
	if (P3.GetLMHealChance() == 9) {
		P3.SetLMHeal(LMBHeal * 3.5 );
		std :: cout << "Healing Spell x3.5 Boost" << "\n" << "\n";
	}
	if (P3.GetLMHealChance() == 10) {
		P3.SetLMHeal(LMBHeal * 4);
		std :: cout << "Healing Spell x4 Boost" << "\n" << "\n";
	}
		
	std :: cout << P3.GetLMName() << " Healed Team "  << P3.GetLMHeal() << " Health"<< "\n";
	
	//will only heal heros that are alive
	if (P1.GetWarAlive() == true) {
    	WarHp = WarHp + P3.GetLMHeal();
    	//prevents healing from overlapping base health
	    if (WarHp > WarBHp) {
	    	WarHp = WarBHp;
    	}
    }
    if (P2.GetThAlive() == true) {
    	ThHp = ThHp + P3.GetLMHeal();
    	//prevents healing from overlapping base health
	    if (ThHp > ThBHp) {
	    	ThHp = ThBHp;
    	}
    }
    if (P3.GetLMAlive() == true) {
    	LMHp = LMHp + P3.GetLMHeal();
    	//prevents healing from overlapping base health
	    if (LMHp > LMBHp) {
	    	LMHp = LMBHp;
    	}
    }
    if (P4.GetDMAlive() == true) {
    	DMHp = DMHp + P3.GetLMHeal();
    	//prevents healing from overlapping base health
	    if (DMHp > DMBHp) {
	    	DMHp = DMBHp;
    	}
    }
    
    std :: cin.ignore();
    std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	std :: cin.get();
   	system("cls");
}

void DarkMageBuff (DarkMage P4,  Warrior P1, Thief P2, LightMage P3, Eff d10) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	int DMBBuff = 20;
	//picks numbers from 1 - 10
	P4.SetDMBuffChance(d10.random());
	//pass the damagebuff
    xDMBuff = P4.GetDMBuff();
	//generates damage buff for warrior and thiefd
	if (P4.GetDMBuffChance() == 1) {
		P4.SetDMBuff(DMBBuff * 0);
		std :: cout << "Damage Buff Spell Failed" << "\n" << "\n";
	}
	if (P4.GetDMBuffChance() == 2 || P4.GetDMBuffChance() == 3 || P4.GetDMBuffChance() == 4) {
	   	P4.SetDMBuff(DMBBuff * 1);
	}
	if (P4.GetDMBuffChance() == 5 || P4.GetDMBuffChance() == 6) {
		P4.SetDMBuff(DMBBuff * 2);
		std :: cout << "Damage Buff x2 Boost" << "\n" << "\n";
	}
	if (P4.GetDMBuffChance() == 7) {
		P4.SetDMBuff(DMBBuff * 2.5);
		std :: cout << "Damage Buff x2.5 Boost" << "\n" << "\n";
	}
	if (P4.GetDMBuffChance() == 8) {
		P4.SetDMBuff(DMBBuff * 3);
		std :: cout << "Damage Buff x3 Boost" << "\n" << "\n";
	}
	if (P4.GetDMBuffChance() == 9) {
		P4.SetDMBuff(DMBBuff * 3.5 );
		std :: cout << "Damage Buff x3.5 Boost" << "\n" << "\n";
	}
	if (P4.GetDMBuffChance() == 10) {
		P4.SetDMBuff(DMBBuff * 4);
		std :: cout << "Damage Buff x4 Boost" << "\n" << "\n";
	}
	
	if (P1.GetWarAlive() == true && P2.GetThAlive() == true) {
	    std :: cout << P4.GetDMName() << " Buffed "<< P1.GetWarName() << " And " << P2.GetThName() << ", +"<< P4.GetDMBuff() << " Damage"<< "\n";
    	//tells the code that a buff has been genarated
        DMBuffOn = true;
	}
	if (P1.GetWarAlive() == true && P2.GetThAlive() == false) {
	    std :: cout << P4.GetDMName() << " Buffed "<< P1.GetWarName() << ", +"<< P4.GetDMBuff() << " Damage"<< "\n";
    	//tells the code that a buff has been genarated
        DMBuffOn = true;
	}
	if (P1.GetWarAlive() == false && P2.GetThAlive() == true) {
	    std :: cout << P4.GetDMName() << " Buffed "<< P2.GetThAlive() << ", +"<< P4.GetDMBuff() << " Damage"<< "\n";
    	//tells the code that a buff has been genarated
        DMBuffOn = true;
	}
	if (P1.GetWarAlive() == false && P2.GetThAlive() == false) {
	    std :: cout << P4.GetDMName() << " Buffed No one" << "\n";
	}
    
    std :: cin.ignore();
    std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	std :: cin.get();
   	system("cls");
}

void BossAttack (Boss Fluffy, Warrior P1, Thief P2, LightMage P3, DarkMage P4, Eff d10, EnemyHeroAttack d4) {
	
	BATTLESTATUS (P1, P2, P3, P4);
	
	//picks numbers from 1 - 10
	Fluffy.SetBossDmgChance(d10.random());
	
    //generates damage of boss
	if (Fluffy.GetBossDmgChance() == 1|| Fluffy.GetBossDmgChance() == 2) {
		Fluffy.SetBossDmg(200 * 0);
		std :: cout << "Attack missed" << "\n" << "\n";
	}
	if (Fluffy.GetBossDmgChance() == 3 || Fluffy.GetBossDmgChance() == 4 || Fluffy.GetBossDmgChance() == 5) {
	   	Fluffy.SetBossDmg(200 * 1);
	}
	if (Fluffy.GetBossDmgChance() == 6 || Fluffy.GetBossDmgChance() == 7) {
		Fluffy.SetBossDmg(200 * 1.25);
		std :: cout << "x1.25 Critical HIT" << "\n" << "\n";
	}
	if (Fluffy.GetBossDmgChance() == 8) {
		Fluffy.SetBossDmg(200 * 1.5);
		std :: cout << "x1.5 Critical HIT" << "\n" << "\n";
	}
		if (Fluffy.GetBossDmgChance() == 9) {
		Fluffy.SetBossDmg(200 * 1.75);
		std :: cout << "x1.75 Critical HIT" << "\n" << "\n";
	}
	if (Fluffy.GetBossDmgChance() == 10) {
		Fluffy.SetBossDmg(200 * 2);
		std :: cout << "x2 Critical HIT" << "\n" << "\n";
	}
	
	//starts function to pick a hero to attack
    BossAttackHero (Fluffy, P1, P2, P3, P4, d10, d4);
    
    //stop boss from attacking the next turn
    Fluffy.setBossMove(false);
    
    std :: cout << "PRESS <ENTER> TO CONTINUE..."<< "\n";
   	std :: cin.get();
   	system("cls");
    
}
//picks which hero to attack
void BossAttackHero (Boss Fluffy, Warrior P1, Thief P2, LightMage P3, DarkMage P4, Eff d10, EnemyHeroAttack d4) {
	//picks numbers from 1 - 4
	Fluffy.setHeroPicker(d4.BossRandom());
	//attacks warrior
	if (Fluffy.getHeroPicker() == 1) {
		//attacks warrior if alive
		if (P1.GetWarAlive() == true) {
		    std :: cout << Fluffy.getBossName() << " Attacked " << P1.GetWarName() << " With " << Fluffy.GetBossDmg() << " Damage " << "\n";
		    WarHp = WarHp - Fluffy.GetBossDmg();
	    }
	    //if this hero is dead function will again untill it hits an alive hero
	    if (P1.GetWarAlive() == false) {
	    	BossAttackHero (Fluffy, P1, P2, P3, P4, d10, d4);
		}
	}
	//attacks thief
	if (Fluffy.getHeroPicker() == 2) {
		//attacks thief if alive
		if (P2.GetThAlive() == true) {
		    std :: cout << Fluffy.getBossName() << " Attacked " << P2.GetThName() << " With " << Fluffy.GetBossDmg() << " Damage " << "\n";
		    ThHp = ThHp - Fluffy.GetBossDmg();
		}
		//if this hero is dead function will again untill it hits an alive hero
		if (P2.GetThAlive() == false) {
	    	BossAttackHero (Fluffy, P1, P2, P3, P4, d10, d4);
		}
	}
	//attacks LightMage
	if (Fluffy.getHeroPicker() == 3) {
		//attacks LightMage if alive
	    if (P3.GetLMAlive() == true) {
		    std :: cout << Fluffy.getBossName() << " Attacked " << P3.GetLMName() << " With " << Fluffy.GetBossDmg() << " Damage " << "\n";
		    LMHp = LMHp - Fluffy.GetBossDmg();
		}
		//if this hero is dead function will again untill it hits an alive hero
		if (P3.GetLMAlive() == false) {
	    	BossAttackHero (Fluffy, P1, P2, P3, P4, d10, d4);
		}
	}
	//attacks DarkMage
	if (Fluffy.getHeroPicker() == 4) {
		//attacks DarkMage if alive
		if (P4.GetDMAlive() == true) {
	    	std :: cout << Fluffy.getBossName() << " Attacked " << P4.GetDMName() << " With " << Fluffy.GetBossDmg() << " Damage " << "\n";
		    DMHp = DMHp - Fluffy.GetBossDmg() ;
		}
		//if this hero is dead function will again untill it hits an alive hero
		if (P4.GetDMAlive() == false) {
	    	BossAttackHero (Fluffy, P1, P2, P3, P4, d10, d4);
		}
	}
}

void BATTLESTATUS (Warrior P1, Thief P2, LightMage P3, DarkMage P4) {	
	//ALL HEROS ALIVE
	if (P1.GetWarAlive() == true && P2.GetThAlive() == true && P3.GetLMAlive() == true && P4.GetDMAlive() == true){
    
	
	draft.open("complete.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	draft.close();
	}
	//WAARRIOR DEAD
	else if (P1.GetWarAlive() == false && P2.GetThAlive() == true && P3.GetLMAlive() == true && P4.GetDMAlive() == true){
    draft.open("warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ALL MAGES ALIVE
	if (P1.GetWarAlive() == false && P2.GetThAlive() == false && P3.GetLMAlive() == true && P4.GetDMAlive() == true){
    draft.open("thief_warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//THIEF DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == false && P3.GetLMAlive() == true && P4.GetDMAlive() == true){
    draft.open("thief_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//LIGHTMAGE DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == true && P3.GetLMAlive() == false && P4.GetDMAlive() == true){
    draft.open("lightmage_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//DARKMAGE DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == true && P3.GetLMAlive() == true && P4.GetDMAlive() == false){
    draft.open("darkmage_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ALL MAGES DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == true && P3.GetLMAlive() == false && P4.GetDMAlive() == false){
    draft.open("darkmage_lightmage_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ONLY WAARRIOR ALIVE
	if (P1.GetWarAlive() == true && P2.GetThAlive() == false && P3.GetLMAlive() == false && P4.GetDMAlive() == false){
    draft.open("darkmage_lightmage_thief_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ONLY THIEF ALIVE
	if (P1.GetWarAlive() == false && P2.GetThAlive() == true && P3.GetLMAlive() == false && P4.GetDMAlive() == false){
    draft.open("darkmage_lightmage_warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ONLY LIGHTMAGE ALIVE
	if (P1.GetWarAlive() == false && P2.GetThAlive() == false && P3.GetLMAlive() == true && P4.GetDMAlive() == false){
    draft.open("darkmage_thief_warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ONLY DARKMAGE ALIVE
	if (P1.GetWarAlive() == false && P2.GetThAlive() == false && P3.GetLMAlive() == false && P4.GetDMAlive() == true){
    draft.open("lightmage_thief_warrior_deaddarkmage_left.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//THIEF AND DARKMAGE DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == false && P3.GetLMAlive() == true && P4.GetDMAlive() == false){
    draft.open("darkmage_thief_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//DARKMAGE AND WARRIOR DEAD
	if (P1.GetWarAlive() == false && P2.GetThAlive() == true && P3.GetLMAlive() == true && P4.GetDMAlive() == false){
    draft.open("darkmage_warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//THIEF AND LIGHTMAGE DEAD
	if (P1.GetWarAlive() == true && P2.GetThAlive() == false && P3.GetLMAlive() == false && P4.GetDMAlive() == true){
    draft.open("lightmage_thief_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//WARRIOR AAND LIGHTMAGE DEAD
	if (P1.GetWarAlive() == false && P2.GetThAlive() == true && P3.GetLMAlive() == false && P4.GetDMAlive() == true){
    draft.open("lightmage_warrior_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	}
	//ALL DEAD
	if (P1.GetWarAlive() == false && P2.GetThAlive() == false && P3.GetLMAlive() == false && P4.GetDMAlive() == false){
    draft.open("everyone_dead.txt");	
	std :: string design;
		
	while(!draft.eof())
	    {
	    	getline(draft,design);
		    std :: cout << design << "\n";
	    }
	    draft.close();
	    exit(1);
	}
}

//siopao is life
