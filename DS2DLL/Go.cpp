#include "Go.h"

#include "AIQuery.h"
#include "GoInventory.h"
#include "GoMagic.h"

FEX float Go::GetAlterationSum(eAlteration alteration) {
    float sum = 0.0f;
    if (magic) {
        sum += magic->GetAlterationSum(alteration);
    }
    if (inventory) {
        inventory->ForEachEquippedItem([alteration, &sum](eEquipSlot slot, Go* item) {
            if (item->magic) {
                sum += item->magic->GetAlterationSum(alteration);
            }
        });
    }
    return sum;
}
