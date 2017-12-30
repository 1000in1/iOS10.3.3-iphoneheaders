/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebNetworkStateObserver : NSObject {

	const NetworkStateNotifier* _notifier;

}

@property (assign,nonatomic) const NetworkStateNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
-(void)networkStateChanged:(id)arg1 ;
-(id)initWithNotifier:(const NetworkStateNotifier*)arg1 ;
-(const NetworkStateNotifier*)notifier;
-(void)setNotifier:(const NetworkStateNotifier*)arg1 ;
-(void)dealloc;
@end

