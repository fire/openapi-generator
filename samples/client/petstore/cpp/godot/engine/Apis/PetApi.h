/**************************************************************************/
/*  PetApi.h                                                       */
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


protected:
    static void _bind_methods();

public:
    PetApi();
    ~PetApi();

    Pet addPet(Pet p_pet);
    void deletePet(Long p_petId, String p_apiKey);
    List findPetsByStatus(List p_status);
    List findPetsByTags(List p_tags);
    Pet getPetById(Long p_petId);
    Pet updatePet(Pet p_pet);
    void updatePetWithForm(Long p_petId, String p_name, String p_status);
    ApiResponse uploadFile(Long p_petId, String p_additionalMetadata, File p_file);
};

#endif // PETAPI_H
