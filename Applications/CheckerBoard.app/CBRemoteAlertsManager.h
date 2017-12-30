/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoard/CBRemoteAlertServerDelegate.h>

@class NSMutableDictionary, CBRemoteAlertServer, NSString;

@interface CBRemoteAlertsManager : NSObject <CBRemoteAlertServerDelegate> {

	NSMutableDictionary* _contexts;
	CBRemoteAlertServer* _remoteAlertServer;

}

@property (nonatomic,retain) NSMutableDictionary * contexts;                       //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) CBRemoteAlertServer * remoteAlertServer;              //@synthesize remoteAlertServer=_remoteAlertServer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)server:(id)arg1 createAlert:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)server:(id)arg1 receiveResponseFromAlertWithIdentifier:(id)arg2 timeout:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)setRemoteAlertServer:(CBRemoteAlertServer *)arg1 ;
-(id)init;
-(NSMutableDictionary *)contexts;
-(void)setContexts:(NSMutableDictionary *)arg1 ;
-(CBRemoteAlertServer *)remoteAlertServer;
@end

