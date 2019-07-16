/*Copyright 2019 <Alex Bieliakov> bieliakov.alex@gmail.com*/

#include <iostream>
#include <map>

namespace {

std::map<char, const char*> dictionary(
    {{'A', "Ф"}, {'B', "И"}, {'C', "С"},  {'D', "В"}, {'E', "У"}, {'F', "А"},
     {'G', "П"}, {'H', "Р"}, {'I', "Ш"},  {'J', "О"}, {'K', "Л"}, {'L', "Д"},
     {'M', "Ь"}, {'N', "Т"}, {'O', "Щ"},  {'P', "З"}, {'Q', "Й"}, {'R', "К"},
     {'S', "Ы"}, {'T', "Е"}, {'U', "Г"},  {'V', "М"}, {'W', "Ц"}, {'X', "Ч"},
     {'Y', "Н"}, {'Z', "Я"}, {'{', "Х"},  {'}', "Ъ"}, {':', "Ж"}, {'\"', "Э"},
     {'<', "Б"}, {'>', "Ю"}, {'~', "Ё"},  {'a', "ф"}, {'b', "и"}, {'c', "с"},
     {'d', "в"}, {'e', "у"}, {'f', "а"},  {'g', "п"}, {'h', "р"}, {'i', "ш"},
     {'j', "о"}, {'k', "л"}, {'l', "д"},  {'m', "ь"}, {'n', "т"}, {'o', "щ"},
     {'p', "з"}, {'q', "й"}, {'r', "к"},  {'s', "ы"}, {'t', "е"}, {'u', "г"},
     {'v', "м"}, {'w', "ц"}, {'x', "ч"},  {'y', "н"}, {'z', "я"}, {'[', "х"},
     {']', "ъ"}, {';', "ж"}, {'\'', "э"}, {',', "б"}, {'.', "ю"}, {'`', "ё"}});
}  // namespace

int main(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << "Wrong usage. Please, enter latin string as argument or "
                 "--help option"
              << std::endl;
    return 0;
  }

  std::string first_argument(argv[1]);
  if (first_argument == "--help" || first_argument == "-h") {
    std::cout << "lat_rus input_string" << std::endl;
  } else {
    for (const auto &i : first_argument) {
      std::cout << dictionary[i];
    }
    std::cout << std::endl;
  }
  return 0;
}
