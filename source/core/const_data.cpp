#include "const_data.hpp"

const_data::const_data() {}

QString const_data::getDefaultTextPresence() {
  return DEFAULT_TEXT_PRESENCE_FONTPICKER;
}

QString const_data::getGithubUrl() {
    return GITHUB_URL;
}

QString const_data::getSearchPlaceholder() {
  return SEARCH_FONTPICKER_PLACEHOLDER;
}

QString const_data::getTextPresencePlaceholder() {
  return TEXT_PRESENCE_FONTPICKER_PLACEHOLDER;
}

QString const_data::getForegroundColorDialogTitle() {
  return FOREGROUND_COLOR_DIALOG_TITLE_FONTPICKER;
}

QString const_data::getBackgroundColorDialogTitle() {
  return BACKGROUND_COLOR_DIALOG_TITLE_FONTPICKER;
}

int const_data::getDefaultFontsTextSize() {
    return DEFAULT_FONTS_TEXT_SIZE_FONTPICKER;
}

int const_data::getDefaultSliderPosition() {
    return DEFAULT_SLIDER_POSITION_FONTPICKER;
}

int const_data::getDefaultTextLabelSize() {
    return DEFAULT_TEXT_LABEL_SIZE_FONTPICKER;
}

int const_data::getMinRangeOfTextSizeChanger() {
    return MIN_RANGE_OF_TEXT_SIZE_CHANGER_FONTPICKER;
}

int const_data::getMaxRangeOfTextSizeChanger() {
    return MAX_RANGE_OF_TEXT_SIZE_CHANGER_FONTPICKER;
}
