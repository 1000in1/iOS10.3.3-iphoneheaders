/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATDriverDelegate <NSObject>
@optional
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2;
-(void)driverDidPause:(id)arg1;
-(void)driverDidBecomeInactive:(id)arg1;
-(void)driverDidBecomeActive:(id)arg1;

@required
-(id)activeElementManagerForDriver:(id)arg1;
-(id)activeScannerDriver;
-(void)driver:(id)arg1 indicateDwellScanningWillAbort:(char)arg2;

@end

