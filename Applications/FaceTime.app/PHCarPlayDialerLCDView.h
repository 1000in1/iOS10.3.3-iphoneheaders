/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIView.h>
#import <FaceTime/DialerLCDFieldProtocol.h>

@protocol DialerLCDFieldDelegate;
@class UILabel, NSString;

@interface PHCarPlayDialerLCDView : UIView <DialerLCDFieldProtocol> {

	UILabel* _mainNumberLabel;
	id<DialerLCDFieldDelegate> _delegate;

}

@property (assign,nonatomic) id<DialerLCDFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) UILabel * mainNumberLabel;                                  //@synthesize mainNumberLabel=_mainNumberLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMainNumberLabel:(UILabel *)arg1 ;
-(UILabel *)mainNumberLabel;
-(void)insertStringAtCurrentPosition:(id)arg1 deletingPreviousCharacter:(char)arg2 ;
-(void)setText:(id)arg1 needsFormat:(char)arg2 ;
-(void)insertStringAtCurrentPosition:(id)arg1 ;
-(void)deleteCharacter;
-(char)inCallMode;
-(void)setInCallMode:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<DialerLCDFieldDelegate>)arg1 ;
-(void)dealloc;
-(id<DialerLCDFieldDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)text;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)endEditing;
-(void)setLabel:(id)arg1 ;
-(char)highlighted;
@end

