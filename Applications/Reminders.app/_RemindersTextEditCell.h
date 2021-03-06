/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKExpandingTextView;

@interface _RemindersTextEditCell : UITableViewCell {

	EKExpandingTextView* _expandingTextView;
	float _verticalPadding;
	float _minimumHeight;

}

@property (nonatomic,readonly) EKExpandingTextView * expandingTextView;              //@synthesize expandingTextView=_expandingTextView - In the implementation block
@property (assign,nonatomic) float verticalPadding;                                  //@synthesize verticalPadding=_verticalPadding - In the implementation block
@property (assign,nonatomic) float minimumHeight;                                    //@synthesize minimumHeight=_minimumHeight - In the implementation block
-(EKExpandingTextView *)expandingTextView;
-(float)_heightNeededForContentWidth:(float)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)verticalPadding;
-(void)setVerticalPadding:(float)arg1 ;
-(float)minimumHeight;
-(void)setMinimumHeight:(float)arg1 ;
-(float)desiredHeight;
@end

