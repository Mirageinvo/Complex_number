#include <iostream>
#include <cmath>
#include "includes/complex_header.hpp"

bool start_tests();
bool test_1();
bool test_2();
bool test_3();
bool test_4();
bool test_5();
bool test_6();
bool test_7();
bool test_8();
bool test_9();
bool test_10();
bool test_11();
bool test_12();
bool test_13();
bool test_14();
bool test_15();
bool test_16();
bool test_17();

int main() {
	bool tests_passed = start_tests();
	if (tests_passed) {
		std::cout << "All the tests have been successfully passed" << std::endl;
	}
	else {
		std::cout<< "Some tests have failed" << std::endl;
	}
	return 0;
}


bool test_1 () {
    Complex_num tmp_f(4.573267, 15.712341);
    Complex_num tmp_s(4.573267, 15.712341);
    Complex_num tmp_t(4.573266, 15.712342);

    if (!(tmp_f == tmp_s)) {
        std::cout << "Test 1 has failed" << std::endl;
        return false;
    }
    if (tmp_t == tmp_f) {
        std::cout << "Test 1 has failed" << std::endl;
		return false;
    }
    return true;
}

bool test_2 () {
    Complex_num tmp_f(4.573267, 15.712341);
    Complex_num tmp_s(4.573267, 15.712341);
    Complex_num tmp_t(4.573266, 15.712342);
    if (tmp_f != tmp_s) {
        std::cout << "Test 2 has failed" << std::endl;
        return false;
    }
    if (!(tmp_f != tmp_t)) {
        std::cout << "Test 2 has failed" << std::endl;
	return false;
    }
    return true;
}

bool test_3 () {
    Complex_num tmp_f(4.5, 7.3);
    Complex_num tmp_s(4.5, 15.5);
    Complex_num res = tmp_f + tmp_s;
    if (fabs(res.real_part - 9) > 1e-9) {
        std::cout << "Test 3 has failed" << std::endl;
        return false;
    }
    if (fabs(res.imag_part - 22.8) > 1e-9) {
        std::cout << "Test 3 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_4 () {
    Complex_num tmp_f(4.57, 15.71);
    Complex_num tmp_s(4.57, 15.71);
    Complex_num res = tmp_f - tmp_s;
    if (fabs(res.real_part) > 1e-9) {
        std::cout << "Test 4 has failed" << std::endl;
        return false;
    }
    if (fabs(res.imag_part) > 1e-9) {
        std::cout << "Test 4 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_5 () {
    Complex_num tmp_f(4.0, 10.0);
    Complex_num tmp_s(4.5, 5.0);
    Complex_num res = tmp_f * tmp_s;
    if (fabs(res.real_part + 32.0) > 1e-9) {
        std::cout << "Test 5 has failed" << std::endl;
        return false;
    }
    if (fabs(res.imag_part - 65.0) > 1e-9) {
        std::cout << "Test 5 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_6 () {
    Complex_num tmp_f(1.2, 3.5);
    Complex_num tmp_s = -tmp_f;
    if (fabs(tmp_s.real_part + 1.2) > 1e-9 && fabs(tmp_s.imag_part + 3.5) > 1e-9) {
        std::cout << "Test 6 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_7 () {
    Complex_num tmp_f(4.0, 10.0);
    tmp_f = tmp_f * 0.5;
    if (fabs(tmp_f.real_part - 2.0) > 1e-9) {
        return false;
    }
    if (fabs(tmp_f.imag_part - 5.0) > 1e-9) {
        return false;
    }
    return true;
}

bool test_8 () {
    Complex_num tmp_f(2.6, 4.2);
    tmp_f = tmp_f / (2.0 / 3.0);
    if (fabs(tmp_f.real_part - 3.9) > 1e-9) {
        std::cout << "Test 8 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.imag_part - 6.3) > 1e-9) {
        std::cout << "Test 8 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_9 () {
    Complex_num tmp_f(2.6, 4.2);
    Complex_num tmp_s(1.4, 11.3);
    tmp_f += tmp_s;
    if (fabs(tmp_f.real_part - 4.0) > 1e-9) {
        std::cout << "Test 9 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.imag_part - 15.5) > 1e-9) {
        std::cout << "Test 9 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_10 () {
    Complex_num tmp_f(2.6, 4.2);
    Complex_num tmp_s(1.4, 11.3);
    tmp_f -= tmp_s;
    if (fabs(tmp_f.real_part - 1.2) > 1e-9) {
        std::cout << "Test 10 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.imag_part + 7.1) > 1e-9) {
        std::cout << "Test 10 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_11 () {
    Complex_num tmp_f(2.0, 4.0);
    Complex_num tmp_s(3.0, 5.0);
    tmp_f *= tmp_s;
    if (fabs(tmp_f.real_part + 14.0) > 1e-9) {
        std::cout << "Test 12 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.imag_part - 22.0) > 1e-9) {
        std::cout << "Test 12 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_12 () {
    Complex_num tmp_f(2.0, 4.0);
    tmp_f /= 0.5;
    if (fabs(tmp_f.real_part - 4) > 1e-9) {
        std::cout << "Test 13 has failed" << std::endl;
        return false;
    }
    if (fabs(tmp_f.imag_part - 8) > 1e-9) {
        std::cout << "Test 13 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_13 () {
    Complex_num tmp_f(3.0, 4.0);
    if (fabs(tmp_f.complex_module() - 5.0) > 1e-9) {
        std::cout << "Test 13 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_14 () {
    Complex_num tmp_f(2.5, 3.5);
    Complex_num tmp_s;
    tmp_s = tmp_f;
    if (abs(tmp_s.real_part - 2.5) > 1e-9 || abs(tmp_s.imag_part - 3.5) > 1e-9) {
        std::cout << "Test 14 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_15 () {
    Complex_num tmp(2.5, 3.5);
    tmp = 2.5 + tmp;
    if (abs(tmp.real_part - 5) > 1e-9) {
        std::cout << "Test 15 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_16 () {
    Complex_num tmp(2.5, 3.5);
    tmp = 2.5 - tmp;
    if (abs(tmp.real_part) > 1e-9) {
        std::cout << "Test 16 has failed" << std::endl;
        return false;
    }
    return true;
}

bool test_17 () {
    Complex_num tmp(2.5, 3.5);
    tmp = 2.0 * tmp;
    if (abs(tmp.real_part - 5) > 1e-9) {
        std::cout << "Test 17 has failed" << std::endl;
        return false;
    }
    return true;
}

bool start_tests() {
    bool result = true;
    
    result &= test_1();
    result &= test_2();
    result &= test_3();
    result &= test_4();
    result &= test_5();
    result &= test_6();
    result &= test_7();
    result &= test_8();
    result &= test_9();
    result &= test_10();
    result &= test_11();
    result &= test_12();
    result &= test_13();
    result &= test_14();
    result &= test_15();
    result &= test_16();
    result &= test_17();

    return result;
}
