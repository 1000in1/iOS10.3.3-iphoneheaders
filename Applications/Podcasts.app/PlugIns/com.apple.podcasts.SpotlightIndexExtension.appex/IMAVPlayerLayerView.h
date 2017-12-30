/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface IMAVPlayerLayerView : UIView

@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) AVPlayerLayer * videoLayer; 
+(id)playerLayerViewWithPlayer:(id)arg1 ;
+(Class)layerClass;
-(id)initWithPlayer:(id)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
@end

