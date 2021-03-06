// --------------------------------------------------------------------
// crow_riot, 2014
// --------------------------------------------------------------------

#ifndef FLASHATTRIBUTES_H
#define FLASHATTRIBUTES_H


#include <string>


/// Flash plugin attributes
/// http://helpx.adobe.com/flash/kb/flash-object-embed-tag-attributes.html
class FlashAttributes
{
public:
    /// "true"
    static const char* BooleanTrue;
    /// "false"
    static const char* BooleanFalse;

    /// quality attr enumeration
    enum { QualityCount = 6, DefaultQuality=1 };
    /// quality attributes
    static const char* Quality[QualityCount];

    /// scale attr enumeration
    enum { ScaleCount=4, DefaultScale=0 };
    ///scale attributes
    static const char* Scale[ScaleCount];

public:
    /// constructor
    /// intializes the attributes to their default values.
    FlashAttributes();

    /// constructor
    /// intializes attributes using the command line
    FlashAttributes(int argc, char* argv[]);

public:
    /// "menu" attribute
    std::string menu;
    /// "quality" attribute
    std::string quality;
    /// "scale" attribute
    std::string scale;

    /** pandora attributes */

    /// width of flash window, source width of framebuffer
    int window_src_width;
    /// height of flash window, source height of framebuffer
    int window_src_height;

    /// framebuffer target width
    int window_trg_width;
    /// framebuffer target height
    int window_trg_height;

    /** fake location */
    std::string location;
};


/// load attributes from given ini file and the given swffile
/// returns true if the attributes were initialized
bool LoadAttributes( const char* inifile, const char* swffile, FlashAttributes* attributes );


#endif


