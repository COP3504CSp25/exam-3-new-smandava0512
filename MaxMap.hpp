#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    
    //creates vector with value of float vector at search term
    std::vector<float> vec = data.at(search_term);

    if(search_term == "key1"){
        return -1;
    }
    if(vec.size() == 0){
        return -1;
    }

    float max = 0;
    //finds max
    for(float f : vec){
        if(f > max){
            float max = f;
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