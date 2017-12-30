/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/SKUIClientContextConsuming.h>
#import <ASMessagesProvider/ASMSManageTableViewCellToggleDelegate.h>

@protocol ASMSManageDataSourceAutoEnableToggleDelegate;
@class SKUIClientContext, ASMSManageTableViewUpdateStrategy, NSString;

@interface ASMSManageDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, SKUIClientContextConsuming, ASMSManageTableViewCellToggleDelegate> {

	char _allowsPluginEnable;
	char _allowsPluginDisable;
	SKUIClientContext* _clientContext;
	id<ASMSManageDataSourceAutoEnableToggleDelegate> _autoEnableDelegate;
	ASMSManageTableViewUpdateStrategy* _updateStrategy;

}

@property (nonatomic,retain) ASMSManageTableViewUpdateStrategy * updateStrategy;                                      //@synthesize updateStrategy=_updateStrategy - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<ASMSManageDataSourceAutoEnableToggleDelegate> autoEnableDelegate;              //@synthesize autoEnableDelegate=_autoEnableDelegate - In the implementation block
@property (assign,nonatomic) char allowsPluginEnable;                                                                 //@synthesize allowsPluginEnable=_allowsPluginEnable - In the implementation block
@property (assign,nonatomic) char allowsPluginDisable;                                                                //@synthesize allowsPluginDisable=_allowsPluginDisable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ASMSManageTableViewUpdateStrategy *)updateStrategy;
-(void)manageTableView:(id)arg1 didToggleCellAtIndexPath:(id)arg2 enabled:(char)arg3 ;
-(void)setAutoEnableDelegate:(id<ASMSManageDataSourceAutoEnableToggleDelegate>)arg1 ;
-(void)setAllowsPluginEnable:(char)arg1 ;
-(void)setAllowsPluginDisable:(char)arg1 ;
-(void)applySectionUpdatesIfNecessaryOnTableView:(id)arg1 ;
-(void)enableAllPluginsAndRefreshVisibleCellsInTableView:(id)arg1 ;
-(id)indexPathForPluginWithIdentifier:(id)arg1 ;
-(char)allowsPluginEnable;
-(char)allowsPluginDisable;
-(void)setUpdateStrategy:(ASMSManageTableViewUpdateStrategy *)arg1 ;
-(id)_pluginForIndexPath:(id)arg1 ;
-(void)_goToPurchasedLabelTapped:(id)arg1 ;
-(id<ASMSManageDataSourceAutoEnableToggleDelegate>)autoEnableDelegate;
-(id)init;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingFooterView:(id)arg2 forSection:(int)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)refreshPlugins;
@end
