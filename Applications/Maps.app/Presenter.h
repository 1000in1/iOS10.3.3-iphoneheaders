/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PresenterPresentationSource;
#import <Maps/Maps-Structs.h>
@class NSMutableArray, UIView, UIViewController;

@interface Presenter : NSObject {

	id _dismissalSelfReference;
	/*^block*/id _dismissal;
	NSMutableArray* _completions;
	int _dismissalCause;
	NSMutableArray* _willDismissBlocks;
	UIView* _positioningView;
	CGRect _positioningRect;
	/*^block*/id _positioning;
	id<PresenterPresentationSource> _usedPresentationSource;
	char _presenting;
	char _dismissed;
	char _dismissing;
	UIViewController* _presentingViewController;
	UIViewController* _presentedViewController;

}

@property (nonatomic,__weak,readonly) UIViewController * _presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * presentedViewController;                       //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign,getter=isPresenting,nonatomic) char presenting;                                //@synthesize presenting=_presenting - In the implementation block
@property (assign,getter=isDismissing,nonatomic) char dismissing;                                //@synthesize dismissing=_dismissing - In the implementation block
@property (assign,getter=isDismissed,nonatomic) char dismissed;                                  //@synthesize dismissed=_dismissed - In the implementation block
+(void)dismissPresenterIfNeeded:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
+(char)defaultPresentationIsOpaque;
-(char)isDismissing;
-(id)initWithPresentedViewController:(id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(void)presentFromRect:(CGRect)arg1 ofView:(id)arg2 inViewController:(id)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentFromViewController:(id)arg1 usingPositioningBlock:(/*^block*/id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(char)_getPresentationView:(out id*)arg1 rect:(out CGRect*)arg2 ;
-(void)_setUsedPresentationSource:(id)arg1 ;
-(id)_presentationBarButtonItem;
-(void)_presentFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addWillDismissBlock:(/*^block*/id)arg1 ;
-(void)_performPresentationOfViewController:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performDismissalAnimated:(char)arg1 ;
-(void)presentFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentUsingPresenter:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)isPresentingUsingPresenterOfClass:(Class)arg1 ;
-(void)setDismissing:(char)arg1 ;
-(void)dealloc;
-(UIViewController *)presentedViewController;
-(void)setPresenting:(char)arg1 ;
-(void)_didDismiss;
-(char)isPresenting;
-(char)isDismissed;
-(UIViewController *)_presentingViewController;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_willDismiss;
-(void)setDismissed:(char)arg1 ;
@end

