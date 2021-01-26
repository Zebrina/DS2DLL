#include "GoMagic.h"

FEX float GoMagic::GetAlterationSum(eAlteration alteration) {
    struct SumEnchantmentAlteration {
        eAlteration alteration;
        float sum = 0.0f;
        void operator()(Enchantment* enchantment) {
            if (enchantment->alteration == alteration) {
                sum += enchantment->value;
            }
        }
    };

    float sum = 0.0f;
    if (enchantments) {
        SumEnchantmentAlteration enchantSum;
        enchantSum.alteration = alteration;
        enchantments->enchantments.ForEach(enchantSum);
        sum += enchantSum.sum;
    }
    return sum;
}
