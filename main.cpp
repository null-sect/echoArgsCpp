#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
  // オプションとそれ以外の配列を格納するベクター
  vector<string> options;
  vector<string> args;

  // 引数をループ処理
  for (int i = 1; i < argc; ++i) {
    // '-' から始まる場合はオプション
    if (argv[i][0] == '-') {
      options.push_back(argv[i]);
    } else {
      // それ以外は配列
      args.push_back(argv[i]);
    }
  }

  // オプションと配列を出力
  for (const auto &option: options) {
    cout << option << endl;
  }
  for (const auto &arg: args) {
    cout << arg << endl;
  }
  return 0;
}