#include "ex02/German.hh"

bool German::addTranslation(std::string inputToTranslationInPolish, std::string translatedInput) {
  if (translations.find(inputToTranslationInPolish) == translations.end()) {
    translations.insert(std::pair<std::string, std::string>(inputToTranslationInPolish, translatedInput));
    return true;
  }
  return false;
}

std::string German::getLanguage() {
  return "German";
}

bool German::updateTranslation(std::string inputToTranslationInPolish, std::string translatedInput) {
  if (translations.find(inputToTranslationInPolish) != translations.end()) {
    translations[inputToTranslationInPolish] = translatedInput;
    return true;
  }
  return false;
}

std::string German::getTranslation(std::string inputToTranslationInPolish) {
  if (translations.find(inputToTranslationInPolish) != translations.end()) {
    return translations[inputToTranslationInPolish];
  }
  return std::string{};
}