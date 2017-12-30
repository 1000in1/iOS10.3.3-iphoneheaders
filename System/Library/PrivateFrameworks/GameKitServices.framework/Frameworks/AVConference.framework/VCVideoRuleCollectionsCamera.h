/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollections.h>

@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {

	char _encodeHighDef;
	char _decodeHighDef;

}
+(id)sharedInstance;
-(char)useSoftFramerateSwitching;
-(char)setupH264CellularRules;
-(void)resetEncodingRulesForCameraIsHD:(char)arg1 isWVGA:(char)arg2 ;
-(double)preferredAspectRatio;
-(char)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 encodingType:(unsigned char)arg4 aspectRatio:(double)arg5 forPayload:(int)arg6 ;
-(char)isHiDefCapable;
-(char)getBestPreviewFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3 ;
@end
