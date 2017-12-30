/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface BackgroundColorButton : UIButton {

	NSMutableDictionary* _colorLookup;

}

@property (nonatomic,retain) NSMutableDictionary * colorLookup;              //@synthesize colorLookup=_colorLookup - In the implementation block
-(NSMutableDictionary *)colorLookup;
-(void)setColorLookup:(NSMutableDictionary *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 forState:(unsigned)arg2 ;
-(id)backgroundColorForState:(unsigned)arg1 ;
-(void)_updateBackgroundColor;
@end

