#include<stdio.h>
#define players 8

struct player_info {
    char player_name[20];
    char team_name[30];
    float bat_avg;
};

void player_info_input(struct player_info player[]); // Corrected function signature
int max(struct player_info player[]); // Corrected function signature
void player_info_output(struct player_info player[], int high_bat_one); // Corrected function signature

int main() {
    int x;
    struct player_info player[players];
    printf("Please enter the details of players below\n");
    player_info_input(player);
    x = max(player);
    printf("The details of the highest Batting average player are: \n");
    player_info_output(player, x);
    return 0; // Added return statement
}

void player_info_input(struct player_info player[]) {
    int i;
    for (i = 0; i < players; i++) {
        getchar(); // To consume the newline character left by previous input
        printf("Please enter player name: ");
        fgets(player[i].player_name, 20, stdin);
        printf("Please enter team name: ");
        fgets(player[i].team_name, 30, stdin);
        printf("Please enter batting average: ");
        scanf("%f", &player[i].bat_avg); // Corrected format specifier
    }
}

int max(struct player_info player[]) {
    int i, x = 0;
    float max = player[0].bat_avg;
    for (i = 1; i < players; i++) {
        if (player[i].bat_avg > max) {
            max = player[i].bat_avg;
            x = i;
        }
    }
    return x;
}

void player_info_output(struct player_info player[], int high_bat_one) {
    printf("Player Name: %s", player[high_bat_one].player_name);
    printf("Team Name: %s", player[high_bat_one].team_name);
    printf("Batting Average: %.2f\n", player[high_bat_one].bat_avg);
}