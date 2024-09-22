#include "downloader.h"
#include "laucher.h"
#include "unistd.h"
#include<bits/stdc++.h>
using namespace std;

int main(){
    nlohmann::json congig = Untils::loadConfig("config.json");
    if(config.empty()){
        cerr<<" 配置无效! " <<endl;
        return 1;
    }
    
}