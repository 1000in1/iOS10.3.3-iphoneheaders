/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIView.h>

@class ICAttachment, CALayer, ICNoteEditorIconImageView, AVAsset;

@interface ICAudioPlayPauseView : UIView {

	ICAttachment* _audioAttachment;
	CALayer* _backgroundLayer;
	ICNoteEditorIconImageView* _playView;
	ICNoteEditorIconImageView* _pauseView;

}

@property (nonatomic,retain) CALayer * backgroundLayer;                          //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) ICNoteEditorIconImageView * playView;               //@synthesize playView=_playView - In the implementation block
@property (nonatomic,retain) ICNoteEditorIconImageView * pauseView;              //@synthesize pauseView=_pauseView - In the implementation block
@property (nonatomic,readonly) AVAsset * audio; 
@property (nonatomic,retain) ICAttachment * audioAttachment;                     //@synthesize audioAttachment=_audioAttachment - In the implementation block
@property (nonatomic,readonly) char isPlaying; 
-(void)sharedInit;
-(void)audioWillChange;
-(void)audioDidChange;
-(ICAttachment *)audioAttachment;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)showStopped;
-(void)didPlayToEndNotification:(id)arg1 ;
-(id)addSubImageViewForImage:(id)arg1 ;
-(void)setPlayView:(ICNoteEditorIconImageView *)arg1 ;
-(void)setPauseView:(ICNoteEditorIconImageView *)arg1 ;
-(ICNoteEditorIconImageView *)playView;
-(ICNoteEditorIconImageView *)pauseView;
-(void)showPressed:(char)arg1 ;
-(void)showPlaying;
-(void)showPaused;
-(void)audioPlaybackPlayNotification:(id)arg1 ;
-(void)audioPlaybackPauseNotification:(id)arg1 ;
-(void)audioPlaybackStopNotification:(id)arg1 ;
-(void)audioPlaybackTimeChangedNotification:(id)arg1 ;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(void)setAudioAttachment:(ICAttachment *)arg1 ;
-(void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(char)arg3 ;
-(UIColor*)foregroundStrokeColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(char)isPlaying;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
-(void)play;
-(void)pause;
-(void)tapGesture:(id)arg1 ;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(CALayer *)backgroundLayer;
-(void)togglePlayPause;
-(AVAsset *)audio;
@end

