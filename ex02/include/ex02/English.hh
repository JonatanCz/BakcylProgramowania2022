#ifndef BAKCYLPROGRAMOWANIA2022_ENGLISH_HH
#define BAKCYLPROGRAMOWANIA2022_ENGLISH_HH
#include "Language.hh"

class English : public Language {
public:
  std::string getLanguage() override;
  bool addTranslation(std::string inputToTranslationInPolish, std::string translatedInput) override;
  bool updateTranslation(std::string inputToTranslationInPolish, std::string translatedInput) override;
  std::string getTranslation(std::string) override;
private:
  std::map<std::string, std::string> translations;
};

#endif //BAKCYLPROGRAMOWANIA2022_ENGLISH_HH
