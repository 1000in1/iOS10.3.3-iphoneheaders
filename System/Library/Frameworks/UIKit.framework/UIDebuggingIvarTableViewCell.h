/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIDebuggingIvar, UILabel;

@interface UIDebuggingIvarTableViewCell : UITableViewCell {

	UIDebuggingIvar* _ivar;
	UILabel* _nameLabel;
	UILabel* _typeLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                 //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * typeLabel;                 //@synthesize typeLabel=_typeLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;                //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIDebuggingIvar * ivar;              //@synthesize ivar=_ivar - In the implementation block
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)_prepareConstraints;
-(UILabel *)typeLabel;
-(void)setIvar:(UIDebuggingIvar *)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setTypeLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(UILabel *)valueLabel;
-(UIDebuggingIvar *)ivar;
@end
