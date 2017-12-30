/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AUAudioUnitBus.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AUAudioUnitXPCProtocol;
@class AUAudioUnit_XH, AVAudioFormat, NSArray;

@interface AUAudioUnitBus_XPC : AUAudioUnitBus <NSSecureCoding> {

	AUAudioUnit_XH* _audioUnit;
	id<AUAudioUnitXPCProtocol> _remoteAU;
	unsigned long _scope;
	unsigned long _element;
	AVAudioFormat* _format;
	NSArray* _supportedChannelLayoutTags;
	BOOL _removingObserverWithContext;

}
+(char)supportsSecureCoding;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(char)setFormat:(id)arg1 error:(id*)arg2 ;
-(void)propertyChanged:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)format;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
@end

