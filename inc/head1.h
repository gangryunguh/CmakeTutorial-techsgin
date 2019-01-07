//
// Created by Gang-Ryung Uh on 2018-12-14.
//

#ifndef HEAD1_H
#define HEAD1_H

class head1 {

public:
    head1(){}
    ~head1(){}
    inline const char* getText() {
#ifdef DEF_RET_YES
        return "Yes, DEF_RET_1 is defined";
#elif
        return "No, DEF_RET_1 is not defined";
    }

};

#endif // HEAD1_H
