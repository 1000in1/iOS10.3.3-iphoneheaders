/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MessageLoadButton, UILabel, MFGradientView;

@interface MessageLoadIndicator : UIView {

	MessageLoadButton* _control;
	UILabel* _label;
	MFGradientView* _backgroundGradient;

}
-(id)initWithDescription:(id)arg1 button:(id)arg2 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)sendActionsForControlEvents:(unsigned)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3 ;
@end
