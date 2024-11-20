#include <map>
#include <iostream>



void print_map(std::string_view comment, const std::map<std::string, int>& m)
{
  std::cout << comment;
  // Iterate using C++17 facilities
  for (const auto& [key, value] : m)
    std::cout << '[' << key << "] = " << value << "; ";

  // C++11 alternative:
  //  for (const auto& n : m)
  //      std::cout << n.first << " = " << n.second << "; ";
  //
  // C++98 alternative:
  //  for (std::map<std::string, int>::const_iterator it = m.begin(); it != m.end(); ++it)
  //      std::cout << it->first << " = " << it->second << "; ";

  std::cout << '\n';
}

int main() {
  std::map<std::string, int> m{{"CPU", 10}, {"GPU", 15}, {"RAM", 20}};

  print_map("1) Initial map: ", m);

  m["CPU"] = 25; // update an existing value
  m["SSD"] = 30; // insert a new value
  m.insert(std::pair<std::string, int>("UTIPUTI", 1000));
  print_map("2) Updated map: ", m);

  return 0;
}