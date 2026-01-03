#include <stdio.h>
int main() {
    double income, taxableIncome, tax = 0;
    double standardDeduction = 75000;
    printf("Enter total annual income (FY 2025-26): ");
    scanf("%lf", &income);
    // Apply Standard Deduction for salaried individuals
    taxableIncome = income - standardDeduction;
    if (taxableIncome < 0) taxableIncome = 0;
    printf("\nTaxable Income after Standard Deduction: %.2f\n", taxableIncome);
    // 2025 Budget Rule: Full Rebate if taxable income is <= 12,00,000
    if (taxableIncome <= 1200000) {
        printf("Income Tax: 0.00 (Tax-free up to 12L)\n");
        return 0;
    }
    // Slab-wise calculation for income above 12,00,000
    // Note: If you earn 12,00,001, you pay tax for all previous slabs
    if (taxableIncome > 2400000) {
        tax += (taxableIncome - 2400000) * 0.30;
        taxableIncome = 2400000;
    }
    if (taxableIncome > 2000000) {
        tax += (taxableIncome - 2000000) * 0.25;
        taxableIncome = 2000000;
    }
    if (taxableIncome > 1600000) {
        tax += (taxableIncome - 1600000) * 0.20;
        taxableIncome = 1600000;
    }
    if (taxableIncome > 1200000) {
        tax += (taxableIncome - 1200000) * 0.15;
        taxableIncome = 1200000;
    }
    // Fixed tax for slabs below 12L (only applied if income > 12L)
    // Slab 8L-12L: 10% of 4L = 40,000
    // Slab 4L-8L: 5% of 4L = 20,000
    tax += 40000 + 20000;
    // Add 4% Health and Education Cess
    double cess = tax * 0.04;
    double totalTax = tax + cess;
    printf("Base Tax: %.2f\n", tax);
    printf("Cess (4%%): %.2f\n", cess);
    printf("------------------------------\n");
    printf("Total Tax Payable: %.2f\n", totalTax);
    return 0;
}