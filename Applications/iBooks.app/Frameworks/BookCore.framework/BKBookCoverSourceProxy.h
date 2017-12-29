/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <BookCore/BKBookCoverSourceInternal.h>

@class BKBookCoverSource, NSString;

@interface BKBookCoverSourceProxy : NSObject <BKBookCoverSourceInternal> {

	BKBookCoverSource* _source;
	id _identifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bookId; 
@property (nonatomic,readonly) char genericImageHasAudioIcon; 
-(NSString *)bookId;
-(id)coverImageState:(int*)arg1 extended:(SCD_Struct_BK19*)arg2 flags:(int)arg3 ;
-(void)removeCoverImageObserver:(id)arg1 ;
-(id)addCoverImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3 ;
-(id)coverImageState:(int*)arg1 flags:(int)arg2 ;
-(id)coverImageFutureWithFlags:(int)arg1 ;
-(char)isBlankOrEmptyWithTimedOut:(out char*)arg1 ;
-(char)genericImageHasAudioIcon;
-(id)initWithSource:(id)arg1 identifier:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(id)identifier;
-(void)prepareForReuse;
-(id)coverImage;
-(id)coverImageURL;
@end
