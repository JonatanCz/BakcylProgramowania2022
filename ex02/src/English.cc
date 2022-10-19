#include "ex02/English.hh"

bool English::addTranslation(std::string inputToTranslationInPolish, std::string translatedInput) {
  if (translations.find(inputToTranslationInPolish) == translations.end()) {
    translations.insert(std::pair<std::string, std::string>(inputToTranslationInPolish, translatedInput));
    return true;
  }
  return false;
}

std::string English::getLanguage() {
  return "English";
}

bool English::updateTranslation(std::string inputToTranslationInPolish, std::string translatedInput) {
  if (translations.find(inputToTranslationInPolish) != translations.end()) {
    translations[inputToTranslationInPolish] = translatedInput;
    return true;
  }
  return false;
}

std::string English::getTranslation(std::string inputToTranslationInPolish) {
  if (translations.find(inputToTranslationInPolish) != translations.end()) {
    return translations[inputToTranslationInPolish];
  }
  return std::string{};
}