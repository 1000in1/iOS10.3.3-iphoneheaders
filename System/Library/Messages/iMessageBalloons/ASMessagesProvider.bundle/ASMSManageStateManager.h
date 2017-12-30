/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface ASMSManageStateManager : NSObject {

	NSArray* _manageablePlugins;
	NSArray* _manageableNewOrUpdatedPlugins;
	NSDictionary* _stagedPluginMap;

}

@property (nonatomic,copy) NSArray * manageablePlugins;                          //@synthesize manageablePlugins=_manageablePlugins - In the implementation block
@property (nonatomic,copy) NSArray * manageableNewOrUpdatedPlugins;              //@synthesize manageableNewOrUpdatedPlugins=_manageableNewOrUpdatedPlugins - In the implementation block
@property (nonatomic,copy) NSDictionary * stagedPluginMap;                       //@synthesize stagedPluginMap=_stagedPluginMap - In the implementation block
@property (nonatomic,readonly) char hasNewOrUpdatedPlugins; 
+(id)sharedInstance;
-(NSDictionary *)stagedPluginMap;
-(void)markNewAndUpdatedPluginsAsSeen;
-(char)hasDisabledPlugins;
-(void)resetEnabledStateChanges;
-(void)commitEnabledStateChanges;
-(void)setStagedPluginMap:(NSDictionary *)arg1 ;
-(void)fetchPluginsFromPluginManager;
-(NSArray *)manageableNewOrUpdatedPlugins;
-(void)setManageablePlugins:(NSArray *)arg1 ;
-(NSArray *)manageablePlugins;
-(void)setManageableNewOrUpdatedPlugins:(NSArray *)arg1 ;
-(char)isPluginEnabled:(id)arg1 includingStagedChanges:(char)arg2 ;
-(char)hasNewOrUpdatedPlugins;
-(void)stageEnabledState:(char)arg1 forPlugin:(id)arg2 ;
-(id)init;
@end

