/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {

	NSMutableDictionary* _managersByBundleID;

}
+(id)sharedInstance;
-(void)registerPluginsFromBundle:(id)arg1 ;
-(id)pluginManagerForBundle:(id)arg1 ;
-(void)registerPlugins;
-(id)mainPluginManager;
-(id)_init;
@end

