/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <GuidedAccess/GAXViewController.h>
#import <GuidedAccess/GAXFeatureViewDelegate.h>

@protocol GAXFeatureViewControllerDelegate;
@class GAXStyleProvider, GAXUIServer, NSArray, NSString;

@interface GAXFeatureViewController : GAXViewController <GAXFeatureViewDelegate> {

	id<GAXFeatureViewControllerDelegate> _delegate;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;

}

@property (nonatomic,readonly) int applicationInterfaceOrientation; 
@property (nonatomic,readonly) NSArray * hardwareFeatureViewsParameters; 
@property (nonatomic,readonly) char shouldDisplayMiniToolbar; 
@property (nonatomic,readonly) NSArray * systemFeatureViewsParameters; 
@property (assign,nonatomic) id<GAXFeatureViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                           //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) GAXUIServer * userInterfaceServer;                          //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setUserInterfaceServer:(GAXUIServer *)arg1 ;
-(GAXUIServer *)userInterfaceServer;
-(id)styleProviderForFeatureView:(id)arg1 ;
-(int)applicationInterfaceOrientation;
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(int)arg2 timeRestrictionsEnabled:(char)arg3 ;
-(void)dismissOptionsAnimated:(char)arg1 ;
-(id)_hardwareFeatureViews;
-(void)_enumerateSystemFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(char)_isUsingAppRestrictions;
-(id)_appFeatureViews;
-(id)_timeRestrictionFeatureViews;
-(NSArray *)hardwareFeatureViewsParameters;
-(NSArray *)systemFeatureViewsParameters;
-(id)_allFeatureViews;
-(id)_viewForPresentingOverlayUserInterface;
-(char)shouldDisplayMiniToolbar;
-(void)_enumerateAppFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)_enumerateHardwareFeatureViewsParametersUsingBlock:(/*^block*/id)arg1 ;
-(void)featureView:(id)arg1 didChangeState:(char)arg2 ;
-(void)presentOptionsForFeatureView:(id)arg1 ;
-(void)setDelegate:(id<GAXFeatureViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXFeatureViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(GAXStyleProvider *)styleProvider;
-(void)setStyleProvider:(GAXStyleProvider *)arg1 ;
@end

