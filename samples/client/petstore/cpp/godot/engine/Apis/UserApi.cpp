/**************************************************************************/
/*  UserApi.cpp                                                     */
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

#include "UserApi.h"

void UserApi::_bind_methods() {
        ClassDB::bind_method(D_METHOD("createUser", "user"), &UserApi::createUser);
        ClassDB::bind_method(D_METHOD("createUsersWithArrayInput", "user"), &UserApi::createUsersWithArrayInput);
        ClassDB::bind_method(D_METHOD("createUsersWithListInput", "user"), &UserApi::createUsersWithListInput);
        ClassDB::bind_method(D_METHOD("deleteUser", "username"), &UserApi::deleteUser);
        ClassDB::bind_method(D_METHOD("getUserByName", "username"), &UserApi::getUserByName);
        ClassDB::bind_method(D_METHOD("loginUser", "username", "password"), &UserApi::loginUser);
        ClassDB::bind_method(D_METHOD("logoutUser"), &UserApi::logoutUser);
        ClassDB::bind_method(D_METHOD("updateUser", "username", "user"), &UserApi::updateUser);
}

UserApi::UserApi() {
    // constructor implementation
}

UserApi::~UserApi() {
    // destructor implementation
}

void UserApi::createUser(User p_user) {
    // method implementation for void return
}

void UserApi::createUsersWithArrayInput(List p_user) {
    // method implementation for void return
}

void UserApi::createUsersWithListInput(List p_user) {
    // method implementation for void return
}

void UserApi::deleteUser(String p_username) {
    // method implementation for void return
}

User UserApi::getUserByName(String p_username) {
    // method implementation with return
    User result;
    // TODO: compute result
    return result;
}

String UserApi::loginUser(String p_username, String p_password) {
    // method implementation with return
    String result;
    // TODO: compute result
    return result;
}

void UserApi::logoutUser() {
    // method implementation for void return
}

void UserApi::updateUser(String p_username, User p_user) {
    // method implementation for void return
}

