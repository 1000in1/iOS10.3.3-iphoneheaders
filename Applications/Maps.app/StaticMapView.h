/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MKMapSnapshot, MKMapSnapshotter, MKMapCamera, NSArray;

@interface StaticMapView : UIView {

	UIImageView* _snapshotView;
	MKMapSnapshot* _snapshot;
	MKMapSnapshotter* _snapshotter;
	CGSize _lastSnapshotSize;
	CGSize _pendingSnapshotSize;
	MKMapCamera* _lastCamera;
	NSArray* _annotationViews;
	MKMapCamera* _camera;

}

@property (nonatomic,retain) MKMapCamera * camera;                 //@synthesize camera=_camera - In the implementation block
@property (nonatomic,copy) NSArray * annotationViews;              //@synthesize annotationViews=_annotationViews - In the implementation block
-(void)_updateSnapshotIfNecessary;
-(void)setAnnotationViews:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(void)setCamera:(MKMapCamera *)arg1 ;
-(NSArray *)annotationViews;
-(MKMapCamera *)camera;
-(void)_updateAnnotationViews;
@end

