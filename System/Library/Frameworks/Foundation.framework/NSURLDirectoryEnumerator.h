/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/id _errorHandler;
	char shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)skipDescendents;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(id)nextObject;
-(unsigned)level;
-(void)skipDescendants;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)directoryAttributes;
-(id)fileAttributes;
@end

