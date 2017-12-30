/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AssistiveTouch.axuiservice/AssistiveTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIAlertDelegate.h>
#import <libobjc.A.dylib/AXUIService.h>

@class HNDScannerInputViewController, NSString;

@interface HNDUIServer : NSObject <AXUIAlertDelegate, AXUIService> {

	HNDScannerInputViewController* _scannerInputViewController;
	NSString* _lastShownAlertIdentifier;
	NSString* _lastShownBannerIdentifier;

}

@property (nonatomic,retain) HNDScannerInputViewController * scannerInputViewController;              //@synthesize scannerInputViewController=_scannerInputViewController - In the implementation block
@property (nonatomic,copy) NSString * lastShownAlertIdentifier;                                       //@synthesize lastShownAlertIdentifier=_lastShownAlertIdentifier - In the implementation block
@property (nonatomic,copy) NSString * lastShownBannerIdentifier;                                      //@synthesize lastShownBannerIdentifier=_lastShownBannerIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideContentViewController;
-(HNDScannerInputViewController *)scannerInputViewController;
-(void)setScannerInputViewController:(HNDScannerInputViewController *)arg1 ;
-(NSString *)lastShownAlertIdentifier;
-(NSString *)lastShownBannerIdentifier;
-(void)showContentViewController;
-(void)setLastShownAlertIdentifier:(NSString *)arg1 ;
-(void)setLastShownBannerIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1 ;
-(float)desiredWindowLevelForAlertWithIdentifier:(id)arg1 ;
@end

