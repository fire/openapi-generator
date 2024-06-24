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

#ifndef ORDER_H
#define ORDER_H

#include "core/object/ref_counted.h"

class Order : public RefCounted {
    GDCLASS(Order, RefCounted);

    Long id;
    Long petId;
    Integer quantity;
    Date shipDate;
    String status;
    Boolean complete;

protected:
    static void _bind_methods() {}

public:
    Long get_id() const { return id; }
    void set_id(Long value) { id = value; }
    Long get_petId() const { return petId; }
    void set_petId(Long value) { petId = value; }
    Integer get_quantity() const { return quantity; }
    void set_quantity(Integer value) { quantity = value; }
    Date get_shipDate() const { return shipDate; }
    void set_shipDate(Date value) { shipDate = value; }
    String get_status() const { return status; }
    void set_status(String value) { status = value; }
    Boolean get_complete() const { return complete; }
    void set_complete(Boolean value) { complete = value; }

    Order();
};

#endif // ORDER_H