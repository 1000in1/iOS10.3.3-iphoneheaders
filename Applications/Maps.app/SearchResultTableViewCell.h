/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/_SearchResultTableViewCell.h>

@class UIImageView, NSURL;

@interface SearchResultTableViewCell : _SearchResultTableViewCell {

	UIImageView* _imageView;
	int _imageState;
	NSURL* _currentLoadingURL;

}
+(int)photoSize;
-(void)updateTheme;
-(void)prepareForActionMenuPresentationUsingTheme:(id)arg1 ;
-(float)horizontalSpacing;
-(void)didUpdateMapItem;
-(void)loadPhoto;
-(void)setDefaultImage;
-(void)cancelLoadingPhoto;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(CGSize)containerStackView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(float)trailingMargin;
@end

