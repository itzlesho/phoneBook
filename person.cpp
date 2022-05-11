//
// Created by Andres Gaspar on 5/11/22.
//

#include "person.h"

Person:: Person(const char* name, const char* phone, int level = 0){
    _name = new char[strlen(name)+ 1];
    strcpy(_name, name);
    strcpy(_phone, phone);
    _level = new *level;
}

string Person::ToString()const{
    return string(_name);
}

string Person::ToJson()const{
    stringstream ss;
    ss << "stuff"//update this
    return ss.str();
}

string Person::GetName()const{

}

string Person::GetPhone()const{

}

int Person::GetLevel()const{

}

bool Person::Equals(const Person& person)const{

}

istream Person::Read(istream& input){

}

ostream Person::Write(ostream output)const{

}

Person::~Person(){
    delete[] _name;
}