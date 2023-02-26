#include<stdio.h>
#include<conio.h>
void main ()
{
	clrscr();
	/*char a[30];
	printf("Enter the string ?");
	gets(a);
	printf("yo enter ===%s",a);
	*/
	int age ,weight,b;
	char a[50];
	printf("\n\t\t\tWELCOME IN HEALTH CARE");
	printf("\n\n\n\tSir Enter Your  Name=> ");
	gets(a);
	printf("\n\tSir Enter Your Age=> ");
	scanf("%d",&age);
	printf("\n\tSir Enter Your Weight=>");
	scanf("%d",&weight);

	printf("\n\t\tMR.%s",a);
	printf("\n\t\tWelcome To Fiteness Hello");
	printf(" \n\n");
	printf("\n\t1.Gym Workout");
	printf("\n\t2.Home workout");
	printf("\n\t3.Diet for good Health");
	printf("\n\n\n\tChoise Anyone of written Upper=>");
	scanf("%d",&b);
	switch(b)
	{
		case 1:
			int m;
			printf("\n\t\tMR.%s ",a);
			printf("\n\t\tWelcome to Gym workout in Fiteness Hello");
			printf("\n\n");
			printf(" \n\t\t1. MONDAY");

			printf(" \n\t\t2. TUESDAY");
			printf(" \n\t\t3. WEDNESDAY" );
			printf(" \n\t\t4. THURSDAY");
			printf(" \n\t\t5. FRIDAY");

			printf(" \n\t\t6. SATURDAY");
			printf(" \n\t\t7. SUNDAY");
			printf("\n\n");


			printf(" \n\t\t\tMr.%s\n\n\n\t Enter Choise number of one Day=>",a);
			scanf("%d",&m);
			switch(m)
			 {

			case 1: printf("\n1");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\t\t ");
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
						printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 2: printf("\n2");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
						printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   		printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 3: printf("\n3");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   		printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 4: printf("\n4");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   		printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 5: printf("\n5");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   		printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 6: printf("\n6");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}
				else if (age>=20 &&weight<=50)

				{
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else if (age>=20 && weight>=50)
				{   		printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");


				}
				else
				{                          
					printf(" \n\n\t\t -:- Focus on Legs -:-\n");
					printf("\n\t-> 5 Tricep dips \n\t -> 10 lunges(each leg) \n\t -> 10 push ups \n\t -> 10 Squats \n\t -> 15 Sit- ups /ab exercise \n\t -> 20 jumping jacks");

				}


			break;
			case 7: printf("\n7");
				if(age<=20&&weight<=50)
				{
					printf(" \n\n \t\t -:- today restday -:-");

				}
				else if (age<=20&&weight>=50)
				{
					printf(" \n\n \t\t -:- today restday -:-");

				}
				else if (age>=20 &&weight<=50)

				{
					printf(" \n\n \t\t -:- today restday -:-");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" \n\n \t\t -:- today restday -:-");

				}
				else
				{
					printf(" \n\n \t\t -:- today restday -:-");

				}


			break;
			default : printf("\n\t\tMr.%s you enter worng Key ",a);
				printf("\n\t\t\tPlease restart program");
			break;
		      }
		break;
		case 2: printf("2");
			int h;
			printf("\n\t\tMR.%s ",a);
			printf("\n\t\tWelcome to  Home workout in Fiteness Hello");
			printf("\n\n");
			printf(" \n\t\t1. MONDAY");

			printf(" \n\t\t2. TUESDAY");
			printf(" \n\t\t3. WEDNESDAY" );
			printf(" \n\t\t4. THURSDAY");
			printf(" \n\t\t5. FRIDAY");

			printf(" \n\t\t6. SATURDAY");
			printf(" \n\t\t7. SUNDAY");
			printf("\n\n");


			printf(" \n\t\t\tMr.%s\n\n\n\t Enter Choise number of one Day=>",a);
			scanf("%d",&h);
			switch(h)
			 {

			case 1: printf("\n1");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 2: printf("\n2");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 3: printf("\n3");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 4: printf("\n4");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 5: printf("\n5");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 6: printf("\n6");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			case 7: printf("\n7");
				if(age<=20&&weight<=50)
				{
				printf("20  50");
				}
				else if (age<=20&&weight>=50)
				{
				printf("20 70");
				}
				else if (age>=20 &&weight<=50)

				{
				printf("20 + 50");

				}
				else if (age>=20 && weight>=50)
				{   	printf(" 20+ 50+");

				}
				else
				{
				 printf("kafi hai bhai");
				}


			break;
			default : printf("\n\t\tMr.%s you enter worng Key ",a);
				printf("\n\t\t\tPlease restart program");
			break;
			}
			break;
		 case 3: printf("3");
			int k;
			printf("\n\t\tMR.%s ",a);
			printf("\n\t\tWelcome to Diet for good health in Fiteness Hello");
			printf("\n\n");
			printf(" \n\t\t1. MONDAY");

			printf(" \n\t\t2. TUESDAY");
			printf(" \n\t\t3. WEDNESDAY" );
			printf(" \n\t\t4. THURSDAY");
			printf(" \n\t\t5. FRIDAY");

			printf(" \n\t\t6. SATURDAY");
			printf(" \n\t\t7. SUNDAY");
			printf("\n\n");


			printf(" \n\t\t\tMr.%s\n\n\n\t Enter Choise number of one Day=>",a);
			scanf("%d",&k);
			switch(k)
			 {

			case 1: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (271 calories)\n\t1 serving Avocado Egg Toast");
				printf("\n\n\t\tA.M. Snack (84 calories)\n\t1 cup blueberries");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Loaded Black Bean Nacho Soup");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Seared Salmon with Green Peppercorn Sauce\n\t1 cup steamed green beans with 1 tsp. olive oil, 1 Tbsp. nonfat plain Greek yogurt and a pinch of pepper.\n\t Daily Totals: 1,224 calories, 60 g protein, 142 g carbohydrates, 28 g fiber, 52 g fat, 11 g sat. fat., 828 mg sodium");


				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (271 calories)\n\t1 serving Avocado Egg Toast");
				printf("\n\n\t\tA.M. Snack (84 calories)\n\t1 cup blueberries");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Loaded Black Bean Nacho Soup");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Seared Salmon with Green Peppercorn Sauce\n\t1 cup steamed green beans with 1 tsp. olive oil, 1 Tbsp. nonfat plain Greek yogurt and a pinch of pepper.\n\t Daily Totals: 1,224 calories, 60 g protein, 142 g carbohydrates, 28 g fiber, 52 g fat, 11 g sat. fat., 828 mg sodium");

				}
				else if (age>=20 &&weight<=50)

				{
				printf("");
				printf("\n\n\t\tBreakfast (271 calories)\n\t1 serving Avocado Egg Toast");
				printf("\n\n\t\tA.M. Snack (84 calories)\n\t1 cup blueberries");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Loaded Black Bean Nacho Soup");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Seared Salmon with Green Peppercorn Sauce\n\t1 cup steamed green beans with 1 tsp. olive oil, 1 Tbsp. nonfat plain Greek yogurt and a pinch of pepper.\n\t Daily Totals: 1,224 calories, 60 g protein, 142 g carbohydrates, 28 g fiber, 52 g fat, 11 g sat. fat., 828 mg sodium");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (271 calories)\n\t1 serving Avocado Egg Toast");
				printf("\n\n\t\tA.M. Snack (84 calories)\n\t1 cup blueberries");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Loaded Black Bean Nacho Soup");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Seared Salmon with Green Peppercorn Sauce\n\t1 cup steamed green beans with 1 tsp. olive oil, 1 Tbsp. nonfat plain Greek yogurt and a pinch of pepper.\n\t Daily Totals: 1,224 calories, 60 g protein, 142 g carbohydrates, 28 g fiber, 52 g fat, 11 g sat. fat., 828 mg sodium");


				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (271 calories)\n\t1 serving Avocado Egg Toast");
				printf("\n\n\t\tA.M. Snack (84 calories)\n\t1 cup blueberries");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Loaded Black Bean Nacho Soup");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Seared Salmon with Green Peppercorn Sauce\n\t1 cup steamed green beans with 1 tsp. olive oil, 1 Tbsp. nonfat plain Greek yogurt and a pinch of pepper.\n\t Daily Totals: 1,224 calories, 60 g protein, 142 g carbohydrates, 28 g fiber, 52 g fat, 11 g sat. fat., 828 mg sodium");

				}






			break;
			case 2: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (265 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1/4 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (429 calories)\n\t1 serving Charred Shrimp & Pesto Buddha Bowls\n\tDaily Totals: 1,225 calories, 75 g protein, 148 g carbohydrates, 39 g fiber, 50 g fat, 9 g sat. fat., 1,363 mg sodium");


				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (265 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1/4 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (429 calories)\n\t1 serving Charred Shrimp & Pesto Buddha Bowls\n\tDaily Totals: 1,225 calories, 75 g protein, 148 g carbohydrates, 39 g fiber, 50 g fat, 9 g sat. fat., 1,363 mg sodium");

				}
				else if (age>=20 &&weight<=50)

				{
				printf("");
				printf("\n\n\t\tBreakfast (265 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1/4 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (429 calories)\n\t1 serving Charred Shrimp & Pesto Buddha Bowls\n\tDaily Totals: 1,225 calories, 75 g protein, 148 g carbohydrates, 39 g fiber, 50 g fat, 9 g sat. fat., 1,363 mg sodium");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (265 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1/4 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (429 calories)\n\t1 serving Charred Shrimp & Pesto Buddha Bowls\n\tDaily Totals: 1,225 calories, 75 g protein, 148 g carbohydrates, 39 g fiber, 50 g fat, 9 g sat. fat., 1,363 mg sodium");


				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (265 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1/4 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (429 calories)\n\t1 serving Charred Shrimp & Pesto Buddha Bowls\n\tDaily Totals: 1,225 calories, 75 g protein, 148 g carbohydrates, 39 g fiber, 50 g fat, 9 g sat. fat., 1,363 mg sodium");

				}


			break;
			case 3: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (297 calories)\n\t1 cup nonfat plain Greek yogurt\n\t3/4 cup blueberries\n\t1 1/2 Tbsp.");
				printf("\n\n\t\tA.M. Snack (64 calories)\n\t1 cup raspberries   ");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (416 calories)\n\t1 serving Curried Sweet Potato & Peanut Soup\n\t1 slice whole-wheat bread, toasted\n\tDaily Totals: 1,212 calories, 70 g protein, 132 g carbohydrates, 30 g fiber, 51 g fat, 9 g sat. fat., 1,332 mg sodium");

				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (297 calories)\n\t1 cup nonfat plain Greek yogurt\n\t3/4 cup blueberries\n\t1 1/2 Tbsp.");
				printf("\n\n\t\tA.M. Snack (64 calories)\n\t1 cup raspberries   ");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (416 calories)\n\t1 serving Curried Sweet Potato & Peanut Soup\n\t1 slice whole-wheat bread, toasted\n\tDaily Totals: 1,212 calories, 70 g protein, 132 g carbohydrates, 30 g fiber, 51 g fat, 9 g sat. fat., 1,332 mg sodium");

				}

				else if (age>=20 &&weight<=50)

				{
				printf("");
				printf("\n\n\t\tBreakfast (297 calories)\n\t1 cup nonfat plain Greek yogurt\n\t3/4 cup blueberries\n\t1 1/2 Tbsp.");
				printf("\n\n\t\tA.M. Snack (64 calories)\n\t1 cup raspberries   ");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (416 calories)\n\t1 serving Curried Sweet Potato & Peanut Soup\n\t1 slice whole-wheat bread, toasted\n\tDaily Totals: 1,212 calories, 70 g protein, 132 g carbohydrates, 30 g fiber, 51 g fat, 9 g sat. fat., 1,332 mg sodium");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (297 calories)\n\t1 cup nonfat plain Greek yogurt\n\t3/4 cup blueberries\n\t1 1/2 Tbsp.");
				printf("\n\n\t\tA.M. Snack (64 calories)\n\t1 cup raspberries   ");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (416 calories)\n\t1 serving Curried Sweet Potato & Peanut Soup\n\t1 slice whole-wheat bread, toasted\n\tDaily Totals: 1,212 calories, 70 g protein, 132 g carbohydrates, 30 g fiber, 51 g fat, 9 g sat. fat., 1,332 mg sodium");


				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (297 calories)\n\t1 cup nonfat plain Greek yogurt\n\t3/4 cup blueberries\n\t1 1/2 Tbsp.");
				printf("\n\n\t\tA.M. Snack (64 calories)\n\t1 cup raspberries   ");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (416 calories)\n\t1 serving Curried Sweet Potato & Peanut Soup\n\t1 slice whole-wheat bread, toasted\n\tDaily Totals: 1,212 calories, 70 g protein, 132 g carbohydrates, 30 g fiber, 51 g fat, 9 g sat. fat., 1,332 mg sodium");

				}


			break;
			case 4: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (265 calories)\n\t3/4 cup bran cereal\n\t3/4 cup skim milk\n\t1/2 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (427 calories)\n\t1 serving Cod with Tomato Cream Sauce\n\t3/4 cup cooked brown rice\n\t1 cup steamed broccoli\n\tDaily Totals: 1,223 calories, 67 g protein, 170 g carbohydrates, 38 g fiber, 39 g fat, 9 g sat. fat., 1,284 mg sodium");

				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (265 calories)\n\t3/4 cup bran cereal\n\t3/4 cup skim milk\n\t1/2 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (427 calories)\n\t1 serving Cod with Tomato Cream Sauce\n\t3/4 cup cooked brown rice\n\t1 cup steamed broccoli\n\tDaily Totals: 1,223 calories, 67 g protein, 170 g carbohydrates, 38 g fiber, 39 g fat, 9 g sat. fat., 1,284 mg sodium");

				}
				else if (age>=20 &&weight<=50)

				{
				printf("");

				printf("\n\n\t\tBreakfast (265 calories)\n\t3/4 cup bran cereal\n\t3/4 cup skim milk\n\t1/2 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (427 calories)\n\t1 serving Cod with Tomato Cream Sauce\n\t3/4 cup cooked brown rice\n\t1 cup steamed broccoli\n\tDaily Totals: 1,223 calories, 67 g protein, 170 g carbohydrates, 38 g fiber, 39 g fat, 9 g sat. fat., 1,284 mg sodium");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (265 calories)\n\t3/4 cup bran cereal\n\t3/4 cup skim milk\n\t1/2 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (427 calories)\n\t1 serving Cod with Tomato Cream Sauce\n\t3/4 cup cooked brown rice\n\t1 cup steamed broccoli\n\tDaily Totals: 1,223 calories, 67 g protein, 170 g carbohydrates, 38 g fiber, 39 g fat, 9 g sat. fat., 1,284 mg sodium");


				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (265 calories)\n\t3/4 cup bran cereal\n\t3/4 cup skim milk\n\t1/2 cup blueberries");
				printf("\n\n\t\tA.M. Snack (95 calories)\n\t1 medium apple");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad");
				printf("\n\n\t\tP.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tDinner (427 calories)\n\t1 serving Cod with Tomato Cream Sauce\n\t3/4 cup cooked brown rice\n\t1 cup steamed broccoli\n\tDaily Totals: 1,223 calories, 67 g protein, 170 g carbohydrates, 38 g fiber, 39 g fat, 9 g sat. fat., 1,284 mg sodium");

				}


			break;
			case 5: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (333 calories)\n\t1/2 cup rolled oats, cooked in 1 cup milk\n\t1 cup raspberries\n\tCook oats and top with raspberries and a pinch of cinnamon");
				printf("\n\n\t\tA.M. Snack (102 calories)\n\t1 medium bell pepper, sliced\n\t3 Tbsp. hummus");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad ");
				printf("\n\n\t\tP.M. Snack (84 calories)\n\t1 cup blueberries    ");
				printf("\n\n\t\tDinner (304 calories)\n\t1 1/4 cups Chicken Cauliflower Fried Rice\n\tDaily Totals: 1,198 calories, 77 g protein, 120 g carbohydrates, 30 g fiber, 48 g fat, 9 g sat. fat., 1,405 mg sodium.");

				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (333 calories)\n\t1/2 cup rolled oats, cooked in 1 cup milk\n\t1 cup raspberries\n\tCook oats and top with raspberries and a pinch of cinnamon");
				printf("\n\n\t\tA.M. Snack (102 calories)\n\t1 medium bell pepper, sliced\n\t3 Tbsp. hummus");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad ");
				printf("\n\n\t\tP.M. Snack (84 calories)\n\t1 cup blueberries    ");
				printf("\n\n\t\tDinner (304 calories)\n\t1 1/4 cups Chicken Cauliflower Fried Rice\n\tDaily Totals: 1,198 calories, 77 g protein, 120 g carbohydrates, 30 g fiber, 48 g fat, 9 g sat. fat., 1,405 mg sodium.");

				}
				else if (age>=20 &&weight<=50)

				{
				printf("");
				printf("\n\n\t\tBreakfast (333 calories)\n\t1/2 cup rolled oats, cooked in 1 cup milk\n\t1 cup raspberries\n\tCook oats and top with raspberries and a pinch of cinnamon");
				printf("\n\n\t\tA.M. Snack (102 calories)\n\t1 medium bell pepper, sliced\n\t3 Tbsp. hummus");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad ");
				printf("\n\n\t\tP.M. Snack (84 calories)\n\t1 cup blueberries    ");
				printf("\n\n\t\tDinner (304 calories)\n\t1 1/4 cups Chicken Cauliflower Fried Rice\n\tDaily Totals: 1,198 calories, 77 g protein, 120 g carbohydrates, 30 g fiber, 48 g fat, 9 g sat. fat., 1,405 mg sodium.");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (333 calories)\n\t1/2 cup rolled oats, cooked in 1 cup milk\n\t1 cup raspberries\n\tCook oats and top with raspberries and a pinch of cinnamon");
				printf("\n\n\t\tA.M. Snack (102 calories)\n\t1 medium bell pepper, sliced\n\t3 Tbsp. hummus");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad ");
				printf("\n\n\t\tP.M. Snack (84 calories)\n\t1 cup blueberries    ");
				printf("\n\n\t\tDinner (304 calories)\n\t1 1/4 cups Chicken Cauliflower Fried Rice\n\tDaily Totals: 1,198 calories, 77 g protein, 120 g carbohydrates, 30 g fiber, 48 g fat, 9 g sat. fat., 1,405 mg sodium.");


				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (333 calories)\n\t1/2 cup rolled oats, cooked in 1 cup milk\n\t1 cup raspberries\n\tCook oats and top with raspberries and a pinch of cinnamon");
				printf("\n\n\t\tA.M. Snack (102 calories)\n\t1 medium bell pepper, sliced\n\t3 Tbsp. hummus");
				printf("\n\n\t\tLunch (374 calories)\n\t1 serving Spinach & Strawberry Meal-Prep Salad ");
				printf("\n\n\t\tP.M. Snack (84 calories)\n\t1 cup blueberries    ");
				printf("\n\n\t\tDinner (304 calories)\n\t1 1/4 cups Chicken Cauliflower Fried Rice\n\tDaily Totals: 1,198 calories, 77 g protein, 120 g carbohydrates, 30 g fiber, 48 g fat, 9 g sat. fat., 1,405 mg sodium.");

				}


			break;
			case 6: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\n\t\tBreakfast (328 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1 cup blueberries");
				printf("\n\n\t\tA.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tLunch (296 calories)\n\t1 serving Tuna, White Bean & Dill Salad\n\tMeal-Prep Tip: Save a serving of the tuna salad to have for lunch on Day 7");
				printf("\n\n\t\tP.M. Snack (64 calories)\n\t1 cup raspberries");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Toaster-Oven Tostada\n\tDaily Totals: 1,206 calories, 55 g protein, 187 g carbohydrates, 55 g fiber, 39 g fat, 8 g sat. fat., 1,203 mg sodium.");
				}
				else if (age<=20&&weight>=50)
				{
				printf("");
				printf("\n\n\t\tBreakfast (328 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1 cup blueberries");
				printf("\n\n\t\tA.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tLunch (296 calories)\n\t1 serving Tuna, White Bean & Dill Salad\n\tMeal-Prep Tip: Save a serving of the tuna salad to have for lunch on Day 7");
				printf("\n\n\t\tP.M. Snack (64 calories)\n\t1 cup raspberries");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Toaster-Oven Tostada\n\tDaily Totals: 1,206 calories, 55 g protein, 187 g carbohydrates, 55 g fiber, 39 g fat, 8 g sat. fat., 1,203 mg sodium.");

				}
				else if (age>=20 &&weight<=50)

				{
				printf("");
				printf("\n\n\t\tBreakfast (328 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1 cup blueberries");
				printf("\n\n\t\tA.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tLunch (296 calories)\n\t1 serving Tuna, White Bean & Dill Salad\n\tMeal-Prep Tip: Save a serving of the tuna salad to have for lunch on Day 7");
				printf("\n\n\t\tP.M. Snack (64 calories)\n\t1 cup raspberries");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Toaster-Oven Tostada\n\tDaily Totals: 1,206 calories, 55 g protein, 187 g carbohydrates, 55 g fiber, 39 g fat, 8 g sat. fat., 1,203 mg sodium.");


				}
				else if (age>=20 && weight>=50)
				{   	printf(" ");
				printf("\n\n\t\tBreakfast (328 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1 cup blueberries");
				printf("\n\n\t\tA.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tLunch (296 calories)\n\t1 serving Tuna, White Bean & Dill Salad\n\tMeal-Prep Tip: Save a serving of the tuna salad to have for lunch on Day 7");
				printf("\n\n\t\tP.M. Snack (64 calories)\n\t1 cup raspberries");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Toaster-Oven Tostada\n\tDaily Totals: 1,206 calories, 55 g protein, 187 g carbohydrates, 55 g fiber, 39 g fat, 8 g sat. fat., 1,203 mg sodium.");

				}
				else
				{
				 printf("");
				printf("\n\n\t\tBreakfast (328 calories)\n\t1 cup bran cereal\n\t1 cup skim milk\n\t1 cup blueberries");
				printf("\n\n\t\tA.M. Snack (62 calories)\n\t1 medium orange");
				printf("\n\n\t\tLunch (296 calories)\n\t1 serving Tuna, White Bean & Dill Salad\n\tMeal-Prep Tip: Save a serving of the tuna salad to have for lunch on Day 7");
				printf("\n\n\t\tP.M. Snack (64 calories)\n\t1 cup raspberries");
				printf("\n\n\t\tDinner (457 calories)\n\t1 serving Toaster-Oven Tostada\n\tDaily Totals: 1,206 calories, 55 g protein, 187 g carbohydrates, 55 g fiber, 39 g fat, 8 g sat. fat., 1,203 mg sodium.");

				}


			break;
			case 7: printf("\n");
				if(age<=20&&weight<=50)
				{
				printf("\n\tBreakfast (355calories)\n");
				printf(" \n\n\t 1 serving Avocado Egg Toast\n\t1 cup blueberriss\n\t A.M. Snack (64 calories) \n\t 1 cup raspberries");
				printf("\n\n\t\t Lunch (366 calories)\n\t 1 servingTuna, White Bean & Dill Salad\n\t1 slice whole-wheat bread, toasted\n\t P.M. Snack (62 calories)\n\t 1 medium orange  ");
				printf("\n\n\t\t Dinner (374 calories)\n\t1 serving Skillet Lemon Chicken & Potatoes with KaleDaily Totals: 1,220 calories, 64 g protein, 132 g carbohydrates, 32 g fiber, 51 g fat, 9 g sat. fat., 1,275 mg sodium.");


				}
				else if (age<=20&&weight>=50)
				{
				    printf("");
				printf("\n\tBreakfast (355calories)\n");
				printf(" \n\n\t 1 serving Avocado Egg Toast\n\t1 cup blueberriss\n\t A.M. Snack (64 calories) \n\t 1 cup raspberries");
				printf("\n\n\t\t Lunch (366 calories)\n\t 1 servingTuna, White Bean & Dill Salad\n\t1 slice whole-wheat bread, toasted\n\t P.M. Snack (62 calories)\n\t 1 medium orange  ");
				printf("\n\n\t\t Dinner (374 calories)\n\t1 serving Skillet Lemon Chicken & Potatoes with KaleDaily Totals: 1,220 calories, 64 g protein, 132 g carbohydrates, 32 g fiber, 51 g fat, 9 g sat. fat., 1,275 mg sodium.");



				}
				else if (age>=20 &&weight<=50)

				{
				printf(".");
				printf("\n\tBreakfast (355calories)\n");
				printf(" \n\n\t 1 serving Avocado Egg Toast\n\t1 cup blueberriss\n\t A.M. Snack (64 calories) \n\t 1 cup raspberries");
				printf("\n\n\t\t Lunch (366 calories)\n\t 1 servingTuna, White Bean & Dill Salad\n\t1 slice whole-wheat bread, toasted\n\t P.M. Snack (62 calories)\n\t 1 medium orange  ");
				printf("\n\n\t\t Dinner (374 calories)\n\t1 serving Skillet Lemon Chicken & Potatoes with KaleDaily Totals: 1,220 calories, 64 g protein, 132 g carbohydrates, 32 g fiber, 51 g fat, 9 g sat. fat., 1,275 mg sodium.");



				}
				else if (age>=20 && weight>=50)
				{   	printf("");
				printf("\n\tBreakfast (355calories)\n");
				printf(" \n\n\t 1 serving Avocado Egg Toast\n\t1 cup blueberriss\n\t A.M. Snack (64 calories) \n\t 1 cup raspberries");
				printf("\n\n\t\t Lunch (366 calories)\n\t 1 servingTuna, White Bean & Dill Salad\n\t1 slice whole-wheat bread, toasted\n\t P.M. Snack (62 calories)\n\t 1 medium orange  ");
				printf("\n\n\t\t Dinner (374 calories)\n\t1 serving Skillet Lemon Chicken & Potatoes with KaleDaily Totals: 1,220 calories, 64 g protein, 132 g carbohydrates, 32 g fiber, 51 g fat, 9 g sat. fat., 1,275 mg sodium.");




				}
				else
				{
				printf("");
				printf("\n\tBreakfast (355calories)\n");
				printf(" \n\n\t 1 serving Avocado Egg Toast\n\t1 cup blueberriss\n\t A.M. Snack (64 calories) \n\t 1 cup raspberries");
				printf("\n\n\t\t Lunch (366 calories)\n\t 1 servingTuna, White Bean & Dill Salad\n\t1 slice whole-wheat bread, toasted\n\t P.M. Snack (62 calories)\n\t 1 medium orange  ");
				printf("\n\n\t\t Dinner (374 calories)\n\t1 serving Skillet Lemon Chicken & Potatoes with KaleDaily Totals: 1,220 calories, 64 g protein, 132 g carbohydrates, 32 g fiber, 51 g fat, 9 g sat. fat., 1,275 mg sodium.");


				}


			break;
			default : printf("\n\t\tMr.%s you enter worng Key ",a);
				printf("\n\t\t\tPlease restart program");
		 break;
		 }
		 break;
		 default : printf("\n\t\tMr.%s you enter worng Key ",a);
			   printf("\n\t\t\t Please restart program");
			   break;

	}



       //	printf("%s",a);
	getch();
}
