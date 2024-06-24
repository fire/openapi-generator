/**************************************************************************/
/*  ApiResponse.cpp                                                     */
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

#include "ApiResponse.h"

void ApiResponse::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_code"), &ApiResponse::get_code);
    ClassDB::bind_method(D_METHOD("set_code", "p_value"), &ApiResponse::set_code);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Integer, "code"), "set_code", "get_code");
    ClassDB::bind_method(D_METHOD("get_type"), &ApiResponse::get_type);
    ClassDB::bind_method(D_METHOD("set_type", "p_value"), &ApiResponse::set_type);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(String, "type"), "set_type", "get_type");
    ClassDB::bind_method(D_METHOD("get_message"), &ApiResponse::get_message);
    ClassDB::bind_method(D_METHOD("set_message", "p_value"), &ApiResponse::set_message);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(String, "message"), "set_message", "get_message");
}

Integer ApiResponse::get_code() const {
    return code;
}

void ApiResponse::set_code(Integer p_value) {
    code = p_value;
}

String ApiResponse::get_type() const {
    return type;
}

void ApiResponse::set_type(String p_value) {
    type = p_value;
}

String ApiResponse::get_message() const {
    return message;
}

void ApiResponse::set_message(String p_value) {
    message = p_value;
}

ApiResponse::ApiResponse() {
}
