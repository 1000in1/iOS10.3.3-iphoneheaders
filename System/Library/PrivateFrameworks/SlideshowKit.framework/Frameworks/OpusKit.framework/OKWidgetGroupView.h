/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetViewCollection.h>
#import <libobjc.A.dylib/OKWidgetGroupViewExports.h>

@class NSArray, NSMutableDictionary, OKWidgetView, OKTransition, NSString, OFUIView;

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports> {

	int _index;
	NSArray* _items;
	NSMutableDictionary* _itemWidgetViews;
	OKWidgetView* _currentWidgetView;
	OKTransition* _transition;
	NSString* _switchActionScript;
	char _autoplay;
	char _loop;
	char _isPlaying;
	double _itemDuration;
	char _isInTransition;
	UIEdgeInsets _itemEdgeInsets;
	OFUIView* _itemContainerView;

}

@property (nonatomic,readonly) char isPlaying;                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(char)isPlaying;
-(id)valueForUndefinedKey:(id)arg1 ;
-(char)prepareForDisplay:(char)arg1 ;
-(void)_stop;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setSettingAutoplay:(char)arg1 ;
-(void)setSettingLoop:(char)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(id)collectionItemAtIndexPath:(id)arg1 ;
-(void)prepareForRefresh;
-(void)prepareForReload;
-(id)layoutSettingsKeys;
-(void)setSettingTransition:(id)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(unsigned)collectionItemsCount;
-(id)collectionItemsNames;
-(id)collectionItemForName:(id)arg1 ;
-(CGRect)itemContainerRect;
-(int)rotatedIndexForIndex:(int)arg1 ;
-(id)_widgetViewForIndex:(int)arg1 ;
-(void)_updateDisplayedWidgetViews;
-(id)_previousWidgetView;
-(id)_nextWidgetView;
-(void)_prepareAllForUnload:(char)arg1 except:(id)arg2 ;
-(void)_transitionToIndex:(int)arg1 withTransition:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reloadWidgetViews;
-(void)_gotoIndex:(int)arg1 ;
-(void)_transitionToIndex:(int)arg1 forward:(char)arg2 andLocation:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_gotoNextIndex;
-(void)_jsTransitionToIndex:(int)arg1 forward:(char)arg2 andLocation:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_jsTransitionToIndex:(int)arg1 withTransition:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_jsGotoIndex:(int)arg1 ;
-(id)settingTransition;
-(void)setSettingItems:(id)arg1 ;
-(void)setSettingIndex:(int)arg1 ;
-(int)settingIndex;
-(void)setSettingItemDuration:(double)arg1 ;
-(void)setSettingSwitchActionScript:(id)arg1 ;
-(UIEdgeInsets)settingItemEdgeInsets;
-(void)setSettingItemEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_play;
-(id)initWithWidget:(id)arg1 ;
@end

