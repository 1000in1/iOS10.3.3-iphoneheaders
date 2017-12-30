/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSKeyValueProperty;

@interface NSKeyValueObservance : NSObject {

	NSObject* _observer;
	NSKeyValueProperty* _property;
	void* _context;
	NSObject* _originalObservable;
	unsigned _options : 7;
	unsigned _cachedIsShareable : 1;

}
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

