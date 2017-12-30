/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPreviewInteraction, NSString;

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	UIPreviewInteraction* _previewInteraction;

}

@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;              //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setStateToRecognized;
-(id)initWithPreviewInteraction:(id)arg1 ;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setStateToFailed;
@end

