/**************************************************************************/
/*  Category.cpp                                                     */
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

#include "Category.h"

void Category::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_id"), &Category::get_id);
    ClassDB::bind_method(D_METHOD("set_id", "p_value"), &Category::set_id);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Long, "id"), "set_id", "get_id");
    ClassDB::bind_method(D_METHOD("get_name"), &Category::get_name);
    ClassDB::bind_method(D_METHOD("set_name", "p_value"), &Category::set_name);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(String, "name"), "set_name", "get_name");
}

Long Category::get_id() const {
    return id;
}

void Category::set_id(Long p_value) {
    id = p_value;
}

String Category::get_name() const {
    return name;
}

void Category::set_name(String p_value) {
    name = p_value;
}

Category::Category() {
}
