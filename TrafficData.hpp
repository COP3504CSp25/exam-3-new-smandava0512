#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

std::map<std::string, int> loadTrafficData(const std::string& filename) {

  //create map
  std::map<std::string, int> m;

  //load traffic data file
  std::ifstream file(filename);
  std::string key;
  int value = 0;

  while(file.is_open()){
    file.read(&key, sizeof(char) * 3);
    file.read(&value, sizeof(int));

    //if reach end of file
    file.close();
  }


}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) {
    //implement your function here!
}