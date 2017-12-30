/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/PlugIns/VideosTodayExtension.appex/VideosTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosTodayExtension/VideosTodayExtension-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UILabel, _TVImageView, UIView, UIVisualEffectView, TVImageProxy, MPArtworkCatalog, NSString, NSURL;

@interface _VideosTodayCollectionViewCell : UICollectionViewCell {

	NSLayoutConstraint* _centerYConstraint;
	NSLayoutConstraint* _imageWidthConstraint;
	UILabel* _contextLabel;
	_TVImageView* _imageView;
	UIView* _separatorView;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	UIVisualEffectView* _vibrantEffectView;
	TVImageProxy* _imageProxy;
	MPArtworkCatalog* _imageArtworkCatalog;
	NSString* _title;
	NSString* _subtitle;
	NSString* _context;
	NSURL* _playbackURL;
	int _titleStyle;

}

@property (nonatomic,retain) TVImageProxy * imageProxy;                           //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,retain) MPArtworkCatalog * imageArtworkCatalog;              //@synthesize imageArtworkCatalog=_imageArtworkCatalog - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * context;                                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSURL * playbackURL;                                   //@synthesize playbackURL=_playbackURL - In the implementation block
@property (assign,nonatomic) int titleStyle;                                      //@synthesize titleStyle=_titleStyle - In the implementation block
-(void)setPlaybackURL:(NSURL *)arg1 ;
-(void)setImageArtworkCatalog:(MPArtworkCatalog *)arg1 ;
-(MPArtworkCatalog *)imageArtworkCatalog;
-(NSURL *)playbackURL;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)context;
-(void)prepareForReuse;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setContext:(NSString *)arg1 ;
-(int)titleStyle;
-(void)setTitleStyle:(int)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(TVImageProxy *)imageProxy;
@end

