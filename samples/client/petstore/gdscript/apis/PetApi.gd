# API PetApi


class PetApi:
	extends ApiBee


	# Operation addPet  POST /pet
	# Add a new pet to the store
	func add_pet(
		# pet: Pet
		# Pet object that needs to be added to the store
		pet: Pet,
		on_success: Callable,  # func(result: Pet)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("POST")

		# Will be used at some point for denormalization
		# baseType = "Pet"
		# openApiType = "Pet"
		# dataType = "Pet"
		# complexType = "Pet"
		# isArray = "false"
		var bzz_return_type := "Pet"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation deletePet  DELETE /pet/{petId}
	# Deletes a pet
	func delete_pet(
		# petId: float   Eg: 789
		# Pet id to delete
		petId: float,
		# apiKey: String   Eg: apiKey_example
		# 
		apiKey = null,
		on_success: Callable,  # func(result)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/{petId}".replace("{" + "petId" + "}", bee_urlize_path_param(petId))

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("DELETE")


		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation findPetsByStatus  GET /pet/findByStatus
	# Finds Pets by status
	#
	# Multiple status values can be provided with comma separated strings
	func find_pets_by_status(
		# status: Array
		# Status values that need to be considered for filter
		status: Array,
		on_success: Callable,  # func(result: Array)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/findByStatus"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
			"status": status,
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("GET")

		# Will be used at some point for denormalization
		# baseType = "array"
		# openApiType = "array"
		# dataType = "Array"
		# complexType = "Pet"
		# isArray = "true"
		var bzz_return_type := "array"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# /!.  DEPRECATED
	# Operation findPetsByTags  GET /pet/findByTags
	# Finds Pets by tags
	#
	# Multiple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
	func find_pets_by_tags(
		# tags: Array
		# Tags to filter by
		tags: Array,
		on_success: Callable,  # func(result: Array)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/findByTags"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
			"tags": tags,
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("GET")

		# Will be used at some point for denormalization
		# baseType = "array"
		# openApiType = "array"
		# dataType = "Array"
		# complexType = "Pet"
		# isArray = "true"
		var bzz_return_type := "array"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation getPetById  GET /pet/{petId}
	# Find pet by ID
	#
	# Returns a single pet
	func get_pet_by_id(
		# petId: float   Eg: 789
		# ID of pet to return
		petId: float,
		on_success: Callable,  # func(result: Pet)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/{petId}".replace("{" + "petId" + "}", bee_urlize_path_param(petId))

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("GET")

		# Will be used at some point for denormalization
		# baseType = "Pet"
		# openApiType = "Pet"
		# dataType = "Pet"
		# complexType = "Pet"
		# isArray = "false"
		var bzz_return_type := "Pet"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation updatePet  PUT /pet
	# Update an existing pet
	func update_pet(
		# pet: Pet
		# Pet object that needs to be added to the store
		pet: Pet,
		on_success: Callable,  # func(result: Pet)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("PUT")

		# Will be used at some point for denormalization
		# baseType = "Pet"
		# openApiType = "Pet"
		# dataType = "Pet"
		# complexType = "Pet"
		# isArray = "false"
		var bzz_return_type := "Pet"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation updatePetWithForm  POST /pet/{petId}
	# Updates a pet in the store with form data
	func update_pet_with_form(
		# petId: float   Eg: 789
		# ID of pet that needs to be updated
		petId: float,
		# name: String   Eg: name_example
		# Updated name of the pet
		name = null,
		# status: String   Eg: status_example
		# Updated status of the pet
		status = null,
		on_success: Callable,  # func(result)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/{petId}".replace("{" + "petId" + "}", bee_urlize_path_param(petId))

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("POST")


		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

	# Operation uploadFile  POST /pet/{petId}/uploadImage
	# uploads an image
	func upload_file(
		# petId: float   Eg: 789
		# ID of pet to update
		petId: float,
		# additionalMetadata: String   Eg: additionalMetadata_example
		# Additional data to pass to server
		additionalMetadata = null,
		# file: File   Eg: BINARY_DATA_HERE
		# file to upload
		file = null,
		on_success: Callable,  # func(result: ApiResponse)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/pet/{petId}/uploadImage".replace("{" + "petId" + "}", bee_urlize_path_param(petId))

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("POST")

		# Will be used at some point for denormalization
		# baseType = "ApiResponse"
		# openApiType = "ApiResponse"
		# dataType = "ApiResponse"
		# complexType = "ApiResponse"
		# isArray = "false"
		var bzz_return_type := "ApiResponse"

		bee_request(
			bzz_method, bzz_path, bzz_query,
			func(result, code, headers):
				#print('SUCCESS!')
				#print(result)
				on_success.call(result)
				,  # ざわ‥
			func(error):
				#printerr("FAILURE!")
				#print(error)
				on_failure.call(error)
				,  # ざわ‥
		)

