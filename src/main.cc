//
// Created by huhua on 2023/8/30.
//
#include <iostream>
#include <boost/filesystem.hpp>
#include <reader_util/reader_util.h>

namespace fs = boost::filesystem;
namespace ru = reader_util;

int main(int argc, char** argv) {
  if (argc < 2) {
    std::cout << "Usage: file-reader font-file-path" << std::endl;
    return -1;
  }


  std::string fontFilePath = std::string(argv[1]);
  if (fs::exists(fontFilePath)) {
    std::cout << fontFilePath << " not exists" << std::endl;
    return -1;
  }

  if (fs::is_directory(fontFilePath)) {
    std::cout << fontFilePath << " is directory, should be a file." << std::endl;
    return -1;
  }


  ru::FileReader reader(fontFilePath);


  std::cout << "hello font" << std::endl;
  return 0;
}