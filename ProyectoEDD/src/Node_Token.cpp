#include "Node_Token.h"
#include <iostream>
#include <string>

using namespace std;

Node_Token::Node_Token(int id1,int point,string caracterr,int number_Tooken)
{
    //ctor
    id = id1;
    points = point;
    caracter = caracterr;
    number_token = number_Tooken;
    next_Token = NULL;

}

Node_Token::~Node_Token()
{
    //dtor
}
    //begin methos sets
void Node_Token::setPoint(int point1)
{
    this->points = point1;
}

void Node_Token::setCaracter(string caracter1)
{
    this->caracter = caracter1;
}

void Node_Token::setNumber_Token(int number_token1)
{
    this->number_token = number_token1;

}

void Node_Token::setNext_Token(Node_Token *next_token1)
{

    this->next_Token = next_token1;
}

void Node_Token::setId(int id1)
{
    id = id1;

}
    //begin methods gets


int Node_Token::getPoint()
{
    return points;
}

string Node_Token::getCaracter()
{
    return caracter;
}

int Node_Token::getNumber_Token()
{
    return number_token;

}

Node_Token * Node_Token::getNext_Token()
{

    return next_Token;
}

int Node_Token::getId()
{
    return id;
}



