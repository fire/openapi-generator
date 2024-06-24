/**************************************************************************/
/*  api.cpp                                                               */
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

#include "PetApi.h"

void PetApi::_bind_methods() {
    ClassDB::bind_method(D_METHOD("addPet", "pet"), &PetApi::addPet);
    ClassDB::bind_method(D_METHOD("deletePet", "petId, apiKey"), &PetApi::deletePet);
    ClassDB::bind_method(D_METHOD("findPetsByStatus", "status"), &PetApi::findPetsByStatus);
    ClassDB::bind_method(D_METHOD("findPetsByTags", "tags"), &PetApi::findPetsByTags);
    ClassDB::bind_method(D_METHOD("getPetById", "petId"), &PetApi::getPetById);
    ClassDB::bind_method(D_METHOD("updatePet", "pet"), &PetApi::updatePet);
    ClassDB::bind_method(D_METHOD("updatePetWithForm", "petId, name, status"), &PetApi::updatePetWithForm);
    ClassDB::bind_method(D_METHOD("uploadFile", "petId, additionalMetadata, file"), &PetApi::uploadFile);
}

PetApi::PetApi() {
    // constructor implementation
}

PetApi::~PetApi() {
    // destructor implementation
}

Pet PetApi::addPet(Pet pet) {
    // method implementation with return
    Pet result;
    // TODO: compute result
    return result;
}
void PetApi::deletePet(Long petId, String apiKey) {
    // method implementation for void return
}
List PetApi::findPetsByStatus(List status) {
    // method implementation with return
    List result;
    // TODO: compute result
    return result;
}
List PetApi::findPetsByTags(List tags) {
    // method implementation with return
    List result;
    // TODO: compute result
    return result;
}
Pet PetApi::getPetById(Long petId) {
    // method implementation with return
    Pet result;
    // TODO: compute result
    return result;
}
Pet PetApi::updatePet(Pet pet) {
    // method implementation with return
    Pet result;
    // TODO: compute result
    return result;
}
void PetApi::updatePetWithForm(Long petId, String name, String status) {
    // method implementation for void return
}
ApiResponse PetApi::uploadFile(Long petId, String additionalMetadata, File file) {
    // method implementation with return
    ApiResponse result;
    // TODO: compute result
    return result;
}
