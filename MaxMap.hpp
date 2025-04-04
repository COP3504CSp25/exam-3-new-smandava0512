#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    //searches for search_term
    std::vector<float> vec = data.at(search_term);
    
    auto iter = data.begin();
    bool found = false;
    //if search_term not found will return -1
    for(; iter != data.end(); ++iter){
        if ((*iter).first == search_term){
            found = true;
        }
    }

    if(!found){
        return -1;
    }
    
    //works
    float max = 0;

    for(float f : vec){
        if(f > max){
            max = f;
        }
    }

    return max;

}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    
    std::map<std::string, float> return_map;

    auto iter = in_map.begin();

    for(; iter != in_map.end(); ++iter){
        return_map[(*iter).first] = consultMax((*iter).first, in_map);
    }

    return return_map;
    
}