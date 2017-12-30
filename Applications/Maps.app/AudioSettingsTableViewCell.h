/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Maps/MapsTheming.h>

@class NSString;

@interface AudioSettingsTableViewCell : UITableViewCell <MapsTheming> {

	char _cellEnabled;
	float _textIndentation;
	char _checked;

}

@property (assign,nonatomic) char cellEnabled;                      //@synthesize cellEnabled=_cellEnabled - In the implementation block
@property (assign,nonatomic) float textIndentation;                 //@synthesize textIndentation=_textIndentation - In the implementation block
@property (assign,nonatomic) char checked;                          //@synthesize checked=_checked - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(float)textIndentation;
-(void)setTextIndentation:(float)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(char)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(char)checked;
-(void)setCellEnabled:(char)arg1 ;
-(char)cellEnabled;
@end

