/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStoryboardSegueTemplate.h>

@class NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {

	unsigned _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;

}

@property (assign,nonatomic) unsigned permittedArrowDirections;                  //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                           //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;              //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)setPermittedArrowDirections:(unsigned)arg1 ;
-(UIView *)anchorView;
-(UIBarButtonItem *)anchorBarButtonItem;
-(unsigned)permittedArrowDirections;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
@end

