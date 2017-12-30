/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAlertManagerDelegate <NSObject>
@optional
-(char)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2;
-(char)alertManager:(id)arg1 defaultShouldAutorotateForAlert:(id)arg2;
-(int)alertManager:(id)arg1 defaultInterfaceOrientationForPresentationOfAlert:(id)arg2;
-(unsigned)alertManager:(id)arg1 defaultSupportedInterfaceOrientationsForAlert:(id)arg2;

@required
-(CGRect*)sceneFrameForAlerts:(id)arg1;
-(float)sceneLevelForAlerts;

@end

