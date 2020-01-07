#include <iostream>
using namespace std;

class Fraction {

    public:
        Fraction() : Fraction(1, 2) {}
        Fraction(int decimal, int fraction): mNumerator(decimal), mDenominator(fraction) {}

        Fraction Add(Fraction& value) const;
        Fraction Subtract(Fraction& value) const;
        Fraction Multiply(Fraction& value) const;
        Fraction Divide(Fraction& value) const;
        inline int GetNumerator() const { return mNumerator; }
        inline int GetDenominator() const { return mDenominator; }

        friend ostream& operator<<(std::ostream& consoleOut, const Fraction& frac);

        static const Fraction half;
        static const Fraction third;
        static const Fraction fourth;
        static const Fraction fifth;

    private:
        int mNumerator;
        int mDenominator;
};

Fraction Fraction::Add(Fraction& value) const {
    return Fraction(value.mNumerator + mNumerator, value.mDenominator + mDenominator);
}

Fraction Fraction::Subtract(Fraction& value) const {
    return Fraction(value.mNumerator - mNumerator, value.mDenominator - mDenominator);
}

Fraction Fraction::Divide(Fraction& value) const {
    return Fraction(value.mNumerator / mNumerator, value.mDenominator / mDenominator);
}

Fraction Fraction::Multiply(Fraction& value) const {
    return Fraction(value.mNumerator * mNumerator, value.mDenominator * mDenominator);
}

ostream& operator<<(std::ostream& consoleOut, const Fraction& frac) {
    consoleOut << frac.mNumerator << "/" << frac.mDenominator << endl;
    return consoleOut;
}