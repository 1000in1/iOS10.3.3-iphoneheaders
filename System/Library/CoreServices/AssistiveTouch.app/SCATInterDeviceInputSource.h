/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATInputSource.h>

@class NSDictionary;

@interface SCATInterDeviceInputSource : SCATInputSource {

	NSDictionary* _actionIdentifiersToRecipeMappingIndices;
	NSDictionary* _longPressActionIdentifiersToRecipeMappingIndices;

}

@property (assign,nonatomic) id<SCATInterDeviceInputSourceDelegate> delegate; 
@property (nonatomic,retain) NSDictionary * actionIdentifiersToRecipeMappingIndices;                       //@synthesize actionIdentifiersToRecipeMappingIndices=_actionIdentifiersToRecipeMappingIndices - In the implementation block
@property (nonatomic,retain) NSDictionary * longPressActionIdentifiersToRecipeMappingIndices;              //@synthesize longPressActionIdentifiersToRecipeMappingIndices=_longPressActionIdentifiersToRecipeMappingIndices - In the implementation block
-(void)updateWithSwitches:(id)arg1 recipe:(id)arg2 ;
-(void)_didReceiveActionWithIdentifier:(long)arg1 start:(char)arg2 ignoreInputHold:(char)arg3 ;
-(void)handleReceivedSwitchEvent:(id)arg1 deviceName:(id)arg2 ;
-(void)setActionIdentifiersToRecipeMappingIndices:(NSDictionary *)arg1 ;
-(void)setLongPressActionIdentifiersToRecipeMappingIndices:(NSDictionary *)arg1 ;
-(void)_getActionIdentifier:(int*)arg1 longPressActionIdentifier:(int*)arg2 forSwitchEvent:(id)arg3 ;
-(id)_resolveSwitchForSwitchEvent:(id)arg1 deviceName:(id)arg2 ;
-(NSDictionary *)actionIdentifiersToRecipeMappingIndices;
-(NSDictionary *)longPressActionIdentifiersToRecipeMappingIndices;
-(void)dealloc;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

