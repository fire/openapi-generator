/**************************************************************************/
/*  api.h                                                                 */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#ifndef USERAPI_H
#define USERAPI_H

#include "core/object/ref_counted.h"

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    User user;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void createUser(User user);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    List user;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void createUsersWithArrayInput(List user);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    List user;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void createUsersWithListInput(List user);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    String username;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void deleteUser(String username);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    String username;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    User getUserByName(String username);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    String username;
    String password;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    String loginUser(String username, String password);
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);


protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void logoutUser();
};

class UserApi : public RefCounted {
    GDCLASS(UserApi, RefCounted);

    String username;
    User user;

protected:
    static void _bind_methods();

public:
    UserApi();
    ~UserApi();

    void updateUser(String username, User user);
};

#endif // USERAPI_H
