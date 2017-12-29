/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/Diagnostics-Structs.h>
#import <Diagnostics/Diagnostics.BaseView.h>

@class UIView;

@interface Diagnostics.CardStackSubviewContainer : Diagnostics.BaseView {

	 animated;
	 containedViewRemovedCompletion;
	 topContainerConstraint;
	 bottomContainerConstraint;
	 leadingContainerConstraint;
	 trailingContainerConstraint;
	 containedView;

}

@property (assign,nonatomic) char animated; 
@property (copy,nonatomic) id containedViewRemovedCompletion; 
@property (retain,nonatomic) UIView * containedView; 
-(id)containedViewRemovedCompletion;
-(void)setContainedViewRemovedCompletion:(id)arg1 ;
-(UIView *)containedView;
-(void)setContainedView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
@end
