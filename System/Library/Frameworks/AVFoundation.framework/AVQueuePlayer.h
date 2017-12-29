/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(void)initialize;
+(id)queuePlayerWithItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)items;
-(void)removeItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(int)_defaultActionAtItemEnd;
-(char)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(void)removeAllItems;
-(void)advanceToNextItem;
-(void)setActionAtItemEnd:(int)arg1 ;
@end
