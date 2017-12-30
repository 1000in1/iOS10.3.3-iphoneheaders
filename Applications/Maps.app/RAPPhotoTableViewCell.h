/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, NSLayoutConstraint, UIImage;

@interface RAPPhotoTableViewCell : UITableViewCell {

	int _appearance;
	UIButton* _addAPhotoButton;
	UIImageView* _cameraGlyphImageView;
	UIImageView* _imageView;
	NSLayoutConstraint* _preferredHeightConstraint;
	UIImage* _photo;

}

@property (nonatomic,retain) UIImage * photo;              //@synthesize photo=_photo - In the implementation block
+(float)_actualPreferredHeightForAppearance:(int)arg1 photo:(id)arg2 ;
+(float)preferredHeightForAppearance:(int)arg1 photo:(id)arg2 ;
-(id)initWithAppearance:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setupTextLabel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(void)setPhoto:(UIImage *)arg1 ;
-(UIImage *)photo;
@end

