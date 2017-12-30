/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXRemoteElementChildrenDelegate, OS_dispatch_queue;
#import <AXRuntime/AXRuntime-Structs.h>
@class NSString, NSMutableSet, NSObject;

@interface AXRemoteElement : NSObject {

	NSString* _uuid;
	int _remotePid;
	unsigned _contextId;
	char _onClientSide;
	NSMutableSet* _allChildren;
	char _deniesDirectAppConnection;
	id<AXRemoteElementChildrenDelegate> _remoteChildrenDelegate;
	unsigned _machPort;
	id _accessibilityContainer;
	NSObject*<OS_dispatch_queue> _remoteQueue;

}

@property (assign,nonatomic) int remotePid;                                                                  //@synthesize remotePid=_remotePid - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                             //@synthesize contextId=_contextId - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> remoteQueue;                                       //@synthesize remoteQueue=_remoteQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long uuidHash; 
@property (assign,nonatomic) unsigned machPort;                                                              //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) char onClientSide;                                                              //@synthesize onClientSide=_onClientSide - In the implementation block
@property (assign,nonatomic,__weak) id<AXRemoteElementChildrenDelegate> remoteChildrenDelegate;              //@synthesize remoteChildrenDelegate=_remoteChildrenDelegate - In the implementation block
@property (assign,nonatomic,__weak) id accessibilityContainer;                                               //@synthesize accessibilityContainer=_accessibilityContainer - In the implementation block
@property (assign,nonatomic) char deniesDirectAppConnection;                                                 //@synthesize deniesDirectAppConnection=_deniesDirectAppConnection - In the implementation block
+(void)initialize;
+(id)remoteElementForBlock:(/*^block*/id)arg1 ;
+(id)remoteElementForContextId:(unsigned)arg1 ;
+(char)registerRemoteElement:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)contextId;
-(void)unregister;
-(CGRect)accessibilityFrame;
-(id)accessibilityContainer;
-(void)setAccessibilityContainer:(id)arg1 ;
-(void)setContextId:(unsigned)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(unsigned)machPort;
-(char)deniesDirectAppConnection;
-(void)setRemotePid:(int)arg1 ;
-(id)_remoteElementWithAttribute:(int)arg1 limitToRemoteSubviews:(char)arg2 ;
-(id<AXRemoteElementChildrenDelegate>)remoteChildrenDelegate;
-(void)setDeniesDirectAppConnection:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)remoteQueue;
-(void)setRemoteQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)onClientSide;
-(void)_accessibilityIncreaseSelection:(id)arg1 ;
-(void)platformCleanup;
-(unsigned long long)uuidHash;
-(id)_accessibilityResponderElement;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(id)_accessibilitySortedElementsWithin;
-(id)accessibilityContainerElements;
-(id)_accessibilityTextViewTextOperationResponder;
-(id)_accessibilityTextOperations;
-(int)remotePid;
-(void)setRemoteChildrenDelegate:(id<AXRemoteElementChildrenDelegate>)arg1 ;
-(id)_accessibilityActiveKeyboard;
-(id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned)arg3 ;
-(void)setOnClientSide:(char)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
@end
