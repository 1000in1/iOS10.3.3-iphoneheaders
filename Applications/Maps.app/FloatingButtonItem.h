/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIButton;

@interface FloatingButtonItem : NSObject {

	UIButton* _button;
	int _option;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) int option;                     //@synthesize option=_option - In the implementation block
-(id)initWithButton:(id)arg1 option:(int)arg2 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(int)option;
-(void)setOption:(int)arg1 ;
@end

