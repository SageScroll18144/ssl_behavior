#include <bits/stdc++.h>
#include "struct_base.cpp"

using namespace std;

int main(){
    // Robot robot("roboxinho");
    // robot.setID(1130);
    // printf("A ID é: %d\n", robot.getID());

    vector<Robot> players;
    
    Robot robot_1("Goleiro");
    robot_1.setID(1);
    players.push_back(robot_1);

    Robot robot_2("A");
    robot_2.setID(2);
    players.push_back(robot_2);
    
    Robot robot_3("B");
    robot_3.setID(3);
    players.push_back(robot_3);

    Robot robot_4("C");
    robot_4.setID(4);
    players.push_back(robot_4);
    
    Robot robot_5("D");
    robot_5.setID(5);
    players.push_back(robot_5);

    for(Robot i : players){
        cout<<"Nome: "<<i.getName();
        printf(" ID: %d\n", i.getID());
    }

    printf("criou\n");
    return 0;
}