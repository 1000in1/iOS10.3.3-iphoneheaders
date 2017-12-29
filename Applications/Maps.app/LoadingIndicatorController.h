/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface LoadingIndicatorController : NSObject {

	NSHashTable* _loadingTokens;
	char _updateScheduled;
	char _showing;
	char _suppressed;

}

@property (assign,getter=isSuppressed,nonatomic) char suppressed;              //@synthesize suppressed=_suppressed - In the implementation block
@property (getter=isShowing,nonatomic,readonly) char showing;                  //@synthesize showing=_showing - In the implementation block
+(void)setAsSharedInstanceClass;
+(id)sharedController;
-(void)setSuppressed:(char)arg1 ;
-(id)_allLoadingTokens;
-(void)showingDidChange;
-(id)beginShowingLoadingIndicator;
-(void)_didInvalidateLoadingToken;
-(char)_isLoading;
-(char)isShowing;
-(void)_updateLoadingIndicator;
-(char)isSuppressed;
@end
