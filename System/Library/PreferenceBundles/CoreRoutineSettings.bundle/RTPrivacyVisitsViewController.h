/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyLOI;

@interface RTPrivacyVisitsViewController : RTMapAndTableViewController {

	RTPrivacyLOI* _privacyLOI;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;              //@synthesize privacyLOI=_privacyLOI - In the implementation block
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)_removePrivacyLOI:(id)arg1 ;
-(void)_displayPrivacyLOI:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
@end

