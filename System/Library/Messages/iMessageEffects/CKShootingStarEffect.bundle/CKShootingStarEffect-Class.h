/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageEffects/CKShootingStarEffect.bundle/CKShootingStarEffect
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKFullScreenEffect.h>

@class NSArray;

@interface CKShootingStarEffect : CKFullScreenEffect {

	NSArray* _filters;

}

@property (nonatomic,retain) NSArray * filters;              //@synthesize filters=_filters - In the implementation block
-(id)init;
-(id)backgroundColor;
-(double)duration;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(Class)effectViewClass;
-(char)shouldDrawOverNavigationBar;
-(id)messageFilters;
-(id)soundEffectFileURL;
-(char)soundEffectHasHapticTrack;
-(unsigned)layerCount;
@end

