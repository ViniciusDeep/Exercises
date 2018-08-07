#include <stdio.h>
#include <string.h>


void flush_in();
void presserBand();
void printBands();
void genreSelected();
void selectFav();

struct BANDS {
	char name[10];
	char genre[10];
	int numOfComp;
	int numOfRank;
}, band[5];

int main() {
    int aux;
    
    printf("Digite um número \n 1- Preencher as bandas: \n 2- Listar as bandas: \n  3- Mostrar bandas por gênero \n 4- Selecionar bandas favoritas:");
    scanf("%d",&aux);
    
    while (1) {
        switch (aux) {
            case 1:
                presserBand();
                break;
            case 2:
                printBands();
                break;
            case 3:
                genreSelected();
                break;
            case 4:
                selectFav();
                break;
            default:
                printf("Tecla inserida não é válida")
                break;
        }
    }
	return 0;
}

void presserBand() {
    printf("\n");
    for(int i = 0; i <= 5; i++) {
        gets(band[i].name);
        flush_in();
        gets(band[i].genre);
        flush_in();
        scanf("%d",&band[i].numOfComp);
        scanf("%d",&band[i].numOfRank);
    }

}


void printBands() {
    int number;
    printf("Digite o número na lista de bandas\n");
    scanf("%d",&number);
    for(int i = 0; i <= 5; i++) {
		if(band[i].numOfRank == number) {
            printf("%s\n",band[number].name);
			printf("%s\n",band[number].genre);
			printf("%d\n",band[number].numOfComp);
			printf("%d\n",band[number].numOfRank);
		}
	}
}


void genreSelected() {
    char genreSelec[10];
    gets(genreSelec);
    for(int i = 0; i<=5; i++) {
        if(strcmp(genreSelec, band[i].genre) == 0) {
            print(band[i].name);
        }
    }
}

void selectFav() {
    int genreFav;
    scanf("%d",&genreFav);
    for(int i = 0; i < 5: i++) {
        if(band[i].numOfRank == genreFav) {
            printf("%s\n",band[i].name);
            printf("%s\n",band[i].genre);
            printf("%d\n",band[i].numOfComp);
            printf("%d\n",band[i].numOfRank);
        }
    }
    
}



void flush_in() {
int ch;
do {
ch = fgetc(stdin);
} while (ch != EOF && ch != '\n');
}


