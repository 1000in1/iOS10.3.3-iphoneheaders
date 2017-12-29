/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication, NSString;

@interface SBLaunchAlertItem : SBAlertItem {

	SBApplication* _associatedDisplay;
	int _type;
	NSString* _bundleID;
	char _isDataAlert;
	char _usesCellNetwork;

}
-(id)initWithLaunchAlertType:(int)arg1 dataAlert:(char)arg2 usesCellNetwork:(char)arg3 bundleID:(id)arg4 ;
-(void)setAssociatedWithDisplay:(id)arg1 ;
-(void)_displayDeactivated:(id)arg1 ;
-(void)configureForAirplaneModeDataAlertOnCellular:(char)arg1 ;
-(void)configureForAirplaneModeDataAlertOffCellular:(char)arg1 ;
-(void)configureForAirplaneModeNonDataAlert;
-(void)configureForInCall;
-(void)turnOffAirplaneMode;
-(void)sendUserToSettings;
-(void)dealloc;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
@end
