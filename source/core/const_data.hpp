#ifndef CONST_DATA_H
#define CONST_DATA_H

#include <QString>

class const_data {
public:
  const_data();

  QString getDefaultTextPresence();
  QString getGithubUrl();
  QString getSearchPlaceholder();
  QString getTextPresencePlaceholder();
  QString getForegroundColorDialogTitle();
  QString getBackgroundColorDialogTitle();

  int getDefaultFontsTextSize();
  int getDefaultSliderPosition();
  int getDefaultTextLabelSize();
  int getMinRangeOfTextSizeChanger();
  int getMaxRangeOfTextSizeChanger();

private:
  const QString DEFAULT_TEXT_PRESENCE_FONTPICKER = "The quick brown fox jumps over the lazy dog";
  const QString GITHUB_URL = "https://github.com/letelete/Fontly";
  const QString SEARCH_FONTPICKER_PLACEHOLDER = "Search...";
  const QString TEXT_PRESENCE_FONTPICKER_PLACEHOLDER = "Type something here...";
  const QString FOREGROUND_COLOR_DIALOG_TITLE_FONTPICKER = "Choose text color";
  const QString BACKGROUND_COLOR_DIALOG_TITLE_FONTPICKER = "Choose background color";

  const int DEFAULT_FONTS_TEXT_SIZE_FONTPICKER = 40;
  const int DEFAULT_SLIDER_POSITION_FONTPICKER = DEFAULT_FONTS_TEXT_SIZE_FONTPICKER;
  const int DEFAULT_TEXT_LABEL_SIZE_FONTPICKER = DEFAULT_FONTS_TEXT_SIZE_FONTPICKER + 30;
  const int MIN_RANGE_OF_TEXT_SIZE_CHANGER_FONTPICKER = 20;
  const int MAX_RANGE_OF_TEXT_SIZE_CHANGER_FONTPICKER = 150;
};

#endif // CONST_DATA_H
