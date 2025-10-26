#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <array>

constexpr int mapWidth = 80;
constexpr int mapHeight = 25;

std::array<std::array<char, mapWidth + 1>, mapHeight> map;
void ClearMap(){
    for (int i = 0; i < mapHeight; ++i){
        map[i].fill('.');
        map[i][mapWidth] = '\0';
    }
}

void ShowMap(){
    for (int j = 0; j < mapHeight; j++){
        std::cout << map[j].data() << '\n';
    }
}

int main(){
    ClearMap();
    ShowMap();
    getchar();
}