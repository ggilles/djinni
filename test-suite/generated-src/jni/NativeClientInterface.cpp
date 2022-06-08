// AUTOGENERATED FILE - DO NOT MODIFY!
// This file was generated by Djinni from client_interface.djinni

#include "NativeClientInterface.hpp"  // my header
#include "Marshal.hpp"
#include "NativeClientReturnedRecord.hpp"

namespace djinni_generated {

NativeClientInterface::NativeClientInterface() : ::djinni::JniInterface<::testsuite::ClientInterface, NativeClientInterface>() {}

NativeClientInterface::~NativeClientInterface() = default;

NativeClientInterface::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeClientInterface::JavaProxy::~JavaProxy() = default;

::testsuite::ClientReturnedRecord NativeClientInterface::JavaProxy::get_record(int64_t c_record_id, const std::string & c_utf8string, const std::experimental::optional<std::string> & c_misc) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = jniEnv->CallObjectMethod(Handle::get().get(), data.method_getRecord,
                                         ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_record_id)),
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, c_utf8string)),
                                         ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, c_misc)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeClientReturnedRecord::toCpp(jniEnv, jret);
}
double NativeClientInterface::JavaProxy::identifier_check(const std::vector<uint8_t> & c_data, int32_t c_r, int64_t c_jret) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = jniEnv->CallDoubleMethod(Handle::get().get(), data.method_identifierCheck,
                                         ::djinni::get(::djinni::Binary::fromCpp(jniEnv, c_data)),
                                         ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_r)),
                                         ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_jret)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::F64::toCpp(jniEnv, jret);
}
std::string NativeClientInterface::JavaProxy::return_str() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_returnStr);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::string NativeClientInterface::JavaProxy::meth_taking_interface(const /*not-null*/ std::shared_ptr<::testsuite::ClientInterface> & c_i) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_methTakingInterface,
                                                  ::djinni::get(::djinni_generated::NativeClientInterface::fromCpp(jniEnv, c_i)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
std::string NativeClientInterface::JavaProxy::meth_taking_optional_interface(const /*nullable*/ std::shared_ptr<::testsuite::ClientInterface> & c_i) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_methTakingOptionalInterface,
                                                  ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeClientInterface>::fromCpp(jniEnv, c_i)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
