/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ServiceAlertProxyDelegate, OS_xpc_object;
@class NSObject, SSXPCConnection;

@interface ServiceAlertProxy : NSObject {

	id<ServiceAlertProxyDelegate> _delegate;
	NSObject*<OS_xpc_object> _options;
	SSXPCConnection* _receiverConnection;
	NSObject*<OS_xpc_object> _receiverEndpoint;
	SSXPCConnection* _responseConnection;

}

@property (assign,nonatomic,__weak) id<ServiceAlertProxyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> options;                           //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> receiverEndpoint;                //@synthesize receiverEndpoint=_receiverEndpoint - In the implementation block
@property (nonatomic,retain) SSXPCConnection * responseConnection;                       //@synthesize responseConnection=_responseConnection - In the implementation block
-(void)_closeReceiverConnection;
-(void)finishWithResponse:(id)arg1 ;
-(void)setResponseConnection:(SSXPCConnection *)arg1 ;
-(NSObject*<OS_xpc_object>)receiverEndpoint;
-(SSXPCConnection *)responseConnection;
-(id)init;
-(void)invalidate;
-(void)setDelegate:(id<ServiceAlertProxyDelegate>)arg1 ;
-(void)dealloc;
-(id<ServiceAlertProxyDelegate>)delegate;
-(void)_disconnect;
-(NSObject*<OS_xpc_object>)options;
-(void)setOptions:(NSObject*<OS_xpc_object>)arg1 ;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
@end

