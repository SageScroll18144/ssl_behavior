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
