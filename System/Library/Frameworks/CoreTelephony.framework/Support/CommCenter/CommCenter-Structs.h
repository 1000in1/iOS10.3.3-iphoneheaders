/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct object {
	dispatch_object_s fObj;
} object;

typedef struct queue {
	object fObj;
} queue;

typedef struct shared_ptr<Registry> {
	Registry __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Registry>;

typedef struct _compressed_pair<ctu::RestModule *, std::__1::default_delete<ctu::RestModule> > {
	RestModule __first_;
} compressed_pair<ctu::RestModule *, std::__1::default_delete<ctu::RestModule> >;

typedef struct unique_ptr<ctu::RestModule, std::__1::default_delete<ctu::RestModule> > {
	compressed_pair<ctu::RestModule *, std::__1::default_delete<ctu::RestModule> > __ptr_;
} unique_ptr<ctu::RestModule, std::__1::default_delete<ctu::RestModule> >;

typedef struct shared_ptr<ctu::Logger> {
	Logger __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ctu::Logger>;

typedef struct event_sink_t<unexpected_mo_dial>* event_sink_t<unexpected_mo_dial>Ref;

typedef struct event_sink_t<unexpected_answer>* event_sink_t<unexpected_answer>Ref;

typedef struct event_sink_t<unexpected_hold>* event_sink_t<unexpected_hold>Ref;

typedef struct _long {
	unsigned __cap_;
	unsigned __size_;
	char* __data_;
} long;

typedef struct _short {
	/*function pointer*/void* ;
	unsigned char __size_;
	c) __lx;
	char __data_[11];
} short;

typedef struct _raw {
	unsigned long __words[3];
} raw;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __first_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct block<bool ()(const __CFString *, const void *)> {
	/*^block*/id fBlock;
} block<bool ()(const __CFString *, const void *)>;

typedef struct block<void ()(const __CFDictionary *, const __CFArray *, bool)> {
	/*^block*/id fBlock;
} block<void ()(const __CFDictionary *, const __CFArray *, bool)>;

typedef struct block<void ()(std::__1::shared_ptr<CallServicesSyncBase::DevsInfo>)> {
	/*^block*/id fBlock;
} block<void ()(std::__1::shared_ptr<CallServicesSyncBase::DevsInfo>)>;

typedef struct dispatch_queue_s* dispatch_queue_sRef;

typedef struct _NSZone* NSZoneRef;

typedef struct shared_ptr<void> {
	void __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<void>;

typedef struct _compressed_pair<CurrentCallInfo *, std::__1::allocator<CurrentCallInfo> > {
	CurrentCallInfo __first_;
} compressed_pair<CurrentCallInfo *, std::__1::allocator<CurrentCallInfo> >;

typedef struct vector<CurrentCallInfo, std::__1::allocator<CurrentCallInfo> > {
	CurrentCallInfo __begin_;
	CurrentCallInfo __end_;
	compressed_pair<CurrentCallInfo *, std::__1::allocator<CurrentCallInfo> > __end_cap_;
} vector<CurrentCallInfo, std::__1::allocator<CurrentCallInfo> >;

typedef struct property_sink_t<current_calls> {
	vector<CurrentCallInfo, std::__1::allocator<CurrentCallInfo> > fValue;
} property_sink_t<current_calls>;

typedef struct dict {
	object fObj;
} dict;

typedef struct property_sink_t<call_capabilities> {
	dict fValue;
} property_sink_t<call_capabilities>;

typedef struct _compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __first_;
} compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __begin_;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __end_;
	compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > __end_cap_;
} vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > >;

typedef struct property_sink_t<emergency_numbers> {
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > fValue;
} property_sink_t<emergency_numbers>;

typedef struct property_sink_t<whitelisted_numbers_for_em> {
	vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > fValue;
} property_sink_t<whitelisted_numbers_for_em>;

typedef struct _compressed_pair<DisambiguationEmergencyNumber *, std::__1::allocator<DisambiguationEmergencyNumber> > {
	DisambiguationEmergencyNumber __first_;
} compressed_pair<DisambiguationEmergencyNumber *, std::__1::allocator<DisambiguationEmergencyNumber> >;

typedef struct vector<DisambiguationEmergencyNumber, std::__1::allocator<DisambiguationEmergencyNumber> > {
	DisambiguationEmergencyNumber __begin_;
	DisambiguationEmergencyNumber __end_;
	compressed_pair<DisambiguationEmergencyNumber *, std::__1::allocator<DisambiguationEmergencyNumber> > __end_cap_;
} vector<DisambiguationEmergencyNumber, std::__1::allocator<DisambiguationEmergencyNumber> >;

typedef struct property_sink_t<disambiguation_emergency_numbers> {
	vector<DisambiguationEmergencyNumber, std::__1::allocator<DisambiguationEmergencyNumber> > fValue;
} property_sink_t<disambiguation_emergency_numbers>;

typedef struct CallFrequencyData {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fCallUuid;
	object fFrequencyData;
	BOOL fIsInputData;
} CallFrequencyData;

typedef struct property_sink_t<call_frequency_data> {
	CallFrequencyData fValue;
} property_sink_t<call_frequency_data>;

typedef struct property_sink_t<thumper_handoff_allowed> {
	BOOL fValue;
} property_sink_t<thumper_handoff_allowed>;

typedef struct property_sink_t<thumper_account_id> {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > fValue;
} property_sink_t<thumper_account_id>;

typedef struct event_sink_t<call_control_failure>* event_sink_t<call_control_failure>Ref;

