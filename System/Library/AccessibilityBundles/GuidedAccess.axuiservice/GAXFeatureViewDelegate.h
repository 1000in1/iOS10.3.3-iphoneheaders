/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXFeatureViewDelegate <NSObject>
@optional
-(void)featureView:(id)arg1 didChangeTimeRestrictionDuration:(int)arg2 timeRestrictionsEnabled:(char)arg3;
-(void)featureView:(id)arg1 didChangeState:(char)arg2;
-(void)presentOptionsForFeatureView:(id)arg1;

@required
-(id)styleProviderForFeatureView:(id)arg1;

@end

