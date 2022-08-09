#include <bits/stdc++.h>

using namespace std;

class Robot{
    public:
        Robot(string name);
        string getName();
        int getID();
        void setID(int ID);
        bool hasABall();
        void changeStateBall(bool state);
        void setPos(int x, int y);
        void setPos(pair<int, int> new_pos);
        pair<int, int> getPos();

    private:
        int ID;
        string name;
        bool state_ball;
        pair<int, int> robot_position;
};
Robot::Robot(string name){
    this->name = name;
    this->state_ball = false;
}
string Robot::getName(){
    return Robot::name;
}
int Robot::getID(){
    return Robot::ID;
}
void Robot::setID(int ID){
    this->ID = ID;
}
bool Robot::hasABall(){
    return this->state_ball;
}
void Robot::changeStateBall(bool state){
    this->state_ball = state;
}
void Robot::setPos(int x, int y){
    this->robot_position = {x, y};    
}
void Robot::setPos(pair<int, int> new_pos){
    this->robot_position = new_pos;   
}
pair<int, int> Robot::getPos(){
    return this->robot_position;
}
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