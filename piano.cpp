//Angela Valentine - 2440109221 - LG01
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int menu();

int empat(){
	system("cls");
	puts("Hear the masterpiece\n");
	FILE* in = fopen("record.txt", "r");
	
	char str[200];
	fscanf(in, "%s", str);
	int n = strlen(str);
	
	for(int i=0; i<n; i++){
		
		if(str[i] == 'C'){		    
			Beep(262,500);
			printf("C ");
    	}else if(str[i] == 'D'){    		
			Beep(294,500);
			printf("D ");
		}else if(str[i] == 'E'){    		
			Beep(330,500);
			printf("E ");
		}else if(str[i] == 'F'){    		
			Beep(349,500);
			printf("F ");
		}else if(str[i] == 'G'){    		
			Beep(392,500);
			printf("G ");	
		}else if(str[i] == 'A'){    		
			Beep(440,500);
			printf("A ");
		}else if(str[i] == 'B'){    		
			Beep(494,500);
			printf("B ");
		}
	}
	fclose(in);
	printf("\n\nPress Enter to continue...");
	getchar();
	getchar();
	return 0;
}

int tiga(){
	system("cls");
	puts("Let's record your own song!\n");
	FILE* in = fopen("record.txt", "w");
	puts("Lets record using Enter 1, 2, 3, 4, 5, 6, 7 note.");
	puts("Press X to stop the record");
	printf(">> ");
	
	for(int i=0; i<1000; i++){
		char str = getch();
		
		if(str == '1'){		    
			Beep(262,500);
			printf("C ");
			fprintf(in, "%c", 'C');
    	}else if(str == '2'){    		
			Beep(294,500);
			printf("D ");
			fprintf(in, "%c", 'D');
		}else if(str == '3'){    		
			Beep(330,500);
			printf("E ");
			fprintf(in, "%c", 'E');
		}else if(str == '4'){    		
			Beep(349,500);
			printf("F ");
			fprintf(in, "%c", 'F');
		}else if(str == '5'){    		
			Beep(392,500);	
			printf("G ");
			fprintf(in, "%c", 'G');
		}else if(str == '6'){    		
			Beep(440,500);
			printf("A ");
			fprintf(in, "%c", 'A');
		}else if(str == '7'){    		
			Beep(494,500);
			printf("B ");
			fprintf(in, "%c", 'B');
		}else if(str == 'x' || str == 'X'){
			menu();
			break;
		}
	}
	fclose(in);
	return 0;
}

int dua(){
	system("cls");
	puts("Here's the song list:");
	puts("1. I Love You");
	puts("2. Itsy Bitsy Spider");
	puts("3. Rain Rain Go away");
	printf(">> ");
	
	int input;
	scanf("%d", &input);
	puts("");
	
	char title[5][200], note[5][200];
	FILE* in = fopen("songs.txt", "r");
	for(int i=1; i<=3; i++){
		fscanf(in, "%[^\n]\n", title[i]);
		fscanf(in, "%[^\n]\n", note[i]);
		
		if(i == input){
			int n = strlen(note[i]);
			for(int j=0; j<n; j++){
				if(note[i][j] == 'C'){	
					Beep(262,500);
					printf("C ");
    			}else if(note[i][j] == 'D'){    				
					Beep(294,500);
					printf("D ");
				}else if(note[i][j] == 'E'){					
					Beep(330,500);
					printf("E ");
				}else if(note[i][j] == 'F'){					
					Beep(349,500);
					printf("F ");
				}else if(note[i][j] == 'G'){					
					Beep(392,500);
					printf("G ");	
				}else if(note[i][j] == 'A'){					
					Beep(440,500);
					printf("A ");
				}else if(note[i][j] == 'B'){
					Beep(494,500);
					printf("B ");
				}
			}
			printf("\n\nPress Enter to continue...");
		}
	}
	fclose(in);
	getchar();
	getchar();
	return 0;
}

int satu(){
	system("cls");
	puts("Let's play a piano\n");
	puts("Enter 1, 2, 3, 4, 5, 6, 7 to hear some noise.");
	puts("Press X to go back to the menu");
	printf(">> ");
	
	
	for(int i=0; i<1000; i++){
		char str = getch();
		
		if(str == '1'){		    
			Beep(262,500);
			printf("C ");
    	}else if(str == '2'){    		
			Beep(294,500);
			printf("D ");
		}else if(str == '3'){    		
			Beep(330,500);
			printf("E ");
		}else if(str == '4'){    		
			Beep(349,500);
			printf("F ");
		}else if(str == '5'){    		
			Beep(392,500);	
			printf("G ");
		}else if(str == '6'){    		
			Beep(440,500);
			printf("A ");
		}else if(str == '7'){    		
			Beep(494,500);
			printf("B ");
		}else if(str == 'x' || str == 'X'){
    		menu();
    		break;
		}
	}
	return 0;
}

int menu(){
	system("cls");
	puts("P      I       A      N       O\n");
	puts("Choose wisely:");
	puts("1. Play this simple piano");
	puts("2. Wanna hear some song?");
	puts("3. Record your own masterpiece!!");
	puts("4. Hear your record >___<");
	puts("5. Exit");
	printf(">> ");
	int input;
	scanf("%d", &input);
	switch(input){
		case 1:{
			satu();
			break;
		}
		case 2:{
			dua();
			menu();
			break;
		}
		case 3:{
			tiga();
			break;
		}
		case 4:{
			empat();
			menu();				
			break;			
		}
		case 5:{
			break;
		}
	}
}

int main(){
	menu();
    return 0;
}
