/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AUPBServing
@required
-(void)copyProcessingBlock:(unsigned)arg1 property:(unsigned long)arg2 intoReply:(/*^block*/id)arg3;
-(void)setProcessingBlock:(unsigned)arg1 property:(unsigned long)arg2 value:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)getAudioUnit:(unsigned)arg1 propertyInfo:(unsigned long)arg2 onScope:(unsigned long)arg3 element:(unsigned long)arg4 inReply:(/*^block*/id)arg5;
-(void)getAudioUnit:(unsigned)arg1 property:(unsigned long)arg2 onScope:(unsigned long)arg3 element:(unsigned long)arg4 inReply:(/*^block*/id)arg5;
-(void)setAudioUnit:(unsigned)arg1 property:(unsigned long)arg2 onScope:(unsigned long)arg3 element:(unsigned long)arg4 value:(id)arg5 withReply:(/*^block*/id)arg6;
-(void)getAudioUnit:(unsigned)arg1 parameter:(unsigned long)arg2 onScope:(unsigned long)arg3 element:(unsigned long)arg4 inReply:(/*^block*/id)arg5;
-(void)setAudioUnit:(unsigned)arg1 parameter:(unsigned long)arg2 onScope:(unsigned long)arg3 element:(unsigned long)arg4 value:(float)arg5 withReply:(/*^block*/id)arg6;

@end

