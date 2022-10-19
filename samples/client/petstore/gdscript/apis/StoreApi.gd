# API StoreApi


class StoreApi:
	extends ApiBee


	# Operation deleteOrder  DELETE /store/order/{orderId}
	# Delete purchase order by ID
	#
	# For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors
	func delete_order(
		# orderId: String   Eg: orderId_example
		# ID of the order that needs to be deleted
		orderId: String,
		on_success: Callable,  # func(result)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/store/order/{orderId}".replace("{" + "orderId" + "}", bee_urlize_path_param(orderId))

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

	# Operation getInventory  GET /store/inventory
	# Returns pet inventories by status
	#
	# Returns a map of status codes to quantities
	func get_inventory(
		on_success: Callable,  # func(result: Dictionary)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/store/inventory"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("GET")

		# Will be used at some point for denormalization
		# baseType = "map"
		# openApiType = "object"
		# dataType = "Dictionary"
		# complexType = "integer"
		# isArray = "false"
		var bzz_return_type := "map"

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

	# Operation getOrderById  GET /store/order/{orderId}
	# Find purchase order by ID
	#
	# For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generated exceptions
	func get_order_by_id(
		# orderId: float   Eg: 789
		# ID of pet that needs to be fetched
		orderId: float,
		on_success: Callable,  # func(result: Order)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/store/order/{orderId}".replace("{" + "orderId" + "}", bee_urlize_path_param(orderId))

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("GET")

		# Will be used at some point for denormalization
		# baseType = "Order"
		# openApiType = "Order"
		# dataType = "Order"
		# complexType = "Order"
		# isArray = "false"
		var bzz_return_type := "Order"

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

	# Operation placeOrder  POST /store/order
	# Place an order for a pet
	func place_order(
		# order: Order
		# order placed for purchasing the pet
		order: Order,
		on_success: Callable,  # func(result: Order)
		on_failure: Callable   # func(error: ApiError)
	):
		# CollectionFormat: NO

		# Note: `bzz_` prefix in variable names is to reduce collisions and therefore renames
		# Warn: Make sure all local variable names here are also listed in our Java CodeGen.

		# Compute the URL path to the API resource
		var bzz_path := "/store/order"

		# Collect the query parameters
		# Note: we do not support multiple values for a single param (for now), nor arrays
		#var bzz_query := Dictionary()
		var bzz_query := {
		}

		# Convert the HTTP method to something Godot understands
		var bzz_method := bee_convert_http_method("POST")

		# Will be used at some point for denormalization
		# baseType = "Order"
		# openApiType = "Order"
		# dataType = "Order"
		# complexType = "Order"
		# isArray = "false"
		var bzz_return_type := "Order"

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

