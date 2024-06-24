/**************************************************************************/
/*  Order.cpp                                                     */
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

#include "Order.h"

void Order::_bind_methods() {
    ClassDB::bind_method(D_METHOD("get_id"), &Order::get_id);
    ClassDB::bind_method(D_METHOD("set_id", "p_value"), &Order::set_id);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Long, "id"), "set_id", "get_id");
    ClassDB::bind_method(D_METHOD("get_petId"), &Order::get_petId);
    ClassDB::bind_method(D_METHOD("set_petId", "p_value"), &Order::set_petId);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Long, "petId"), "set_petId", "get_petId");
    ClassDB::bind_method(D_METHOD("get_quantity"), &Order::get_quantity);
    ClassDB::bind_method(D_METHOD("set_quantity", "p_value"), &Order::set_quantity);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Integer, "quantity"), "set_quantity", "get_quantity");
    ClassDB::bind_method(D_METHOD("get_shipDate"), &Order::get_shipDate);
    ClassDB::bind_method(D_METHOD("set_shipDate", "p_value"), &Order::set_shipDate);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Date, "shipDate"), "set_shipDate", "get_shipDate");
    ClassDB::bind_method(D_METHOD("get_status"), &Order::get_status);
    ClassDB::bind_method(D_METHOD("set_status", "p_value"), &Order::set_status);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(String, "status"), "set_status", "get_status");
    ClassDB::bind_method(D_METHOD("get_complete"), &Order::get_complete);
    ClassDB::bind_method(D_METHOD("set_complete", "p_value"), &Order::set_complete);
    // TODO: fire 20240624 Fix type of the property.
    ADD_PROPERTY(PropertyInfo(Boolean, "complete"), "set_complete", "get_complete");
}

Long Order::get_id() const {
    return id;
}

void Order::set_id(Long p_value) {
    id = p_value;
}

Long Order::get_petId() const {
    return petId;
}

void Order::set_petId(Long p_value) {
    petId = p_value;
}

Integer Order::get_quantity() const {
    return quantity;
}

void Order::set_quantity(Integer p_value) {
    quantity = p_value;
}

Date Order::get_shipDate() const {
    return shipDate;
}

void Order::set_shipDate(Date p_value) {
    shipDate = p_value;
}

String Order::get_status() const {
    return status;
}

void Order::set_status(String p_value) {
    status = p_value;
}

Boolean Order::get_complete() const {
    return complete;
}

void Order::set_complete(Boolean p_value) {
    complete = p_value;
}

Order::Order() {
}