typedef struct weak_ptr<DataNetworkMonitor> {
	DataNetworkMonitor __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<DataNetworkMonitor>;

typedef struct type {
	unsigned char __lx[12];
} type;

typedef struct function<void (const InternetReachabilityInterface &)> {
	type __buf_;
	__base<void (const InternetReachabilityInterface &)> __f_;
} function<void (const InternetReachabilityInterface &)>;

typedef struct property_source_t<internet_reachability_interface> {
	function<void (const InternetReachabilityInterface &)> fSender;
	unsigned char fValue;
} property_source_t<internet_reachability_interface>;

typedef struct function<void (const InternetStatus &)> {
	type __buf_;
	__base<void (const InternetStatus &)> __f_;
} function<void (const InternetStatus &)>;

typedef struct property_source_t<internet_status> {
	function<void (const InternetStatus &)> fSender;
	unsigned char fValue;
} property_source_t<internet_status>;

typedef struct function<void (const WifiStatus &)> {
	type __buf_;
	__base<void (const WifiStatus &)> __f_;
} function<void (const WifiStatus &)>;

typedef struct property_source_t<wifi_status> {
	function<void (const WifiStatus &)> fSender;
	unsigned char fValue;
} property_source_t<wifi_status>;

typedef struct shared_ptr<ctu::RestModuleState> {
	RestModuleState __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ctu::RestModuleState>;

typedef struct RestModule {
	shared_ptr<ctu::RestModuleState> fState;
} RestModule;

typedef struct CommonDataConnectionAgentData {
	char regStatus;
	char inHomeCountry;
	char dch;
	char utbf;
} CommonDataConnectionAgentData;

typedef struct DataConnectionAgentData {
	CommonDataConnectionAgentData common;
	int type;
} DataConnectionAgentData;

typedef struct shared_ptr<std::__1::basic_string<char> > {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<std::__1::basic_string<char> >;

typedef struct CFSharedRef<const __CFData> {
	__CFData fRef;
} CFSharedRef<const __CFData>;

typedef struct CFSharedRef<const __CFString> {
	__CFString fRef;
} CFSharedRef<const __CFString>;

typedef struct block<void ()(iCloudAccountEvent, const std::__1::basic_string<char> &)> {
	/*^block*/id fBlock;
} block<void ()(iCloudAccountEvent, const std::__1::basic_string<char> &)>;

typedef struct shared_ptr<ctu::Timer> {
	Timer __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<ctu::Timer>;

typedef struct block<void ()(unsigned int)> {
	/*^block*/id fBlock;
} block<void ()(unsigned int)>;

typedef struct shared_ptr<CellularPlanBootstrapAssertion> {
	CellularPlanBootstrapAssertion __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<CellularPlanBootstrapAssertion>;

typedef struct weak_ptr<CellularPlanController> {
	CellularPlanController __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<CellularPlanController>;

typedef struct weak_ptr<CellularPlanControllerInterface> {
	CellularPlanControllerInterface __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<CellularPlanControllerInterface>;

typedef struct weak_ptr<CellularPlanControllerDebugInterface> {
	CellularPlanControllerDebugInterface __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<CellularPlanControllerDebugInterface>;

typedef struct block<void ()(const __CFString *, const __CFString *, const void *)> {
	/*^block*/id fBlock;
} block<void ()(const __CFString *, const __CFString *, const void *)>;

typedef struct block<void ()(std::__1::shared_ptr<IDSP2PSync::DeviceDescr>)> {
	/*^block*/id fBlock;
} block<void ()(std::__1::shared_ptr<IDSP2PSync::DeviceDescr>)>;

typedef struct block<void ()(const __CFString *, const __CFString *, const void *, const __CFURL *, bool &)> {
	/*^block*/id fBlock;
} block<void ()(const __CFString *, const __CFString *, const void *, const __CFURL *, bool &)>;

typedef struct shared_ptr<IDSP2PSync::DeviceDescr> {
	DeviceDescr __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<IDSP2PSync::DeviceDescr>;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true> > {
	unsigned long __first_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __first_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, void *> > >;

typedef struct _tree<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true>, std::__1::allocator<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true> > __pair3_;
} tree<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true>, std::__1::allocator<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > >;

typedef struct map<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)>, (anonymous namespace)::compareCFStringsSharedRef, std::__1::allocator<std::__1::pair<const ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > > {
	tree<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, std::__1::__map_value_compare<ctu::cf::CFSharedRef<const __CFString>, std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> >, (anonymous namespace)::compareCFStringsSharedRef, true>, std::__1::allocator<std::__1::__value_type<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > > __tree_;
} map<ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)>, (anonymous namespace)::compareCFStringsSharedRef, std::__1::allocator<std::__1::pair<const ctu::cf::CFSharedRef<const __CFString>, dispatch::block<void ()(const __CFString *, bool, int)> > > >;

typedef struct shared_ptr<iCloudAccountNotificator> {
	iCloudAccountNotificator __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<iCloudAccountNotificator>;

typedef struct function<void (const bool &)> {
	type __buf_;
	__base<void (const bool &)> __f_;
} function<void (const bool &)>;

typedef struct property_source_t<edu_mode> {
	function<void (const bool &)> fSender;
	BOOL fValue;
} property_source_t<edu_mode>;

typedef struct weak_ptr<push::PushController> {
	PushController __ptr_;
	__shared_weak_count __cntrl_;
} weak_ptr<push::PushController>;

typedef struct __CFArray* CFArrayRef;

