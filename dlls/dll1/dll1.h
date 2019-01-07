//
// Created by Gang-Ryung Uh on 2018-12-14.
//

#ifndef DLL1_H
#define DLL1_H

#ifdef TARGET_OS_WIN32
#define FNDT_DLL_EXPORT __declspec(dllexport)
#else
#define FNDT_DLL_EXPORT

class FNDT_DLL_EXPORT dll1 {

public:
    dll1();
    ~dll1();
    const char* getText();
private:

};

#endif //DLL1_H

