/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Music.app/PlugIns/RecentlyPlayedTodayExtension.appex/RecentlyPlayedTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecentlyPlayedTodayExtension/RecentlyPlayedTodayExtension-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC28RecentlyPlayedTodayExtension25ArtworkComponentImageView, NSString;

@interface RecentlyPlayedTodayExtension.RecentlyPlayedCollectionCell : UICollectionViewCell {

	 imageView;
	 artworkComponent;
	 accessibilityMediaTitle;

}

@property (retain,nonatomic) _TtC28RecentlyPlayedTodayExtension25ArtworkComponentImageView * imageView; 
@property (copy,nonatomic) NSString * accessibilityMediaTitle; 
@property (assign,nonatomic) char isHighlighted; 
-(NSString *)accessibilityMediaTitle;
-(void)setAccessibilityMediaTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(_TtC28RecentlyPlayedTodayExtension25ArtworkComponentImageView *)imageView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setImageView:(_TtC28RecentlyPlayedTodayExtension25ArtworkComponentImageView *)arg1 ;
@end

