/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NTKCCFaceContainerView, UIView, UILabel, UIImageView, NSString, UIImage;

@interface _NTKCCGalleryCollectionCell : UICollectionViewCell {

	NTKCCFaceContainerView* _faceContainerView;
	UIView* _highlightedView;
	UILabel* _nameLabel;
	UIImageView* _nameImageView;
	char _active;
	NSString* _calloutName;
	UIImage* _calloutImage;

}

@property (nonatomic,retain) UIView * faceView; 
@property (nonatomic,copy) NSString * calloutName;                //@synthesize calloutName=_calloutName - In the implementation block
@property (nonatomic,retain) UIImage * calloutImage;              //@synthesize calloutImage=_calloutImage - In the implementation block
@property (assign,nonatomic) char active;                         //@synthesize active=_active - In the implementation block
+(CGSize)itemSizeWithCalloutName:(char)arg1 andCalloutImage:(char)arg2 ;
+(id)reuseIdentifier;
-(NSString *)calloutName;
-(void)setFaceView:(UIView *)arg1 ;
-(void)setCalloutImage:(UIImage *)arg1 ;
-(void)_highlight;
-(void)setCalloutName:(NSString *)arg1 ;
-(UIImage *)calloutImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(char)active;
-(void)setActive:(char)arg1 ;
-(UIView *)faceView;
@end

