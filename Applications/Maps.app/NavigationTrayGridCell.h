/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Maps/MapsTheming.h>

@class UIImageView, UILabel, GEOSearchCategory, UIView, NSString;

@interface NavigationTrayGridCell : UICollectionViewCell <MapsTheming> {

	int _identifier;
	char _shouldUseCustomImageBackgroundColor;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	GEOSearchCategory* _category;
	UIView* _highlightedOverlayView;

}

@property (nonatomic,retain) UIView * highlightedOverlayView;                       //@synthesize highlightedOverlayView=_highlightedOverlayView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * category;                          //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) char shouldUseCustomImageBackgroundColor;              //@synthesize shouldUseCustomImageBackgroundColor=_shouldUseCustomImageBackgroundColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(void)setShouldUseCustomImageBackgroundColor:(char)arg1 ;
-(char)shouldUseCustomImageBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)category;
-(void)setHighlighted:(char)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(UIView *)highlightedOverlayView;
-(void)setHighlightedOverlayView:(UIView *)arg1 ;
@end

