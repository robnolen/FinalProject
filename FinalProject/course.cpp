//
//  course.cpp
//  FinalProject
//
//  Created by Robert Nolen on 12/6/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//

#include "FinalProject.h"
#include "course.h"
#include <fstream>


Course::Course(stdString name)
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
    std::cout << courseName;
}
