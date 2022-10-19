#ifndef BAKCYLPROGRAMOWANIA2022_LANGUAGE_HH
#define BAKCYLPROGRAMOWANIA2022_LANGUAGE_HH
#include <string>
#include <map>

class Language {
public:
  virtual std::string getLanguage() = 0;
  virtual bool addTranslation(std::string inputToTranslationInPolish, std::string translatedInput) = 0;
  virtual bool updateTranslation(std::string inputToTranslationInPolish, std::string translatedInput) = 0;
  virtual std::string getTranslation(std::string) = 0;
};

#endif //BAKCYLPROGRAMOWANIA2022_LANGUAGE_HH
