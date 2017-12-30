/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding> {

	CGSize ratio;
	int orientation;
	int camera;
	char cameraSwitching;
	CGRect contentsRect;
	char videoSourceScreen;

}

@property (assign,nonatomic) CGSize ratio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) int camera; 
@property (assign,nonatomic) char cameraSwitching; 
@property (assign,nonatomic) CGRect contentsRect; 
@property (assign,nonatomic) char videoSourceScreen; 
+(id)videoAttributesWithVideoAttributes:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContentsRect:(CGRect)arg1 ;
-(CGRect)contentsRect;
-(void)setCamera:(int)arg1 ;
-(CGSize)ratio;
-(int)camera;
-(id)initWithEncodedDictionary:(id)arg1 ;
-(void)setRatio:(CGSize)arg1 ;
-(char)isEqualToVideoAttributes:(id)arg1 ;
-(void)decodeFromNSDictionary:(id)arg1 ;
-(char)videoSourceScreen;
-(id)copyEncodedDictionary;
-(char)cameraSwitching;
-(void)setCameraSwitching:(char)arg1 ;
-(void)setVideoSourceScreen:(char)arg1 ;
-(id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(CGSize)arg2 contentsRect:(CGRect)arg3 ;
@end

