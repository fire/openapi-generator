# StoreApi

All URIs are relative to *http://petstore.swagger.io/v2*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deleteOrder**](StoreApi.md#deleteOrder) | **DELETE** /store/order/{orderId} | Delete purchase order by ID
[**getInventory**](StoreApi.md#getInventory) | **GET** /store/inventory | Returns pet inventories by status
[**getOrderById**](StoreApi.md#getOrderById) | **GET** /store/order/{orderId} | Find purchase order by ID
[**placeOrder**](StoreApi.md#placeOrder) | **POST** /store/order | Place an order for a pet


<a id="deleteOrder"></a>
# **deleteOrder**
> deleteOrder(orderId)

Delete purchase order by ID

For valid response try integer IDs with value &lt; 1000. Anything above 1000 or nonintegers will generate API errors

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **String**| ID of the order that needs to be deleted | [default to null]

### Return type

null (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a id="getInventory"></a>
# **getInventory**
> Map getInventory()

Returns pet inventories by status

Returns a map of status codes to quantities

### Parameters
This endpoint does not need any parameter.

### Return type

[**Map**](integer.md)

### Authorization

[api_key](../README.md#api_key)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a id="getOrderById"></a>
# **getOrderById**
> Order getOrderById(orderId)

Find purchase order by ID

For valid response try integer IDs with value &lt;&#x3D; 5 or &gt; 10. Other values will generate exceptions

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **orderId** | **Long**| ID of pet that needs to be fetched | [default to null]

### Return type

[**Order**](Order.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/xml, application/json

<a id="placeOrder"></a>
# **placeOrder**
> Order placeOrder(order)

Place an order for a pet



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **order** | [**Order**](Order.md)| order placed for purchasing the pet |

### Return type

[**Order**](Order.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/xml, application/json

