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

#ifndef PETAPI_H
#define PETAPI_H

#include "core/object/ref_counted.h"

#include "Pet.h"
#include "Long.h"
#include "String.h"
#include "List.h"
#include "List.h"
#include "Long.h"
#include "Pet.h"
#include "Long.h"
#include "String.h"
#include "String.h"
#include "Long.h"
#include "String.h"
#include "File.h"

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Pet pet;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    Pet addPet(Pet pet);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Long petId;
    String apiKey;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    void deletePet(Long petId, String apiKey);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    List status;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    List findPetsByStatus(List status);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    List tags;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    List findPetsByTags(List tags);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Long petId;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    Pet getPetById(Long petId);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Pet pet;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    Pet updatePet(Pet pet);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Long petId;
    String name;
    String status;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    void updatePetWithForm(Long petId, String name, String status);
};

class PetApi : public RefCounted {
    GDCLASS(PetApi, RefCounted);

    Long petId;
    String additionalMetadata;
    File file;

protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    ApiResponse uploadFile(Long petId, String additionalMetadata, File file);
};

#endif // PETAPI_H
