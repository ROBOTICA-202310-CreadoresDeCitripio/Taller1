// generated from
// rosidl_typesupport_fastrtps_cpp/resource/rosidl_typesupport_fastrtps_cpp__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef TURTLE_BOT_SERVCLI__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
#define TURTLE_BOT_SERVCLI__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_bot_servcli __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_turtle_bot_servcli __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_bot_servcli __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_turtle_bot_servcli __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_FASTRTPS_CPP_BUILDING_DLL_turtle_bot_servcli
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_bot_servcli ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_bot_servcli
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_bot_servcli ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_turtle_bot_servcli
  #endif
#else
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_turtle_bot_servcli __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_IMPORT_turtle_bot_servcli
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_bot_servcli __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_turtle_bot_servcli
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // TURTLE_BOT_SERVCLI__MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP__VISIBILITY_CONTROL_H_
