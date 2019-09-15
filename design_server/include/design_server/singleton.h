//
// Created by wxx on 2019/9/15.
//

#ifndef DESIGN_SERVER_SINGLETON_H
#define DESIGN_SERVER_SINGLETON_H

template <class T>
class Singleton {
public:
    static T* getInstance() {
        if (unique_instance_ == nullptr) {
            unique_instance_ = new T;
        }

        return unique_instance_;
    }

    static void destroyInstance() {
        if (unique_instance_) {
            delete unique_instance_;
            unique_instance_ = nullptr;
        }
    }
protected:
    Singleton(){};
    ~Singleton(){};

private:
    static T* unique_instance_;
};

template <class T> T* Singleton<T>::unique_instance_ = nullptr;

#endif //DESIGN_SERVER_SINGLETON_H
