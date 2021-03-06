/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CALayer, NSDictionary, NSMutableDictionary;

@interface IMMicaAnimator : NSObject {

	NSString* m_name;
	CALayer* m_rootLayer;
	NSDictionary* m_publishedObjects;
	NSMutableDictionary* m_preFetchedLayerImages;

}

@property (nonatomic,retain) NSDictionary * publishedObjects; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) CALayer * rootLayer; 
-(id)_URLForDocumentName:(id)arg1 ;
-(id)_fileDataForURL:(id)arg1 ;
-(id)_fileDataForDocumentName:(id)arg1 ;
-(id)initWithName:(id)arg1 rootLayer:(id)arg2 publishedObjects:(id)arg3 ;
-(id)initWithFileName:(id)arg1 ;
-(void)addToLayer:(id)arg1 ;
-(id)publishedObjectWithKey:(id)arg1 required:(char)arg2 ;
-(void)fetchArtwork;
-(void)updateArtwork;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeFromSuperlayer;
-(void)setRootLayer:(CALayer *)arg1 ;
-(CALayer *)rootLayer;
-(void)setPublishedObjects:(NSDictionary *)arg1 ;
-(NSDictionary *)publishedObjects;
@end

