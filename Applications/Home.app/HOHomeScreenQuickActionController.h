/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class UIApplication, HOHomeScreenQuickActionItemManager, NSString;

@interface HOHomeScreenQuickActionController : NSObject <HFItemManagerDelegate> {

	UIApplication* _application;
	HOHomeScreenQuickActionItemManager* _itemManager;

}

@property (nonatomic,retain) HOHomeScreenQuickActionItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) UIApplication * application;                                   //@synthesize application=_application - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_executeActionSetForShortcutItem:(id)arg1 navigator:(id)arg2 ;
-(void)_updateShortcutItems;
-(id)_generateShortcutItemForActionSetItem:(id)arg1 ;
-(id)performActionForShortcutItem:(id)arg1 navigator:(id)arg2 ;
-(id)initWithApplication:(id)arg1 ;
-(UIApplication *)application;
-(void)setApplication:(UIApplication *)arg1 ;
-(HOHomeScreenQuickActionItemManager *)itemManager;
-(void)setItemManager:(HOHomeScreenQuickActionItemManager *)arg1 ;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
@end

