/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@protocol PHAudioCallControlsViewDelegate;
@class NSArray, NSCache, TUCallProviderManager, NSString;

@interface PHAudioCallControlsView : UIView <TUCallProviderManagerDelegate> {

	char _buttonsEnabled;
	id<PHAudioCallControlsViewDelegate> _delegate;
	NSArray* _buttonsArray;
	NSCache* _punchoutImageCache;
	TUCallProviderManager* _providerManager;

}

@property (copy) NSArray * buttonsArray;                                                       //@synthesize buttonsArray=_buttonsArray - In the implementation block
@property (retain) NSCache * punchoutImageCache;                                               //@synthesize punchoutImageCache=_punchoutImageCache - In the implementation block
@property (retain) TUCallProviderManager * providerManager;                                    //@synthesize providerManager=_providerManager - In the implementation block
@property (assign,nonatomic,__weak) id<PHAudioCallControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char buttonsEnabled;                                              //@synthesize buttonsEnabled=_buttonsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)buttonsArray;
-(float)_topMargin;
-(float)_verticalSpacing;
-(void)reloadButtonViews;
-(void)setButtonsArray:(NSArray *)arg1 ;
-(float)_horizontalSpacing;
-(void)buttonShortPressGestureRecognizer:(id)arg1 ;
-(void)buttonLongPressGestureRecognizer:(id)arg1 ;
-(void)reloadButtonViewStates;
-(char)buttonsEnabled;
-(void)assignControlType:(unsigned)arg1 toButton:(id)arg2 ;
-(NSCache *)punchoutImageCache;
-(id)buttonForControlType:(unsigned)arg1 ;
-(void)updateControls;
-(void)setSelectedState:(char)arg1 forControlType:(unsigned)arg2 ;
-(void)setPunchoutImageCache:(NSCache *)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PHAudioCallControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(id<PHAudioCallControlsViewDelegate>)delegate;
-(void)setCenter:(CGPoint)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)buttonTapped:(id)arg1 ;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(TUCallProviderManager *)providerManager;
-(void)setProviderManager:(TUCallProviderManager *)arg1 ;
-(void)setButtonsEnabled:(char)arg1 ;
@end

