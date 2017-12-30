/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/PlugIns/HomeNotification.appex/HomeNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeNotification/HomeNotification-Structs.h>
#import <UIKit/UIView.h>

@protocol NACancelable;
@class HomeNotificationContent, NSArray, UIActivityIndicatorView, HULayeredVisualEffectView, HomeNotificationStatusView, HUCameraView;

@interface HomeNotificationContentView : UIView {

	HomeNotificationContent* _content;
	NSArray* _constraints;
	UIActivityIndicatorView* _spinner;
	HULayeredVisualEffectView* _statusBarView;
	HomeNotificationStatusView* _statusView;
	HUCameraView* _cameraView;
	id<NACancelable> _statusTextOverrideCancellationToken;

}

@property (nonatomic,retain) NSArray * constraints;                                             //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                 //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) HULayeredVisualEffectView * statusBarView;                         //@synthesize statusBarView=_statusBarView - In the implementation block
@property (nonatomic,retain) HomeNotificationStatusView * statusView;                           //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) HUCameraView * cameraView;                                         //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,retain) id<NACancelable> statusTextOverrideCancellationToken;              //@synthesize statusTextOverrideCancellationToken=_statusTextOverrideCancellationToken - In the implementation block
@property (nonatomic,retain) HomeNotificationContent * content;                                 //@synthesize content=_content - In the implementation block
+(char)requiresConstraintBasedLayout;
-(id<NACancelable>)statusTextOverrideCancellationToken;
-(void)setStatusTextOverrideCancellationToken:(id<NACancelable>)arg1 ;
-(void)_updateStatusText:(id)arg1 accessoryImage:(id)arg2 animated:(char)arg3 ;
-(void)dealloc;
-(HomeNotificationContent *)content;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(NSArray *)constraints;
-(void)updateConstraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(HomeNotificationStatusView *)statusView;
-(void)setStatusView:(HomeNotificationStatusView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setContent:(HomeNotificationContent *)arg1 ;
-(HUCameraView *)cameraView;
-(void)setCameraView:(HUCameraView *)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(HULayeredVisualEffectView *)statusBarView;
-(void)setStatusBarView:(HULayeredVisualEffectView *)arg1 ;
-(void)setContent:(id)arg1 animated:(char)arg2 ;
@end

