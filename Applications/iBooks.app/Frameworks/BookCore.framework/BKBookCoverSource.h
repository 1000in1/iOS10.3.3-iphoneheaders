/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <BookCore/BKBookCoverSourceInternal.h>

@protocol BKBookCoverResolving, OS_dispatch_queue, BKBookCoverPrefetch;
@class BCCoverCache, NSObject, NSMutableArray, NSString, UIImage, NSURL;

@interface BKBookCoverSource : NSObject <BKBookCoverSourceInternal> {

	id<BKBookCoverResolving> _resolver;
	CGSize _size;
	int _options;
	BCCoverCache* _cache;
	os_unfair_lock_s _stateSpinlock;
	NSObject*<OS_dispatch_queue> _sync;
	int _currentState;
	NSMutableArray* _observers;
	char _isDownloading;
	char _isLocal;
	char _cancelled;
	char _forceBlankCover;
	char _timerExpired;
	BKBookCoverGenericParams _genericParams;
	unsigned _generationId;
	unsigned _timeoutId;
	unsigned _usageCount;
	os_unfair_lock_s _usageCountSpinlock;
	NSString* _artworkURLTemplate;
	NSString* _bookId;
	id<BKBookCoverPrefetch> _currentImagePrefetch;
	UIImage* _currentImage;
	NSURL* _currentURL;
	NSString* _temporaryItemIdentifier;

}

@property (nonatomic,retain) id<BKBookCoverPrefetch> currentImagePrefetch;              //@synthesize currentImagePrefetch=_currentImagePrefetch - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                                    //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) NSURL * currentURL;                                        //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,retain) NSString * temporaryItemIdentifier;                        //@synthesize temporaryItemIdentifier=_temporaryItemIdentifier - In the implementation block
@property (nonatomic,readonly) char genericImageHasAudioIcon; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * bookId;                                       //@synthesize bookId=_bookId - In the implementation block
-(NSURL *)currentURL;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(NSString *)bookId;
-(id)initWithCache:(id)arg1 bookId:(id)arg2 resolver:(id)arg3 size:(CGSize)arg4 options:(int)arg5 ;
-(void)_copyInfoPropertiesAndResolveStart:(id)arg1 ;
-(void)_resolveStart;
-(void)_waitForCondition:(/*^block*/id)arg1 ;
-(id)_coverImageState:(int*)arg1 extended:(SCD_Struct_BK19*)arg2 condition:(/*^block*/id)arg3 ;
-(id)coverImageState:(int*)arg1 extended:(SCD_Struct_BK19*)arg2 flags:(int)arg3 ;
-(void)decrementUsageCount;
-(void)removeCoverImageObserver:(id)arg1 ;
-(id)addCoverImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3 ;
-(id)_coverImageURLState:(int*)arg1 extended:(SCD_Struct_BK19*)arg2 condition:(/*^block*/id)arg3 ;
-(void)_resolvedWithUIImage:(id)arg1 url:(id)arg2 state:(int)arg3 ;
-(void)_notifyObserversAsyncWithOldState:(int)arg1 ;
-(void)_resolveUsingGeneric;
-(void)_resolveUsingExistingArt;
-(void)_resolveByPluginRenderingUsingTempArt:(char)arg1 hasFallback:(char)arg2 useAssetURL:(char)arg3 tryLargestExisting:(char)arg4 ;
-(void)setCurrentImagePrefetch:(id<BKBookCoverPrefetch>)arg1 ;
-(void)_resolvedWithCGImage:(CGImageRef)arg1 url:(id)arg2 state:(int)arg3 ;
-(void)_resolveUsingLargestExistingArt;
-(void)_resolveUsingTemporaryArtAndTryLargestExisting:(char)arg1 ;
-(void)_resolvePrefetch:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_fetchGenericCover;
-(id)_emptyFetch;
-(void)_resolveByGenericRendering;
-(int)_imageFormat;
-(id)coverImageState:(int*)arg1 flags:(int)arg2 ;
-(id)coverImageFutureWithFlags:(int)arg1 ;
-(char)isBlankOrEmptyWithTimedOut:(out char*)arg1 ;
-(char)genericImageHasAudioIcon;
-(id)initWithCache:(id)arg1 info:(id)arg2 resolver:(id)arg3 size:(CGSize)arg4 options:(int)arg5 ;
-(void)refreshPropertiesFromInfo:(id)arg1 ;
-(id<BKBookCoverPrefetch>)currentImagePrefetch;
-(NSString *)temporaryItemIdentifier;
-(void)setTemporaryItemIdentifier:(NSString *)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(id)identifier;
-(void)prepareForReuse;
-(UIImage *)currentImage;
-(void)refresh;
-(id)coverImage;
-(void)setCurrentImage:(UIImage *)arg1 ;
-(void)incrementUsageCount;
-(unsigned)usageCount;
-(id)coverImageURL;
@end

