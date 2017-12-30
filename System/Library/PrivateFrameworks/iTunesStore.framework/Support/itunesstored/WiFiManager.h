/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <itunesstored/itunesstored-Structs.h>
@class NSObject, NSString;

@interface WiFiManager : NSObject {

	int _clientType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	WiFiManagerClientRef _wifiClient;

}

@property (assign) int clientType; 
@property (readonly) NSString * IPAddress; 
+(id)sharedWiFiManager;
-(id)_wifiInterfaceName;
-(int)_wifiClientTypeForManagerType:(int)arg1 ;
-(void*)_wifiClient;
-(id)init;
-(void)dealloc;
-(void)setClientType:(int)arg1 ;
-(int)clientType;
-(NSString *)IPAddress;
@end

