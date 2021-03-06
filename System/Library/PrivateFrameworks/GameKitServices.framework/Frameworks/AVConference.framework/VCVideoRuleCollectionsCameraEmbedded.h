/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:51 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoRuleCollectionsCamera.h>

@protocol VCHardwareSettingsEmbeddedProtocol;
@interface VCVideoRuleCollectionsCameraEmbedded : VCVideoRuleCollectionsCamera {

	id<VCHardwareSettingsEmbeddedProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)initSupportedPayloads;
-(char)setupRules;
-(char)setupH264Rules;
-(id)initWithHardwareSettings:(id)arg1 ;
-(double)preferredAspectRatio;
-(VCHardwareConfiguration*)hardwareConfiguration;
-(char)setupH264WifiRulesWithEncodingType:(unsigned char)arg1 formatList:(VCVideoFormat*)arg2 formatListCount:(unsigned)arg3 preferredFormat:(id)arg4 supportsHighDef:(char*)arg5 ;
@end

