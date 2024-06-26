extends DemoApiBee
class_name DemoUserApi

# THIS FILE WAS AUTOMATICALLY GENERATED by the OpenAPI Generator project.
# For more information on how to customize templates, see:
# https://openapi-generator.tech
# https://github.com/OpenAPITools/openapi-generator/tree/master/modules/openapi-generator/src/main/resources/gdscript
# The OpenAPI Generator Community, © Public Domain, 2022

# API DemoUserApi
# Instantiate this object and use it to make requests to the API.

func _bzz_get_api_name() -> String:
	return "DemoUserApi"


# Operation createUser → POST /user
# Create user
#
# This can only be done by the logged in user.
func create_user(
	# demoUserModel: DemoUserModel
	# Created user object
	demoUserModel: DemoUserModel,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("POST")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user"

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_consumable_by_server := ['application/json']
	var bzz_found_producible_mime := false
	for bzz_mime in BZZ_PRODUCIBLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_consumable_by_server:
			bzz_headers["Content-Type"] = bzz_mime
			bzz_found_producible_mime = true
			break
	if not bzz_found_producible_mime:
		var error := DemoApiError.new()
		error.identifier = "create_user.headers.content_type"
		error.message = "That endpoint only accepts %s as content type(s) and none are supported by this client."
		on_failure.call(error)
		return

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null
	bzz_body = demoUserModel

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func create_user_threaded(
	# demoUserModel: DemoUserModel
	# Created user object
	demoUserModel: DemoUserModel,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "create_user")
	bzz_callable.bind(
		demoUserModel,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation createUsersWithArrayInput → POST /user/createWithArray
# Creates list of users with given input array
func create_users_with_array_input(
	# user: Array
	# List of user object
	user: Array,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("POST")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/createWithArray"

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_consumable_by_server := ['application/json']
	var bzz_found_producible_mime := false
	for bzz_mime in BZZ_PRODUCIBLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_consumable_by_server:
			bzz_headers["Content-Type"] = bzz_mime
			bzz_found_producible_mime = true
			break
	if not bzz_found_producible_mime:
		var error := DemoApiError.new()
		error.identifier = "create_users_with_array_input.headers.content_type"
		error.message = "That endpoint only accepts %s as content type(s) and none are supported by this client."
		on_failure.call(error)
		return

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null
	bzz_body = user

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func create_users_with_array_input_threaded(
	# user: Array
	# List of user object
	user: Array,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "create_users_with_array_input")
	bzz_callable.bind(
		user,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation createUsersWithListInput → POST /user/createWithList
# Creates list of users with given input array
func create_users_with_list_input(
	# user: Array
	# List of user object
	user: Array,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("POST")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/createWithList"

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_consumable_by_server := ['application/json']
	var bzz_found_producible_mime := false
	for bzz_mime in BZZ_PRODUCIBLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_consumable_by_server:
			bzz_headers["Content-Type"] = bzz_mime
			bzz_found_producible_mime = true
			break
	if not bzz_found_producible_mime:
		var error := DemoApiError.new()
		error.identifier = "create_users_with_list_input.headers.content_type"
		error.message = "That endpoint only accepts %s as content type(s) and none are supported by this client."
		on_failure.call(error)
		return

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null
	bzz_body = user

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func create_users_with_list_input_threaded(
	# user: Array
	# List of user object
	user: Array,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "create_users_with_list_input")
	bzz_callable.bind(
		user,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation deleteUser → DELETE /user/{username}
# Delete user
#
# This can only be done by the logged in user.
func delete_user(
	# username: String = ""   Eg: username_example
	# The name that needs to be deleted
	username: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("DELETE")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/{username}".replace("{" + "username" + "}", _bzz_urlize_path_param(username))

	# Collect the headers
	var bzz_headers := Dictionary()

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func delete_user_threaded(
	# username: String = ""   Eg: username_example
	# The name that needs to be deleted
	username: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "delete_user")
	bzz_callable.bind(
		username,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation getUserByName → GET /user/{username}
# Get user by user name
func get_user_by_name(
	# username: String = ""   Eg: username_example
	# The name that needs to be fetched. Use user1 for testing.
	username: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("GET")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/{username}".replace("{" + "username" + "}", _bzz_urlize_path_param(username))

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_produced_by_server := ['application/xml', 'application/json']
	for bzz_mime in BZZ_CONSUMABLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_produced_by_server:
			bzz_headers["Accept"] = bzz_mime
			break

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			bzz_response.data = DemoUserModel.bzz_denormalize_single(bzz_response.data)
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func get_user_by_name_threaded(
	# username: String = ""   Eg: username_example
	# The name that needs to be fetched. Use user1 for testing.
	username: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "get_user_by_name")
	bzz_callable.bind(
		username,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation loginUser → GET /user/login
# Logs user into the system
func login_user(
	# username: String = ""   Eg: username_example
	# The user name for login
	username: String,
	# password: String = ""   Eg: password_example
	# The password for login in clear text
	password: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Validate param `username` constraints
	var bzz_username_regex := RegEx.new()
	bzz_username_regex.compile("/^[a-zA-Z0-9]+[a-zA-Z0-9\\.\\-_]*[a-zA-Z0-9]+$/".trim_prefix('/').trim_suffix('/'))
	if not bzz_username_regex.search(str(username)):
		var error := DemoApiError.new()
		error.identifier = "login_user.param.validation.pattern"
		error.message = "Invalid value for `username`, must conform to the pattern `/^[a-zA-Z0-9]+[a-zA-Z0-9\\.\\-_]*[a-zA-Z0-9]+$/`."
		on_failure.call(error)
		return

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("GET")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/login"

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_produced_by_server := ['application/xml', 'application/json']
	for bzz_mime in BZZ_CONSUMABLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_produced_by_server:
			bzz_headers["Accept"] = bzz_mime
			break

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()
	bzz_query["username"] = username
	bzz_query["password"] = password

	var bzz_body = null

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func login_user_threaded(
	# username: String = ""   Eg: username_example
	# The user name for login
	username: String,
	# password: String = ""   Eg: password_example
	# The password for login in clear text
	password: String,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "login_user")
	bzz_callable.bind(
		username,
		password,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation logoutUser → GET /user/logout
# Logs out current logged in user session
func logout_user(
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("GET")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/logout"

	# Collect the headers
	var bzz_headers := Dictionary()

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func logout_user_threaded(
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "logout_user")
	bzz_callable.bind(
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


# Operation updateUser → PUT /user/{username}
# Updated user
#
# This can only be done by the logged in user.
func update_user(
	# username: String = ""   Eg: username_example
	# name that need to be deleted
	username: String,
	# demoUserModel: DemoUserModel
	# Updated user object
	demoUserModel: DemoUserModel,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
):

	# Convert the String HTTP method to a Constant Godot understands
	var bzz_method := self._bzz_convert_http_method("PUT")

	# Compute the URL path to the API resource
	var bzz_path := "/v2/user/{username}".replace("{" + "username" + "}", _bzz_urlize_path_param(username))

	# Collect the headers
	var bzz_headers := Dictionary()
	var bzz_mimes_consumable_by_server := ['application/json']
	var bzz_found_producible_mime := false
	for bzz_mime in BZZ_PRODUCIBLE_CONTENT_TYPES:
		if bzz_mime in bzz_mimes_consumable_by_server:
			bzz_headers["Content-Type"] = bzz_mime
			bzz_found_producible_mime = true
			break
	if not bzz_found_producible_mime:
		var error := DemoApiError.new()
		error.identifier = "update_user.headers.content_type"
		error.message = "That endpoint only accepts %s as content type(s) and none are supported by this client."
		on_failure.call(error)
		return

	# Collect the query parameters
	# Note: we do not support multiple values for a single param (for now), nor arrays
	var bzz_query := Dictionary()

	var bzz_body = null
	bzz_body = demoUserModel

	self._bzz_request(
		bzz_method, bzz_path, bzz_headers, bzz_query, bzz_body,
		func(bzz_response):
			on_success.call(bzz_response)
			,
		func(bzz_error):
			on_failure.call(bzz_error)
			,  # ざわ‥
	)


func update_user_threaded(
	# username: String = ""   Eg: username_example
	# name that need to be deleted
	username: String,
	# demoUserModel: DemoUserModel
	# Updated user object
	demoUserModel: DemoUserModel,
	on_success: Callable = Callable(),  # func(response: DemoApiResponse)
	on_failure: Callable = Callable(),  # func(error: DemoApiError)
) -> Thread:
	var bzz_thread := Thread.new()
	var bzz_callable := Callable(self, "update_user")
	bzz_callable.bind(
		username,
		demoUserModel,
		on_success,
		on_failure,
	)
	bzz_thread.start(bzz_callable)
	return bzz_thread


