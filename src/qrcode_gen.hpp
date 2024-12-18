#pragma once

#include "square_image.hpp"
#include <string>
#include <vector>

class QRCodeGen
{
    public:
        QRCodeGen(unsigned version, unsigned ecc);

        void init (unsigned scale);
        bool generate(std::string str);//generates qr code based on passed string 
        const SquareImage& getImage();

    private:
        unsigned mVersion;
        unsigned mEcc;
        unsigned mScale;

        std::string mFileName;
        std::vector<uint8_t> mQrCodeData;

        bool checkIfStringFits(std::string str, unsigned version, unsigned eccType);

        SquareImage mSquareImage;
};