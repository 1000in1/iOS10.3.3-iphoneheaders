/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	char _imagesHaveBeenLoaded;
	char _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) char haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)setImagePaths:(NSArray *)arg1 ;
-(void)setHaveCGCacheImages:(char)arg1 ;
-(void)_clearResolvedImageResources;
-(char)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(char)haveCGCacheImages;
@end

