/**************************************************************************/
/*  register_types.h                                                      */
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

#ifndef USER_H
#define USER_H

#include "core/object/ref_counted.h"

class User : public RefCounted {
    GDCLASS(User, RefCounted);

    Long id;
    String username;
    String firstName;
    String lastName;
    String email;
    String password;
    String phone;
    Integer userStatus;

protected:
    static void _bind_methods() {}

public:
    Long get_id() const { return id; }
    void set_id(Long value) { id = value; }
    String get_username() const { return username; }
    void set_username(String value) { username = value; }
    String get_firstName() const { return firstName; }
    void set_firstName(String value) { firstName = value; }
    String get_lastName() const { return lastName; }
    void set_lastName(String value) { lastName = value; }
    String get_email() const { return email; }
    void set_email(String value) { email = value; }
    String get_password() const { return password; }
    void set_password(String value) { password = value; }
    String get_phone() const { return phone; }
    void set_phone(String value) { phone = value; }
    Integer get_userStatus() const { return userStatus; }
    void set_userStatus(Integer value) { userStatus = value; }

    User() {}
    ~User() {}
};

#endif // USER_H