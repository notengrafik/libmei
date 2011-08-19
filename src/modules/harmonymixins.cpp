

#include "harmonymixins.h"
using std::string;
using mei::MeiAttribute;
using mei::AttributeNotFoundException;


mei::FretlocationMixIn::FretlocationMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::FretlocationMixIn::getFret() {
    if (!b->hasAttribute("fret")) {
        throw AttributeNotFoundException("fret");
    }
    return b->getAttribute("fret");
};

void mei::FretlocationMixIn::setFret(std::string _fret) {
    if (!b->hasAttribute("fret")) {
        MeiAttribute *a = new MeiAttribute("fret", _fret);
        b->addAttribute(a);
    }
};

bool mei::FretlocationMixIn::hasFret() {
    return b->hasAttribute("fret");
};

void mei::FretlocationMixIn::removeFret() {
    b->removeAttribute("fret");
};


mei::HarmLogMixIn::HarmLogMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::HarmLogMixIn::getChordref() {
    if (!b->hasAttribute("chordref")) {
        throw AttributeNotFoundException("chordref");
    }
    return b->getAttribute("chordref");
};

void mei::HarmLogMixIn::setChordref(std::string _chordref) {
    if (!b->hasAttribute("chordref")) {
        MeiAttribute *a = new MeiAttribute("chordref", _chordref);
        b->addAttribute(a);
    }
};

bool mei::HarmLogMixIn::hasChordref() {
    return b->hasAttribute("chordref");
};

void mei::HarmLogMixIn::removeChordref() {
    b->removeAttribute("chordref");
};


mei::HarmVisMixIn::HarmVisMixIn(MeiElement *b) {
    this->b = b;
};

MeiAttribute* mei::HarmVisMixIn::getExtender() {
    if (!b->hasAttribute("extender")) {
        throw AttributeNotFoundException("extender");
    }
    return b->getAttribute("extender");
};

void mei::HarmVisMixIn::setExtender(std::string _extender) {
    if (!b->hasAttribute("extender")) {
        MeiAttribute *a = new MeiAttribute("extender", _extender);
        b->addAttribute(a);
    }
};

bool mei::HarmVisMixIn::hasExtender() {
    return b->hasAttribute("extender");
};

void mei::HarmVisMixIn::removeExtender() {
    b->removeAttribute("extender");
};

MeiAttribute* mei::HarmVisMixIn::getRendgrid() {
    if (!b->hasAttribute("rendgrid")) {
        throw AttributeNotFoundException("rendgrid");
    }
    return b->getAttribute("rendgrid");
};

void mei::HarmVisMixIn::setRendgrid(std::string _rendgrid) {
    if (!b->hasAttribute("rendgrid")) {
        MeiAttribute *a = new MeiAttribute("rendgrid", _rendgrid);
        b->addAttribute(a);
    }
};

bool mei::HarmVisMixIn::hasRendgrid() {
    return b->hasAttribute("rendgrid");
};

void mei::HarmVisMixIn::removeRendgrid() {
    b->removeAttribute("rendgrid");
};


