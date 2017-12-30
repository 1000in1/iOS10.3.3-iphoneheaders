/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementProvider.h>

@protocol SCATElement;
@class SCATAuxiliaryElementManagerViewController, NSString;

@interface SCATAuxiliaryElementManager : NSObject <SCATElementProvider> {

	char _enabled;
	int _role;
	SCATAuxiliaryElementManagerViewController* _viewController;
	id<SCATElement> _contextElement;

}

@property (assign,getter=isEnabled,nonatomic) char enabled;                                           //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int role;                                                                //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) SCATAuxiliaryElementManagerViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) char isViewControllerLoaded; 
@property (nonatomic,retain) id<SCATElement> contextElement;                                          //@synthesize contextElement=_contextElement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char providesElements; 
-(void)setContextElement:(id<SCATElement>)arg1 ;
-(char)isVisibilityTiedToFocus;
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(char)containsElement:(id)arg1 ;
-(char)providesElements;
-(char)isViewControllerLoaded;
-(void)willBecomeCurrentAuxiliaryElementManager;
-(void)willResignCurrentAuxiliaryElementManager;
-(void)driver:(id)arg1 willFocusOnContext:(id)arg2 ;
-(void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3 ;
-(void)driver:(id)arg1 willUnfocusFromContext:(id)arg2 ;
-(id<SCATElement>)contextElement;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setViewController:(SCATAuxiliaryElementManagerViewController *)arg1 ;
-(SCATAuxiliaryElementManagerViewController *)viewController;
-(void)setEnabled:(char)arg1 animated:(char)arg2 ;
-(int)numberOfElements;
-(void)setRole:(int)arg1 ;
-(int)role;
@end

