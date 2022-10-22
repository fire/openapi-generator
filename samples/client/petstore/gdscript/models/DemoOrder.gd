# THIS FILE WAS AUTOMATICALLY GENERATED by the OpenAPI Generator project.
# For more information on how to customize templates, see:
# https://openapi-generator.tech
# The OpenAPI Generator Community, © Public Domain, 2022

# DemoOrder Model
# An order for a pets from the pet store
# namespace: models

extends RefCounted
class_name DemoOrder

# It's convenient to know the class name, for error messages.
# https://github.com/godotengine/godot/issues/21789
var bee_class_name := "DemoOrder"


# Type: float
# Required: False
# isArray: false
var id: float:
	set(value):
		__id__was__set = true
		id = value
var __id__was__set := false

# Type: float
# Required: False
# isArray: false
var petId: float:
	set(value):
		__petId__was__set = true
		petId = value
var __petId__was__set := false

# Type: int
# Required: False
# isArray: false
var quantity: int:
	set(value):
		__quantity__was__set = true
		quantity = value
var __quantity__was__set := false

# Type: DateTime
#       (but it's actually a DateTime ; no generated conversion because of lack of support for timezones in Godot)
# Required: False
# isArray: false
var shipDate: DateTime:
	set(value):
		__shipDate__was__set = true
		shipDate = value
var __shipDate__was__set := false

# Order Status
# Type: String
# Required: False
# isArray: false
# Allowed values: "placed", "approved", "delivered"
var status: String:
	set(value):
		if str(value) != "" and not (str(value) in __status__allowable__values):
			printerr("DemoOrder: tried to set property `status` to a value that is not allowed." +
				"  Allowed values: `placed`, `approved`, `delivered`")
			return
		__status__was__set = true
		status = value
var __status__was__set := false
var __status__allowable__values := ["placed", "approved", "delivered"]

# Type: bool
# Required: False
# isArray: false
var complete: bool = false:
	set(value):
		__complete__was__set = true
		complete = value
var __complete__was__set := false


func bee_collect_missing_properties() -> Array:
	var bzz_missing_properties := Array()
	return bzz_missing_properties


func bee_normalize() -> Dictionary:
	var bzz_dictionary := Dictionary()
	if self.__id__was__set:
		bzz_dictionary["id"] = self.id
	if self.__petId__was__set:
		bzz_dictionary["petId"] = self.petId
	if self.__quantity__was__set:
		bzz_dictionary["quantity"] = self.quantity
	if self.__shipDate__was__set:
		bzz_dictionary["shipDate"] = self.shipDate
	if self.__status__was__set:
		bzz_dictionary["status"] = self.status
	if self.__complete__was__set:
		bzz_dictionary["complete"] = self.complete
	return bzz_dictionary


# Won't work for JSON+LD
static func bee_denormalize_single(from_dict: Dictionary):
	var me := new()
	if from_dict.has("id"):
		me.id = from_dict["id"]
	if from_dict.has("petId"):
		me.petId = from_dict["petId"]
	if from_dict.has("quantity"):
		me.quantity = from_dict["quantity"]
	if from_dict.has("shipDate"):
		me.shipDate = from_dict["shipDate"]
	if from_dict.has("status"):
		me.status = from_dict["status"]
	if from_dict.has("complete"):
		me.complete = from_dict["complete"]
	return me


# Won't work for JSON+LD
static func bee_denormalize_multiple(from_array: Array):
	var mes := Array()
	for element in from_array:
		if element is Array:
			mes.append(bee_denormalize_multiple(element))
		elif element is Dictionary:
			# TODO: perhaps check first if it looks like a match or an intermediate container
			mes.append(bee_denormalize_single(element))
		else:
			mes.append(element)
	return mes

