#include "cardfilter.h"

const char *CardFilter::typeName(Type t)
{
    switch (t) {
        case TypeAnd:
            return "AND";
        case TypeOr:
            return "OR";
        case TypeAndNot:
            return "AND NOT";
        case TypeOrNot:
            return "OR NOT";
        default:
            return "";
    }
}

const char *CardFilter::attrName(Attr a)
{
    switch (a) {
        case AttrName:
            return "name";
        case AttrType:
            return "type";
        case AttrColor:
            return "color";
        case AttrText:
            return "text";
        case AttrSet:
            return "set";
        case AttrManaCost:
            return "mana cost";
        case AttrCmc:
            return "cmc";
        case AttrRarity:
            return "rarity";
        case AttrPow:
            return "power";
        case AttrTough:
            return "toughness";
        default:
            return "";
    }
}
