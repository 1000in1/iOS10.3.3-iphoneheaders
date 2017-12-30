/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer {

	unsigned _contextID;

}

@property (nonatomic,retain,readonly) CAContext * CAContext; 
@property (nonatomic,readonly) unsigned contextID;                        //@synthesize contextID=_contextID - In the implementation block
+(id)layerWithCAContext:(id)arg1 ;
-(id)_initWithCAContext:(id)arg1 contextID:(unsigned)arg2 level:(float)arg3 ;
-(id)initWithCAContextID:(unsigned)arg1 level:(float)arg2 ;
-(CAContext *)CAContext;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithCAContext:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned)contextID;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

