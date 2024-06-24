/**************************************************************************/
/*  User.cpp                                                     */
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

#include "User.h"

Long User::get_id() const {
    return id;
}

void User::set_id(Long p_value) {
    id = p_value;
}

String User::get_username() const {
    return username;
}

void User::set_username(String p_value) {
    username = p_value;
}

String User::get_firstName() const {
    return firstName;
}

void User::set_firstName(String p_value) {
    firstName = p_value;
}

String User::get_lastName() const {
    return lastName;
}

void User::set_lastName(String p_value) {
    lastName = p_value;
}

String User::get_email() const {
    return email;
}

void User::set_email(String p_value) {
    email = p_value;
}

String User::get_password() const {
    return password;
}

void User::set_password(String p_value) {
    password = p_value;
}

String User::get_phone() const {
    return phone;
}

void User::set_phone(String p_value) {
    phone = p_value;
}

Integer User::get_userStatus() const {
    return userStatus;
}

void User::set_userStatus(Integer p_value) {
    userStatus = p_value;
}

User::User() {
}
