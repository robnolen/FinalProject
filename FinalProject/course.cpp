//
//  course.cpp
//  FinalProject
//
//  Created by Robert Nolen on 12/6/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//

#include <iostream>
#include <string>
#include "course.h"


Course::Course(string name)
{
    courseName = name;
}
Course::~Course()
{
    //todo: implement
}

void Course::addExamScore(int score)
{
    examScores.push_back(score);
}
void Course::addQuizScore(int score)
{
    quizScores.push_back(score);
}
void Course::addLabScore(int score)
{ 
    labScores.push_back(score);
}
void Course::print()
{
    cout << courseName;
}