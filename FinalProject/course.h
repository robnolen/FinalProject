//
//  course.h
//  FinalProject
//
//  Created by Robert Nolen on 12/6/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//

#ifndef FinalProject_course_h
#define FinalProject_course_h

#include <string>
#include <iostream>
#include <vector>

using namespace std;
class Course
{
public: 
    virtual float calcLabScoresPercent()  const = 0;
    virtual float calcQuizScoresPercent() const = 0;
    virtual float calcExamScoresPercent() const = 0;
    virtual void getScoreData() const = 0;
    
    void addExamScore(int);
    void addQuizScore(int);
    void addLabScore(int);
    void print();
    Course(string);
    ~Course();
    
protected:
    string courseName;
    vector<int> examScores;
    vector<int> quizScores;
    vector<int> labScores;
};


#endif
