/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/QuickActionMenuPresenter.h>

@protocol MKAnnotation;
@class MKMapView, UIView, UIImageView, MKCalloutBackgroundView, SearchResultTableViewCell, TwoLinesTableViewCell, VKLabelMarker;

@interface MapQuickActionMenuPresenter : QuickActionMenuPresenter {

	MKMapView* _mapView;
	UIView* _pressureGestureHitView;
	UIImageView* _imageSourceView;
	CGPoint _imageSourceViewCenter;
	char _showImageSourceView;
	char _gestureInCallout;
	float _sourceViewScale;
	MKCalloutBackgroundView* _newCalloutBackgroundView;
	SearchResultTableViewCell* _searchResultCell;
	TwoLinesTableViewCell* _transitCell;
	id<MKAnnotation> _annotation;

}

@property (nonatomic,retain) VKLabelMarker * labelMarker; 
@property (nonatomic,retain) id<MKAnnotation> annotation;              //@synthesize annotation=_annotation - In the implementation block
-(id)initWithPresentingViewController:(id)arg1 inView:(id)arg2 ;
-(id)anchorContentView;
-(void)setResolvedMapItem:(id)arg1 ;
-(char)_shouldBeginOrbGestureAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)actionMenuDidFinish;
-(id)initWithPresentingViewController:(id)arg1 inMapView:(id)arg2 ;
-(id)_calloutViewController;
-(char)_isValidLabelMarker:(id)arg1 ;
-(void)_setGestureSourceViewForLabelMarker:(id)arg1 ;
-(void)_setGestureSourceViewForImageCenter:(CGPoint)arg1 attributes:(id)arg2 ;
-(void)_setGestureSourceViewForImageCenter:(CGPoint)arg1 image:(id)arg2 ;
-(void)resolveTransitLine;
-(void)dealloc;
-(void)reset;
-(void)_willBeginSystemProvidedDismissalOfAlertController:(id)arg1 ;
-(void)_didBeginSystemProvidedDismissalOfAlertController:(id)arg1 ;
-(void)_willBeginSystemProvidedPresentationOfAlertController:(id)arg1 ;
-(char)_shouldPerformSystemProvidedPresentationOfAlertController:(id)arg1 atSystemProvidedPresentationRegisteredViewLocation:(CGPoint)arg2 ;
-(void)_didEndSystemProvidedPresentationOfAlertController:(id)arg1 wasSuccessful:(char)arg2 ;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
@end

