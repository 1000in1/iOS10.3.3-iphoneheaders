/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBStatusBarStateProvider.h>

@protocol SBStarkSessionConfiguring;
@class NSString, NSMutableDictionary;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider {

	id<SBStarkSessionConfiguring> _sessionConfiguration;
	char _oldAggregatorTimeCString[64];
	char _timeCString[64];
	char _statusBarTimeRequiresUpdate;
	char _showOptimalCellData;
	char _showTapToRadar;
	char _disableBattery;
	char _showElectronicTollCollection;
	char _electronicTollCollectionAvailable;
	char _allStatusBarItemsOverrideEnabled;
	NSString* _inCallDetail;
	int _requestedActions;
	NSMutableDictionary* _statusBarItemsDisabledRequesters;
	char _dockIsEnabled;

}
+(char)_itemIsIgnored:(int)arg1 ;
-(void)_callDurationChanged;
-(void)dockSettingsDidChange;
-(char)_shouldPostForVisitedItem:(int)arg1 withUpdates:(char)arg2 toAggregatorData:(const SCD_Struct_SB48*)arg3 lastPost:(const SCD_Struct_SB48*)arg4 ;
-(void)_composePostDataFromAggregatorData:(SCD_Struct_SB48*)arg1 ;
-(void)_composePostActionsFromAggregatorActions:(int*)arg1 ;
-(void)_didFinishPost;
-(char)_shouldPostForUpdatesToNonItemData:(const SCD_Struct_SB48*)arg1 ;
-(void)_electronicTollCollectionChanged;
-(void)_resetStatusBarTime;
-(char)_shouldShowRadarItem;
-(char)_shouldDisableBattery;
-(void)_batteryStateChanged;
-(char)_isItemEnabled:(int)arg1 ;
-(void)setStatusBarItem:(int)arg1 disabled:(char)arg2 forRequester:(id)arg3 ;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)doubleHeightStatusStringForStyle:(int)arg1 ;
@end

