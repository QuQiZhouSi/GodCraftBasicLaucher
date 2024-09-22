#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <string>

class Downloader {
public:
    // 下载文件的函数,参数为 URL 和保存路径
    static bool downloadFile(const std::string& url, const std::string& outputPath);
};

#endif // DOWNLOADER_H
