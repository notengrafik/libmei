/*
 Copyright (c) 2011-2012 Andrew Hankinson, Alastair Porter and Others

 Permission is hereby granted, free of charge, to any person obtaining
 a copy of this software and associated documentation files (the
 "Software"), to deal in the Software without restriction, including
 without limitation the rights to use, copy, modify, merge, publish,
 distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to
 the following conditions:

 The above copyright notice and this permission notice shall be
 included in all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef MEI_XMLEXPORT_H_
#define MEI_XMLEXPORT_H_

#include <string>
#include <vector>
#include <utility>

#include "meidocument.h"

namespace mei {

class XmlExportImpl;

/**
 * \brief Export a document to XML.
 */
class MEI_EXPORT XmlExport {
    public:
        XmlExport(MeiDocument *doc);
        /** \brief Save a document to a file. */
        static bool documentToFile(MeiDocument *doc, std::string filename);

        /** \brief Return the XML text of a document. */
        static std::string documentToText(MeiDocument *doc);

        /** \brief Convert an MeiElement segment to text. */
        static std::string meiElementToText(MeiElement *element);
    virtual ~XmlExport();
    private:
        XmlExportImpl *impl;
};
}

#endif  // MEI_XMLEXPORT_H_