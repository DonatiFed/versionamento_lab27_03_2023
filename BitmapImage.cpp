#include "BitmapImage.h"
bool BitmapImage::save(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}

bool BitmapImage::resize(int width, int height) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}



BitmapImage::BitmapImage() : width(640), height(480),channels(3), depth(8) {
    buffer = new char[width * height * channels];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if ((fileExt == "jpg") || (fileExt == "png") || (fileExt == "bmp")) {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}


BitmapImage::~BitmapImage() {
    delete[] buffer;
}
