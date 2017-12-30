/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class UIStackView, UILayoutGuide, NSLayoutConstraint, _MKUILabel, MKArtworkImageView, MWTransitItem;

@interface MWTransitNavigationItemCell : MKTableViewCell {

	UIStackView* _stackView;
	UILayoutGuide* _contentGuide;
	UILayoutGuide* _leadingGutterGuide;
	NSLayoutConstraint* _leadingtGutterWidthConstraint;
	NSLayoutConstraint* _artworkXCenterOffsetFromLeadingGutter;
	NSLayoutConstraint* _rowHeightConstraint;
	NSLayoutConstraint* _primaryLabelToContentGuideConstraint;
	_MKUILabel* _primaryLabel;
	_MKUILabel* _secondaryLabel;
	MKArtworkImageView* _artworkImageView;
	MWTransitItem* _transitItem;

}

@property (nonatomic,readonly) _MKUILabel * primaryLabel;                                  //@synthesize primaryLabel=_primaryLabel - In the implementation block
@property (nonatomic,readonly) _MKUILabel * secondaryLabel;                                //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) MKArtworkImageView * artworkImageView;                      //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (assign,nonatomic) float rowHeight; 
@property (assign,nonatomic) float leadingArtworkColumnWidth; 
@property (assign,nonatomic) float artworkViewXCenterOffsetFromLeadingColumn; 
@property (nonatomic,retain) MWTransitItem * transitItem;                                  //@synthesize transitItem=_transitItem - In the implementation block
+(id)_secondaryFont;
+(id)_primaryFont;
-(id)_initialConstraints;
-(void)_updatePrimaryLabelToContentGuideConstaint;
-(void)setTransitItem:(MWTransitItem *)arg1 ;
-(void)setLeadingArtworkColumnWidth:(float)arg1 ;
-(float)leadingArtworkColumnWidth;
-(void)setArtworkViewXCenterOffsetFromLeadingColumn:(float)arg1 ;
-(float)artworkViewXCenterOffsetFromLeadingColumn;
-(MWTransitItem *)transitItem;
-(void)dealloc;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(_MKUILabel *)secondaryLabel;
-(MKArtworkImageView *)artworkImageView;
-(void)_createSubviews;
-(_MKUILabel *)primaryLabel;
-(void)_updateLayout;
@end

