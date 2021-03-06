/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UILabel, UIImageView;

@interface ICFolderSelectorPaletteView : UIView {

	NSArray* _notes;
	UILabel* _headingLabel;
	UILabel* _subheadingLabel;
	UIImageView* _imageView;

}

@property (retain) UILabel * headingLabel;                 //@synthesize headingLabel=_headingLabel - In the implementation block
@property (retain) UILabel * subheadingLabel;              //@synthesize subheadingLabel=_subheadingLabel - In the implementation block
@property (retain) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSArray * notes;              //@synthesize notes=_notes - In the implementation block
-(UILabel *)headingLabel;
-(void)setHeadingLabel:(UILabel *)arg1 ;
-(void)updateImageAndLabels;
-(id)previewImageForNotes:(id)arg1 ;
-(id)headingStringForNotes:(id)arg1 ;
-(UILabel *)subheadingLabel;
-(id)subheadingStringForNotes:(id)arg1 ;
-(void)setSubheadingLabel:(UILabel *)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSArray *)notes;
-(void)setNotes:(NSArray *)arg1 ;
-(id)initFromNib;
@end

