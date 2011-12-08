//
//  FileIO.cpp
//  FinalProject
//
//  Created by Robert Nolen on 12/6/11.
//  Copyright 2011 Greencrayon.org. All rights reserved.
//


#include "FinalProject.h"
#include <fstream>
#include <sstream>

std::stringstream getFileContents(stdString fileName)
{
    std::stringstream data;
    std::ifstream fileStream (fileName.c_str(), std::ios::in);
    stdString line;
    while (getline(fileStream, line))
    {   
        data << line;
    }
    return data;
}
