in#include <stdio.h>
#include <string>

class Customer {
    std::string name, address;
    int age;
};

class Account {
    std::string acc_type, branch_type;
};

class RBI {
public:
    int with_limit, n;
    double P, r, t, average, total;

    int set_withdrawal_limit() {
        std::string acc_type, branch_type;
        scanf("%s %s", &acc_type, &branch_type);
        if (acc_type == "SAVINGS" && branch_type == "METRO") {
            with_limit = 5000;
        } else {
            with_limit = 4000;
        }
        return with_limit;
    }

    double set_interest_rate() {
        return (P + r) / n * t;
    }

    double set_MAB() {
        return (average + total) / 31;
    }
};

class SBI: public RBI {
    double set_interest_rate() {
        return P * (1 + r / n) + n * t;
    }
    double set_MAB() {
        return (average + total) / 30;
    }
};

class ICICI: public RBI {
    double set_interest_rate() {
        return (P * r) / n + t;
    }
    int set_withdrawal_limit() {
        return 7000;
    }
};

int main() {
    SBI sbi;
    sbi.P = 10.433;
    sbi.r = 7.42;
    sbi.n = 5;
    sbi.t = 7;
    printf("%d", sbi.set_withdrawal_limit());
    return 0;
}