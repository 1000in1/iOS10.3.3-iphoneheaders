/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:50 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VideoAttributes, NSString;

@interface VCRemoteVideoState : NSObject {

	char _hasReceivedFirstFrame;
	char _isVideoPaused;
	char _isMediaStalled;
	char _isVideoDegraded;
	VideoAttributes* _remoteScreenAttributes;
	VideoAttributes* _remoteVideoAttributes;
	NSString* _localInterfaceType;
	NSString* _remoteInterfaceType;

}

@property (assign) char hasReceivedFirstFrame;                            //@synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame - In the implementation block
@property (assign) char isVideoPaused;                                    //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign) char isMediaStalled;                                   //@synthesize isMediaStalled=_isMediaStalled - In the implementation block
@property (assign) char isVideoDegraded;                                  //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (retain) VideoAttributes * remoteVideoAttributes;               //@synthesize remoteVideoAttributes=_remoteVideoAttributes - In the implementation block
@property (nonatomic,copy) NSString * localInterfaceType;                 //@synthesize localInterfaceType=_localInterfaceType - In the implementation block
@property (nonatomic,copy) NSString * remoteInterfaceType;                //@synthesize remoteInterfaceType=_remoteInterfaceType - In the implementation block
-(void)dealloc;
-(char)isVideoPaused;
-(void)setIsVideoPaused:(char)arg1 ;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(char)isVideoDegraded;
-(void)setIsVideoDegraded:(char)arg1 ;
-(char)isMediaStalled;
-(void)setIsMediaStalled:(char)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(NSString *)localInterfaceType;
-(void)setLocalInterfaceType:(NSString *)arg1 ;
-(NSString *)remoteInterfaceType;
-(void)setRemoteInterfaceType:(NSString *)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setHasReceivedFirstFrame:(char)arg1 ;
-(char)hasReceivedFirstFrame;
@end
