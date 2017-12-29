/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic,copy) NSArray * occlusions; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) float level; 
@property (assign,nonatomic) int interfaceOrientation; 
@property (assign,getter=isBackgrounded,nonatomic) char backgrounded; 
+(char)_isMutable;
-(id)transientLocalSettings;
-(void)setFrame:(CGRect)arg1 ;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setBackgrounded:(char)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(id)ignoreOcclusionReasons;
-(void)setOcclusions:(NSArray *)arg1 ;
@end
