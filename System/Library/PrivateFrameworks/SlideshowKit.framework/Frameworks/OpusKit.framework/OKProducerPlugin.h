/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKProducerBundle.h>

@class NSArray, OKProducerContent;

@interface OKProducerPlugin : OKProducerBundle {

	Class _producerClass;
	int _loadCounter;
	NSArray* _loadedClasses;
	OKProducerContent* _content;

}

@property (nonatomic,retain) OKProducerContent * content;              //@synthesize content=_content - In the implementation block
-(id)contentIdentifier;
-(id)init;
-(id)backgroundColor;
-(void)dealloc;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(OKProducerContent *)content;
-(id)initWithURL:(id)arg1 ;
-(id)localizedName;
-(char)isLoaded;
-(char)_load;
-(void)setContent:(OKProducerContent *)arg1 ;
-(id)audioURLs;
-(void)setupJavascriptContext:(id)arg1 ;
-(id)exportedClassNames;
-(char)hasLoadedClass:(Class)arg1 ;
-(double)minimumContentVersion;
-(id)producerWithPresentation:(id)arg1 ;
-(char)loadRetain;
-(void)unloadRelease;
-(id)guidelinesFromLegacyData:(id)arg1 withMediaURLs:(id)arg2 andMediaLookupDelegate:(id)arg3 ;
-(void)_bundleDidLoad:(id)arg1 ;
-(void)_unload;
-(id)supportedResolutions;
-(char)hasExportedClass:(Class)arg1 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(unsigned)family;
@end
