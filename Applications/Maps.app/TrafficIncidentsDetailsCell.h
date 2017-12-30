/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class UIView, NSLayoutConstraint, VKTrafficIncident, _MKUILabel, TrafficIncidentsDateFormatter;

@interface TrafficIncidentsDetailsCell : MKTableViewCell {

	UIView* _centeringView;
	NSLayoutConstraint* _detailsLabelBaselineToTopConstraint;
	NSLayoutConstraint* _lastUpdateLabelBaselineToTopConstraint;
	NSLayoutConstraint* _lastUpdateLabelBaselineToDetailsLabelBaselineConstraint;
	NSLayoutConstraint* _bottomToLastUpdateLabelBaselineConstraint;
	char _isDimmed;
	VKTrafficIncident* _incident;
	_MKUILabel* _detailsLabel;
	_MKUILabel* _lastUpdateLabel;
	TrafficIncidentsDateFormatter* _formatter;

}

@property (nonatomic,retain) _MKUILabel * detailsLabel;                              //@synthesize detailsLabel=_detailsLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * lastUpdateLabel;                           //@synthesize lastUpdateLabel=_lastUpdateLabel - In the implementation block
@property (nonatomic,retain) TrafficIncidentsDateFormatter * formatter;              //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) VKTrafficIncident * incident;                           //@synthesize incident=_incident - In the implementation block
@property (assign,nonatomic) char isDimmed;                                          //@synthesize isDimmed=_isDimmed - In the implementation block
+(id)reuseIdentifier;
-(void)_updateStyleValuesFromTheme;
-(void)setIncident:(VKTrafficIncident *)arg1 ;
-(id)_autolayoutConstraints;
-(void)setIsDimmed:(char)arg1 ;
-(_MKUILabel *)lastUpdateLabel;
-(void)setLastUpdateLabel:(_MKUILabel *)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(TrafficIncidentsDateFormatter *)formatter;
-(void)setFormatter:(TrafficIncidentsDateFormatter *)arg1 ;
-(void)_createSubviews;
-(void)_updateConstraintValues;
-(VKTrafficIncident *)incident;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateFonts;
-(void)setDetailsLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)detailsLabel;
-(void)_updateLabels;
-(char)isDimmed;
@end

