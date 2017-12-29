/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AXLocalizationCaptionServer.axuiservice/AXLocalizationCaptionServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXLocalizationCaptionServer/AXLocalizationCaptionViewControllerDelegate.h>
#import <AXLocalizationCaptionServer/AXUIService.h>

@class NSArray, AXLocalizationCaptionViewController, AXLocalizationCaptionBackgroundControllerViewController, NSString;

@interface AXLocalizationCaptionServer : NSObject <AXLocalizationCaptionViewControllerDelegate, AXUIService> {

	NSArray* _lastPackages;
	AXLocalizationCaptionViewController* _rootViewController;
	AXLocalizationCaptionBackgroundControllerViewController* _backgroundViewController;

}

@property (nonatomic,retain) AXLocalizationCaptionViewController * rootViewController;                                        //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) AXLocalizationCaptionBackgroundControllerViewController * backgroundViewController;              //@synthesize backgroundViewController=_backgroundViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logPackages:(id)arg1 ;
-(void)_startService;
-(id)createRootViewController;
-(void)setBackgroundViewController:(AXLocalizationCaptionBackgroundControllerViewController *)arg1 ;
-(void)_stopService;
-(void)_showRootViewControllerIfNeeded:(/*^block*/id)arg1 ;
-(void)_hideRootViewController;
-(void)uiLockStateChanged:(char)arg1 ;
-(AXLocalizationCaptionViewController *)rootViewController;
-(void)setRootViewController:(AXLocalizationCaptionViewController *)arg1 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1 ;
-(AXLocalizationCaptionBackgroundControllerViewController *)backgroundViewController;
@end
