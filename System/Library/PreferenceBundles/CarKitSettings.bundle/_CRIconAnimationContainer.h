/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarKitSettings/CarKitSettings-Structs.h>
#import <UIKit/UIView.h>

@class CRIconView;

@interface _CRIconAnimationContainer : UIView {

	CRIconView* _currentIconView;
	CRIconView* _targetIconView;

}

@property (nonatomic,readonly) CRIconView * currentIconView;              //@synthesize currentIconView=_currentIconView - In the implementation block
@property (nonatomic,readonly) CRIconView * targetIconView;               //@synthesize targetIconView=_targetIconView - In the implementation block
-(CRIconView *)targetIconView;
-(CRIconView *)currentIconView;
-(id)initWithFrame:(CGRect)arg1 icon:(id)arg2 currentlyVisible:(char)arg3 ;
@end

