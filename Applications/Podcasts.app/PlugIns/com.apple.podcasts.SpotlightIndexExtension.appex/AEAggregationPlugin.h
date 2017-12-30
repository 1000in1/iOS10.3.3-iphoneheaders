/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/AEPlugin.h>

@class AEAnnotationProvider, NSMutableArray, NSString;

@interface AEAggregationPlugin : NSObject <AEPlugin> {

	NSMutableArray* _plugins;
	NSString* _extension;
	NSString* _scheme;

}

@property (nonatomic,readonly) NSString * extension;                                 //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * scheme;                                    //@synthesize scheme=_scheme - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) AEAnnotationProvider * annotationProvider; 
-(char)deleteAssetAtURL:(id)arg1 ;
-(id)associatedAssetType;
-(id)supportedFileExtensions;
-(id)supportedUrlSchemes;
-(id)helperForURL:(id)arg1 withOptions:(id)arg2 ;
-(id)proofingHelperForMetadata:(id)arg1 ;
-(id)initWithFileExtension:(id)arg1 ;
-(id)initWithUrlScheme:(id)arg1 ;
-(void)addPlugin:(id)arg1 ;
-(void)dealloc;
-(NSString *)scheme;
-(NSString *)extension;
@end

