#ifndef BAKCYLPROGRAMOWANIA2022_GERMAN_HH
#define BAKCYLPROGRAMOWANIA2022_GERMAN_HH
#include "Language.hh"

class German : public Language {
public:
  std::string getLanguage() override;
  bool addTranslation(std::string inputToTranslationInPolish, std::string translatedInput) override;
  bool updateTranslation(std::string inputToTranslationInPolish, std::string translatedInput) override;
  std::string getTranslation(std::string) override;
private:
  std::map<std::string, std::string> translations;
};

#endif //BAKCYLPROGRAMOWANIA2022_GERMAN_HH
