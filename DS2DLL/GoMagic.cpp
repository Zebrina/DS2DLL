#include "GoMagic.h"

FEX float GoMagic::GetAlterationSum(eAlteration alteration) {
    float sum = 0.0f;
    if (enchantments) {
        enchantments->enchantments.ForEach([alteration, &sum](Enchantment* enchantment) {
            if (enchantment->alteration == alteration) {
                sum += enchantment->value;
            }
        });
    }
    return sum;
}
