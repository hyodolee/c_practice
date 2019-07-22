//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//struct Stats
//{
//	float health;
//	//float healthRegen;
//	//unsigned int mana;
//	//float manaRegen;
//	//float range;
//	//float attackDamage;
//	//float armor;
//	//float attackSpeed;
//	//float magicResist;
//	//unsigned int movementSpeed;
//};
//
//struct Champion
//{
//	char name[20];
//	struct Stats * stats;
//	float abilityPower;
//};
//
//int main()
//{
//	/*struct Champion swain;
//	strcpy(swain.name, "swain");
//	swain.stats.health = 463.0f;
//	swain.stats.healthRegen = 1.48f;*/
//
//	struct Champion * swain = malloc(sizeof(struct Champion));
//	swain->stats = malloc(sizeof(struct Stats));
//	strcpy(swain->name, "swain");
//	swain->stats->health = 463.0f;;
//
//	printf("%s %f\n", swain->name, swain->stats->health);
//
//	free(swain->stats);
//	free(swain);
//
//	return 0;
//}