/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <UIKit/UIView.h>

@protocol HOLocationTriggerEditorMapDragRadiusViewDelegate, MKAnnotation, MKOverlay;
@class MKMapView, UIView, CAShapeLayer, NSMeasurementFormatter;

@interface HOLocationTriggerEditorMapDragRadiusView : UIView {

	char _isDragging;
	char _isMinimum;
	char _isMaximum;
	id<HOLocationTriggerEditorMapDragRadiusViewDelegate> delegate;
	unsigned proximity;
	MKMapView* _mapView;
	UIView* _handleEndpointView;
	id<MKAnnotation> _annotation;
	id<MKOverlay> _overlay;
	CAShapeLayer* _shapeLayer;
	NSMeasurementFormatter* _measurmentFormatter;

}

@property (nonatomic,retain) UIView * handleEndpointView;                                                //@synthesize handleEndpointView=_handleEndpointView - In the implementation block
@property (nonatomic,retain) id<MKAnnotation> annotation;                                                //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) id<MKOverlay> overlay;                                                      //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeLayer;                                                  //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic) char isMinimum;                                                             //@synthesize isMinimum=_isMinimum - In the implementation block
@property (assign,nonatomic) char isMaximum;                                                             //@synthesize isMaximum=_isMaximum - In the implementation block
@property (nonatomic,retain) NSMeasurementFormatter * measurmentFormatter;                               //@synthesize measurmentFormatter=_measurmentFormatter - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) char isDragging;                                                            //@synthesize isDragging=_isDragging - In the implementation block
@property (assign,nonatomic) id<HOLocationTriggerEditorMapDragRadiusViewDelegate> delegate; 
@property (assign,nonatomic) unsigned proximity; 
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
-(id)bezierPathWithEndPoint:(CGPoint)arg1 ;
-(id)shapeLayerWithEndPoint:(CGPoint)arg1 ;
-(void)popAnimateHandle;
-(void)animateHandleIn:(char)arg1 ;
-(double)currentHandleDistanceNormalized;
-(char)isMinimum;
-(float)minimumRadiusNormalized;
-(char)isMaximum;
-(float)maximumRadiusNormalized;
-(char)usesMetric;
-(CGPoint)minPoint;
-(void)setIsMinimum:(char)arg1 ;
-(void)setIsMaximum:(char)arg1 ;
-(float)minimumInMeters;
-(double)currentHandleDistance;
-(float)feetToMeters:(float)arg1 ;
-(void)removeHandle:(char)arg1 ;
-(void)setHandleEndpointView:(UIView *)arg1 ;
-(UIView *)handleEndpointView;
-(void)setMeasurmentFormatter:(NSMeasurementFormatter *)arg1 ;
-(NSMeasurementFormatter *)measurmentFormatter;
-(void)resizeCircleAfterDelay;
-(void)addHandleForAnnotation:(id)arg1 withOverlay:(id)arg2 ;
-(CGPoint)center;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<HOLocationTriggerEditorMapDragRadiusViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)isDragging;
-(id<HOLocationTriggerEditorMapDragRadiusViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id<MKOverlay>)overlay;
-(CAShapeLayer *)shapeLayer;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(void)setProximity:(unsigned)arg1 ;
-(CGPoint)maxPoint;
-(unsigned)proximity;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setOverlay:(id<MKOverlay>)arg1 ;
-(void)setIsDragging:(char)arg1 ;
@end

