/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class VKLabelMarker, MKMapItem, UIImage, UIView, UIImageView, UILabel, MKStarRatingAndLabelView, NSLayoutConstraint;

@interface QuickActionMenuAnchorView : UIView {

	VKLabelMarker* _labelMarker;
	MKMapItem* _mapItem;
	UIImage* _image;
	UIView* _container;
	UIImageView* _imageView;
	UIView* _labelContainer;
	UILabel* _nameLabel;
	UILabel* _infoLabel;
	MKStarRatingAndLabelView* _ratingView;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _containerLeftConstraint;
	NSLayoutConstraint* _containerVerticalConstraint;

}

@property (nonatomic,retain) VKLabelMarker * labelMarker;                         //@synthesize labelMarker=_labelMarker - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                 //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * widthConstraint;              //@synthesize widthConstraint=_widthConstraint - In the implementation block
-(VKLabelMarker *)labelMarker;
-(void)setLabelMarker:(VKLabelMarker *)arg1 ;
-(id)imageForStyleAttributes:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSLayoutConstraint *)widthConstraint;
-(void)setSearchResult:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)_updateLabels;
@end

