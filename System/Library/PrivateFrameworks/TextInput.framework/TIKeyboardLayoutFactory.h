/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
+(id)layoutsFileName;
+(id)sharedKeyboardFactory;
-(void*)layoutsLibraryHandle;
-(NSMutableDictionary *)internalCache;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
-(id)keyboardPrefixForWidth:(float)arg1 andEdge:(char)arg2 ;
@end

