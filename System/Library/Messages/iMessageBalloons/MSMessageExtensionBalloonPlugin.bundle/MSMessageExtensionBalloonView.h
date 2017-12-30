/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/MSMessageExtensionBalloonPlugin.bundle/MSMessageExtensionBalloonPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MSMessageExtensionBalloonPlugin/MSMessageExtensionBalloonPlugin-Structs.h>
#import <UIKit/UIView.h>
#import <DigitalTouchBalloonProvider/CKTranscriptPluginView.h>

@protocol LPLinkPresentationPropertyProvider;
@class UIImageView, IMPluginPayload, LPLinkView, NSString;

@interface MSMessageExtensionBalloonView : UIView <CKTranscriptPluginView> {

	char _isInShelf;
	char _fromMe;
	UIImageView* _imageView;
	IMPluginPayload* _payload;
	LPLinkView* _linkView;
	UIImageView* _iconView;
	id<LPLinkPresentationPropertyProvider> _propertyProvider;

}

@property (nonatomic,retain) LPLinkView * linkView;                                                //@synthesize linkView=_linkView - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                               //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) char fromMe;                                                          //@synthesize fromMe=_fromMe - In the implementation block
@property (nonatomic,retain) id<LPLinkPresentationPropertyProvider> propertyProvider;              //@synthesize propertyProvider=_propertyProvider - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                            //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IMPluginPayload * payload;                                            //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) char isInShelf;                                                       //@synthesize isInShelf=_isInShelf - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char wantsOutline; 
-(void)setFromMe:(char)arg1 ;
-(LPLinkView *)linkView;
-(void)setIsInShelf:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 payload:(id)arg2 fromMe:(char)arg3 ;
-(char)isInShelf;
-(void)setLinkView:(LPLinkView *)arg1 ;
-(id<LPLinkPresentationPropertyProvider>)propertyProvider;
-(void)setPropertyProvider:(id<LPLinkPresentationPropertyProvider>)arg1 ;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(IMPluginPayload *)payload;
-(UIImageView *)imageView;
-(void)setPayload:(IMPluginPayload *)arg1 ;
-(char)fromMe;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end
