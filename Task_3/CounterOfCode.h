#pragma once
#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
using namespace std;
void findFiles(string path, std::vector<std::filesystem::directory_entry>& a);
bool isSpases(string line, int l, int r);
void parse(filesystem::directory_entry path);
void counter(string pathDirectory, string pathOutput);