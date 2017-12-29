/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AXUIClient, NSString;

@interface AXBTouchAccommodationsController : NSObject <AXUIClientDelegate> {

	char _areTouchAccommodationsInEffect;
	NSObject*<OS_dispatch_queue> _touchAccommodationsQueue;
	AXUIClient* _touchAccommodationsClient;

}

@property (nonatomic,retain) AXUIClient * touchAccommodationsClient;              //@synthesize touchAccommodationsClient=_touchAccommodationsClient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initializeMonitor;
+(void)hideHoldDurationTripleClickHelp;
+(void)showHoldDurationTripleClickHelp;
-(void)_registerForTouchAccommodationsAXSettingsUpdate;
-(void)_updateTouchAccommodationsSetting;
-(void)_showHoldDurationTripleClickHelp;
-(void)_hideHoldDurationTripleClickHelp;
-(AXUIClient *)touchAccommodationsClient;
-(void)setTouchAccommodationsClient:(AXUIClient *)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_clientIdentifier;
@end
