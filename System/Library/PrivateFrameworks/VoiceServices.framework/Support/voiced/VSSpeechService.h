/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSSpeechService <NSObject>
@required
-(oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)prewarmIfNeededWithRequest:(id)arg1;
-(oneway void)startSpeechRequest:(id)arg1;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1;
-(oneway void)getAutoDownloadedVoiceAssets:(/*^block*/id)arg1;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long)arg2 gender:(long)arg3 type:(long)arg4 reply:(/*^block*/id)arg5;
-(oneway void)pauseSpeechRequestAtMark:(long)arg1;
-(oneway void)continueSpeechRequest;
-(oneway void)stopSpeechRequestAtMark:(long)arg1;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/id)arg2;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)getSpeechIsActiveReply:(/*^block*/id)arg1;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/id)arg1;
-(oneway void)getLocalVoicesReply:(/*^block*/id)arg1;
-(oneway void)getLocalVoiceResourcesReply:(/*^block*/id)arg1;
-(oneway void)setLogToFile:(char)arg1;
-(oneway void)getLogToFile:(/*^block*/id)arg1;

@end

