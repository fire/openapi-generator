/**************************************************************************/
/*  Pet.h                                                       */
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

#ifndef PET_H
#define PET_H

#include "core/object/ref_counted.h"

#include "Long.h"
#include "Category.h"
#include "String.h"
#include "List.h"
#include "List.h"
#include "String.h"

class Pet : public RefCounted {
    GDCLASS(Pet, RefCounted);

    Long id;
    Category category;
    String name;
    List photoUrls;
    List tags;
    String status;

protected:
    static void _bind_methods() {}

public:
    Long get_id() const { return id; }
    void set_id(Long p_value) { id = p_value; }
    Category get_category() const { return category; }
    void set_category(Category p_value) { category = p_value; }
    String get_name() const { return name; }
    void set_name(String p_value) { name = p_value; }
    List get_photoUrls() const { return photoUrls; }
    void set_photoUrls(List p_value) { photoUrls = p_value; }
    List get_tags() const { return tags; }
    void set_tags(List p_value) { tags = p_value; }
    String get_status() const { return status; }
    void set_status(String p_value) { status = p_value; }

    Pet() {}
    ~Pet() {}
};

#endif // PET_H