/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSString;

@interface ReportAProblemLocationInstructionsView : UIView {

	UILabel* _label;
	UIView* _bottomDivider;

}

@property (nonatomic,retain) NSString * instructionText; 
-(id)initWithInstructionText:(id)arg1 ;
-(NSString *)instructionText;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMapType:(unsigned)arg1 ;
-(void)setInstructionText:(NSString *)arg1 ;
@end

