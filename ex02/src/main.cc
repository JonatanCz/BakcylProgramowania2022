#include "ex02/Language.hh"
#include "ex02/English.hh"
#include "ex02/German.hh"
#include <vector>
#include <iostream>

int main(int argc, char** argv) {
  auto v = std::vector<Language*>();

  auto e = English();
  auto g = German();

  e.addTranslation("Dietyloamid kwasu lizergowego", "Lysergic acid diethylamide");
  g.addTranslation("Dietyloamid kwasu lizergowego", "Lysergsäurediethylamid");

  v.push_back(&e);
  v.push_back(&g);

  std::cout << "Dietyloamid kwasu lizergowego" << '\n';
  for (auto i : v) {
    std::cout << i->getLanguage() << ": " << i->getTranslation("Dietyloamid kwasu lizergowego") << '\n';
  }

  return 0;
}