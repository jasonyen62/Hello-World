/* soapWPCEventTrackingServiceSoapProxy.cpp
   Generated by gSOAP 2.8.15 from soapWPCEventTrackingServiceSoapProxy.h

Copyright(C) 2000-2013, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under ONE of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#include "soapWPCEventTrackingServiceSoapProxy.h"

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy()
{	WPCEventTrackingServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy(const struct soap &_soap) : soap(_soap)
{ }

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy(const char *url)
{	WPCEventTrackingServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = url;
}

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy(soap_mode iomode)
{	WPCEventTrackingServiceSoapProxy_init(iomode, iomode);
}

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy(const char *url, soap_mode iomode)
{	WPCEventTrackingServiceSoapProxy_init(iomode, iomode);
	soap_endpoint = url;
}

WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy(soap_mode imode, soap_mode omode)
{	WPCEventTrackingServiceSoapProxy_init(imode, omode);
}

WPCEventTrackingServiceSoapProxy::~WPCEventTrackingServiceSoapProxy()
{ }

void WPCEventTrackingServiceSoapProxy::WPCEventTrackingServiceSoapProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
	{"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"ns1", "http://tempuri.org/", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	soap_set_namespaces(this, namespaces);
}

void WPCEventTrackingServiceSoapProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void WPCEventTrackingServiceSoapProxy::reset()
{	destroy();
	soap_done(this);
	soap_init(this);
	WPCEventTrackingServiceSoapProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void WPCEventTrackingServiceSoapProxy::soap_noheader()
{	this->header = NULL;
}

const SOAP_ENV__Header *WPCEventTrackingServiceSoapProxy::soap_header()
{	return this->header;
}

const SOAP_ENV__Fault *WPCEventTrackingServiceSoapProxy::soap_fault()
{	return this->fault;
}

const char *WPCEventTrackingServiceSoapProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *WPCEventTrackingServiceSoapProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int WPCEventTrackingServiceSoapProxy::soap_close_socket()
{	return soap_closesock(this);
}

int WPCEventTrackingServiceSoapProxy::soap_force_close_socket()
{	return soap_force_closesock(this);
}

void WPCEventTrackingServiceSoapProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void WPCEventTrackingServiceSoapProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}
#endif

char *WPCEventTrackingServiceSoapProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int WPCEventTrackingServiceSoapProxy::addEventLog(const char *endpoint, const char *soap_action, _ns1__addEventLog *ns1__addEventLog, _ns1__addEventLogResponse *ns1__addEventLogResponse)
{	struct soap *soap = this;
	struct __ns1__addEventLog soap_tmp___ns1__addEventLog;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://172.20.1.132:8005/WPCEventTrackingService.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/addEventLog";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__addEventLog.ns1__addEventLog = ns1__addEventLog;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__addEventLog(soap, &soap_tmp___ns1__addEventLog);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__addEventLog(soap, &soap_tmp___ns1__addEventLog, "-ns1:addEventLog", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__addEventLog(soap, &soap_tmp___ns1__addEventLog, "-ns1:addEventLog", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__addEventLogResponse)
		return soap_closesock(soap);
	ns1__addEventLogResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__addEventLogResponse->soap_get(soap, "ns1:addEventLogResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WPCEventTrackingServiceSoapProxy::addEventLogList(const char *endpoint, const char *soap_action, _ns1__addEventLogList *ns1__addEventLogList, _ns1__addEventLogListResponse *ns1__addEventLogListResponse)
{	struct soap *soap = this;
	struct __ns1__addEventLogList soap_tmp___ns1__addEventLogList;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://172.20.1.132:8005/WPCEventTrackingService.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/addEventLogList";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__addEventLogList.ns1__addEventLogList = ns1__addEventLogList;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__addEventLogList(soap, &soap_tmp___ns1__addEventLogList);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__addEventLogList(soap, &soap_tmp___ns1__addEventLogList, "-ns1:addEventLogList", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__addEventLogList(soap, &soap_tmp___ns1__addEventLogList, "-ns1:addEventLogList", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__addEventLogListResponse)
		return soap_closesock(soap);
	ns1__addEventLogListResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__addEventLogListResponse->soap_get(soap, "ns1:addEventLogListResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WPCEventTrackingServiceSoapProxy::addEventLog_(const char *endpoint, const char *soap_action, _ns1__addEventLog *ns1__addEventLog, _ns1__addEventLogResponse *ns1__addEventLogResponse)
{	struct soap *soap = this;
	struct __ns1__addEventLog_ soap_tmp___ns1__addEventLog_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://172.20.1.132:8005/WPCEventTrackingService.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/addEventLog";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__addEventLog_.ns1__addEventLog = ns1__addEventLog;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__addEventLog_(soap, &soap_tmp___ns1__addEventLog_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__addEventLog_(soap, &soap_tmp___ns1__addEventLog_, "-ns1:addEventLog", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__addEventLog_(soap, &soap_tmp___ns1__addEventLog_, "-ns1:addEventLog", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__addEventLogResponse)
		return soap_closesock(soap);
	ns1__addEventLogResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__addEventLogResponse->soap_get(soap, "ns1:addEventLogResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int WPCEventTrackingServiceSoapProxy::addEventLogList_(const char *endpoint, const char *soap_action, _ns1__addEventLogList *ns1__addEventLogList, _ns1__addEventLogListResponse *ns1__addEventLogListResponse)
{	struct soap *soap = this;
	struct __ns1__addEventLogList_ soap_tmp___ns1__addEventLogList_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://172.20.1.132:8005/WPCEventTrackingService.asmx";
	if (soap_action == NULL)
		soap_action = "http://tempuri.org/addEventLogList";
	soap->encodingStyle = NULL;
	soap_tmp___ns1__addEventLogList_.ns1__addEventLogList = ns1__addEventLogList;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize___ns1__addEventLogList_(soap, &soap_tmp___ns1__addEventLogList_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__addEventLogList_(soap, &soap_tmp___ns1__addEventLogList_, "-ns1:addEventLogList", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_url(soap, soap_endpoint, NULL), soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__addEventLogList_(soap, &soap_tmp___ns1__addEventLogList_, "-ns1:addEventLogList", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!ns1__addEventLogListResponse)
		return soap_closesock(soap);
	ns1__addEventLogListResponse->soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__addEventLogListResponse->soap_get(soap, "ns1:addEventLogListResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
