#include <substr.h>

void preprocess(const std::string& pattern,std::vector<int>& T, int alph_size ){
    T.resize(alph_size);
    for(int i = 0; i< alph_size; ++i)
        T[i] = pattern.length();
    for(int i = 0; i<pattern.length() -1; ++i)
        T[pattern[i]] = pattern.length() -1 - i;
}

std::vector<int> * search(const std::string& pattern,const std::string& str, int alph_size){
    std::vector<int> T;
    std::vector<int> * index_dump = new std::vector<int>;
    preprocess(pattern,T,alph_size);
    int skip = 0;
    while(str.length()-skip >= pattern.length()){
            int i = pattern.length() -1;
            while(str[skip+i] == pattern[i]){
                if (i == 0){
                    index_dump->push_back(skip);
                    break;
                    }
                --i;
                }
            skip = skip + T[str[skip+pattern.length()-1]];
        }
    return index_dump;
}


